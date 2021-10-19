const express = require("express");
const app = express();
app.use(express.static("public"));
app.set("view engine", "ejs");

app.use(express.static(__dirname + "/public"));

app.get("/", (req, res) => {
  res.render("home.ejs");
});
app.get("/about", (req, res) => {
  res.render("about.ejs");
});
app.get("/team", (req, res) => {
  res.render("team.ejs");
});
app.get("/contact", (req, res) => {
  res.render("contact.ejs");
});
app.listen(3000, () => {
  console.log("Listening on port 3000");
});
