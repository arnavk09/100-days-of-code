import React from 'react'
import './style.css'

function ChildComponent(props) {
    return (
        <div>
            <center><button className="clicky" onClick = {props.greetHandler}>Greet Parent</button></center>
        </div>
    )
}

export default ChildComponent
