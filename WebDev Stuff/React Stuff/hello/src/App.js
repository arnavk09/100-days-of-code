import "./App.css";
import React from "react";
import { Buttonsync } from "./components/Buttonsync";
import { Greet } from "./components/Greet";
import Welcome from "./components/classWelcome";
import Hello from "./components/Hello";
function App() {
  return <div className="App">
   <Greet/>
   <br></br>
   <Buttonsync/>
   <br></br>
   <Welcome/>
   <br></br>
   <Hello/>
   </div>;
}

export default App;
