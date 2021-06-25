let express = require("express");
let bodyParser = require("body-parser")
let app = express();
app.set('view engine', 'ejs');

app.get("/", function (req, res) {
    //res.send("hello")
    var today = new Date();
    var currentDay = today.getDay();
    var Day;
switch (currentDay) {
    case 0:
        Day="Sunday";
        break;
    case 1:
        Day="Monday";
        break;
    case 2:
        Day="Tuesday";
        break;
    case 3:
        Day="Wednesday";
        break;
    case 4:
        Day="Thursday";
        break;
    case 5:
        Day="Friday";
        break;
    case 6:
        Day="Saturday";
        break;
    default:
        console.log("Error");
        break;
}
res.render("list",{kindOfDay:Day});

                   //Display Weekend or Weekday
    // if (currentDay === 6 || currentDay === 0) {
    //   //  res.sendFile(__dirname + "/weekend.html");
    //     Day="Weekend";
    //     res.render("list",{kindOfDay:Day});

    // } else {
    //   //  res.sendFile(__dirname + "/weekday.html");
    //     Day="Weekday";
    //     res.render("list",{kindOfDay:Day});
    // }

});
app.listen(3000, function () {
    console.log("Listening to PORT 3000")
})