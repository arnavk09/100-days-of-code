console.log("Scroll down for surprise?");

var makeRandColor = () => {
  const r = Math.floor(Math.random() * 255);
  const g = Math.floor(Math.random() * 255);
  const b = Math.floor(Math.random() * 255);
  return `rgb(${r},${g},${b})`;
};

//main stuff

const buttons = document.querySelectorAll("button");
const headings = document.querySelectorAll("h1");

function colorize() {
  this.style.background = makeRandColor(); //global object are buttons and headings
  this.style.color = makeRandColor();
}

for (let button of buttons) {
  button.addEventListener("click", colorize);
}

for (let head of headings) {
  head.addEventListener("click", function () {
    head.addEventListener("click", colorize);
  });
}
function adder(x, y) {
  x = 10;
  y = 20;
  var z = x + y;
  alert(`Answer is ${z}`);
}
