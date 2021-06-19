//jshint esversion : 6
const express = require("express");
const app = express();
const port = 3000;
app.get("/", function (req, res) {
    //console.log(req)
    res.send(`Listening to PORT ${port}`)
})

app.get("/contact", function (req, res) {

    res.send("Dont contact me")
})
app.get("/about", function (req, res) {
    res.send("Error 404")
})

app.listen(port, function () {
    console.log("Server started at Port 3000");
});


