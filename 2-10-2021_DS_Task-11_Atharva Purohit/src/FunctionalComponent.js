import React from "react";
import './style.css';
function FuntionalComponent() {
    return(
    
    <div className="login"> 
    
    <h2 id="lp">Login Page</h2>

    <br/> 
    <div>
    <form id="login" method="get" action="login.php">

    <label><b>User Name     
    </b>    
    </label>    
    <input type="text" name="Uname" id="Uname" placeholder="Username"/>    
    <br/><br/>    
    <label><b>Password     
    </b>    
    </label>    
    <input type="Password" name="Pass" id="Pass" placeholder="Password"/>    
    <br/><br/>
    <button id="l">  
    <input type="button" name="log" id="log" value="Log In "/>  
    </button>       
    <br/><br/>    
    <input type="checkbox" id="check"/>    
    <span>Remember me</span>    
    <br/><br/>    
    <a href="#">Forgot Password</a>    
    </form>
    </div>     
    </div> 

    )
}
 export default FuntionalComponent