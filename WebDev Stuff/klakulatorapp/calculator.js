const express = require("express");
const bodyParser=require("body-parser");
const app = express();
app.use(bodyParser.urlencoded({extended:true}))
const port = 3000;
app.get("/", function (req, res) {
    //console.log(req)
    //res.send(`Listening to PORT ${port}`)
    res.sendFile(__dirname+ "/index.html");
})
app.post("/answer",function (req,res) {
    var num1,num2;
    num1=Number(req.body.num1);
    num2=Number(req.body.num2);
    var submit=Number(num1+num2);
    


    res.send("Answer : " + submit)
    // console.log(req.body)

    
})
//Listener
app.listen(port, function () {
    console.log("Server started at Port 3000");
});