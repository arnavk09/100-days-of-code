import React, { Component } from "react";
class Message extends Component {
    constructor(){
        super()
        this.state={
            message : 'welcome User'
        }
    }
    changeMessage(){
        this.setState({
            message:"Button clicked and state changed"
            
        })
    }

  render() {
    return (
      <div>
        <h4 align="center">{this.state.message}</h4>
        <center><button onClick={()=>this.changeMessage()}>Subscribe</button></center>
      </div>
    );
  }
}
export default Message;
