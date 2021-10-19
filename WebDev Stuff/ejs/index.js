const express = require("express");
const app = express();
const redditData = require("./data.json");
app.use(express.static("public"));
app.set("view engine", "ejs");

app.use(express.static(__dirname + "/public"));

app.get("/", (req, res) => {
  res.render("home.ejs");
});

app.get("/random", (req, res) => {
  const num = Math.floor(Math.random() * 10) + 1;
  res.render("random.ejs", { num, title:'random' });
});
app.get("/r/:subreddit", (req, res) => {
  const { subreddit } = req.params;
  const data = redditData[subreddit];
  if (data) {
    res.render("subreddit.ejs", { ...data });
  } else {
    res.render("notfound.ejs", { subreddit });
  }
});
app.get("/cats", (req, res) => {
  const cats = ["Blue", "Rocket", "Monty", "Ben", "Winston"];
  res.render("cats.ejs", { cats });
});
app.get("/about", (req, res) => {
  res.render("about.ejs");
});
app.listen(3000, () => {
  console.log("Listening on port 3000");
});
