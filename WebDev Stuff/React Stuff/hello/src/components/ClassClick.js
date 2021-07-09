import React, { Component } from "react";

class ClassClick extends Component {
  clickHandler(){
      console.log("Class BUTTON CLICKED");
  }

  render() {
    return (
      <div>
        <span>
          <center>
            <button className="clicky" onClick={this.clickHandler}>Class Click</button>
          </center>
          <br />
          <br />
          <br />
          <br />

          <code>
            <center>
              Class click is the same as function click but we use class component
              instead
            </center>
          </code>
        </span>
      </div>
    );
  }
}

export default ClassClick;
