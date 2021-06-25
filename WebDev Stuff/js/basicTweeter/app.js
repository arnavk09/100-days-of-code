let express = require("express");
let bodyParser = require("body-parser")
let app = express();
app.use(bodyParser.urlencoded({extended:true}))
app.set('view engine', 'ejs');
app.get("/", function (req, res) {
    res.sendFile(__dirname+ "/index.html");
});

app.post("/tweet",function (req,res) {
    var tweetContent=req.body.tweet;
    console.log(tweetContent);
    res.send("You Tweeted : "+ tweetContent);
})


//LISTENER
app.listen(3000, function () {
    console.log("Listening to PORT 3000")
})