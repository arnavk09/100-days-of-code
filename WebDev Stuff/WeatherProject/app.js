const express = require("express");
const app = express();
const https = require('https');
app.get("/", function (req, res) {
    const url = "https://api.openweathermap.org/data/2.5/weather?appid=7b4cdb5fc8b9fafa2c48eae8d7fbd06d&q=Pune&units=metric";
    https.get(url, function (response) {
        console.log(response.statusCode);
        response.on("data", function (data) {
            const weatherData = JSON.parse(data);
            const temp = weatherData.main.temp;
            const desc = weatherData.weather[0].description;
            console.log(desc);
            console.log(temp);
            res.write("<h1>The temperature in Pune is " + temp + " degrees celsius</h1>");
            res.write("The Weather is kinda like "+desc);
            res.send();
        });
    });
});
//LISTENER
app.listen(3000, function () {
    console.log("Listening to PORT 3000");
});