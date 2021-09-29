// const delayedColorChange = (newColor,delay) => {
//     setTimeout(() => {
//         document.body.style.backgroundColor=newColor
//     }, delay);
// };
// delayedColorChange('red',1000);
// delayedColorChange('green',2000);
// delayedColorChange('blue',3000);

// const sing=async()=>{
//     throw new Error("oh no")
//     return('lalala');
// }
// sing()
// .then(data=>{
//     console.log("pspspss",data);
// })
// .catch(err=>{
//     console.log('hahaha bro');
// })

const login = async (username, password) => {
  if (!username === !password) {
    throw "missing creds lol";
  }
  if (password === "qwerty") {
    return "welcome";
  }
  throw "invalid password";
};

login('pspsps','asha')
  .then((data) => {
    console.log("logged in");
    console.log(data);
  })
  .catch((error) => {
    console.log("error");
    console.log(error);
  });
