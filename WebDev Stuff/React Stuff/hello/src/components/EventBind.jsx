import React, { Component } from "react";
import "./style.css";
class EventBind extends Component {
  constructor(props) {
    super(props);

    this.state = {
      message: "hello",
    };
    this.clickHandler = this.clickHandler.bind(this)
  }
  clickHandler() {
    this.setState({
      message: "eventClickedviaBind",
    }); 
  }
 
  render() {
    return (
      <div>
        <br />
        <br />
        <br />
        <br />
        <br />
        <br />
        <center>{this.state.message}</center>
        <center>
          <br />
          <br />
          <br />
          <button className="clicky" onClick = {this.clickHandler}>
            Click{" "}
          </button>
          <br/><br/>
        </center>
      </div>
    );
  }
}
export default EventBind;
