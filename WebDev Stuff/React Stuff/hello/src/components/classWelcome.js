import React, { Component } from "react";
class Welcome extends Component {
  render() {
    return (
      <div>
        <h4 align="center">Class Welcome aka {this.props.thingy}</h4>
      </div>
    );
  }
}
export default Welcome;
