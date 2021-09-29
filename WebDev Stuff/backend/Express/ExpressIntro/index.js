const express = require("express");
const app = express();
const port = 5000;

// app.use("/", (req, res) => {
//   // res.send(`The New Request is Obtained for PORT ${port}`);
//   res.send({ color: "red" });
// });

app.post("/cats", (req, res) => {
  res.send("post to /cats");
});

app.get("/cats", (req, res) => {
  res.send("miaou");
});

app.get("/dogs", (req, res) => {
  res.send("woof");
});

app.get("/", (req, res) => {
  res.send("ghar");
});

app.listen(port, () => {
  console.log(`Example app listening at port ${port}`);
});
