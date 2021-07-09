import React from 'react'

function FunctionClick() {
function clickHandler(){
console.log("function button clicked ");
}


    return (
        <div>
            <center><button className="clicky" onClick={clickHandler}>Function Click</button></center>
        </div>
    )
}

export default FunctionClick
