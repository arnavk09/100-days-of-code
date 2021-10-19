var mass1, height1, mass2, height2;
mass1 = 78;
mass2 = 92;
height1 = 1.69;
height2 = 1.95;
var BMI1 = mass1 / (height1 * height1);
var BMI2 = mass2 / (height2 * height2);

console.log(`BMI1 : ${BMI1}`);
console.log(`BMI2 : ${BMI2}`);

if (BMI1 > BMI2) {
  console.log("BMI1>BMI2");
} else if (BMI1 < BMI2) {
  console.log("BMI1<BMI2");
}
