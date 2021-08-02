function incrementButton() {
  var element = document.getElementById("incrementText");
  var value = element.innerText;
  ++value;
  console.log(value);
  document.getElementById("incrementText").innerHTML = value;
}
