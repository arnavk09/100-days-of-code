function sing() {
    console.log("Sing1");
    console.log("Sing2");
    console.log("Sing3");
    console.log("bye");
}
function greetings(firstName,lastName) {
    console.log(`Hey, ${firstName}  ${lastName}`);
    
}
function adder(x,y) {
    console.log(`Enter 2 numbers : ${x} ${y}`);
    var sum = x+y;
    console.log(sum);
}
function multipletextprinter(text,num) {
    
    for(var i=0;i<num;++i){
     
        console.log(text)
    }
    
}
//We will use RETURNS now.


function returnableAdd(x,y) {
    var sum = x+y;
    return sum;
}
