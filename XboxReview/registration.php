<?php
//include auth_session.php file on all user panel pages
include("header.php");
session_destroy();
?>
<link rel="stylesheet" href="css/registration.css">
<body style="background-color: #1c1e22;">

<div id="main-contents">
    <h1>Register</h1>
    <div id="form-div">
        
<?php
    // When form submitted, insert values into the database.
    if (isset($_REQUEST['username'])) {
        // removes backslashes
        $username       = stripslashes($_REQUEST['username']);
        //escapes special characters in a string
        $email          = stripslashes($_REQUEST['email']);
        $password       = stripslashes($_REQUEST['password']);
        $game       = stripslashes($_REQUEST['game']);
        
        $json_string    = file_get_contents('formdata.txt');
        $parsed_json    = json_decode($json_string, true);
        $flag           = false;

        
        foreach ($parsed_json as $key => $value) {
            if ($value['username'] == $username) {
                $flag = true;
                break;
            }
        }
        if ($flag) {
            echo "<div class='form' style='margin-top: 15px;'>
                  <h3>Username already in use.</h3><br/>
                  <p class='link'>Click here to <a href='registration.php'>try</a> again.</p>
                  </div>";
        } else {

            $formdata = array(
                'username'=> $_REQUEST['username'],
                'email'=> $_REQUEST['email'],
                'password'=> $_REQUEST['password'],
                'game'=> $_REQUEST['game'],
              );
          
              // path and name of the file
              $filetxt = 'formdata.txt';
          
              $arr_data = array();        // to store all form data
          
              // check if the file exists
              if(file_exists($filetxt)) {
                // gets json-data from file
                $jsondata = file_get_contents($filetxt);
          
                // converts json string into array
                $arr_data = json_decode($jsondata, true);
              }
          
              // appends the array with new form data
              $arr_data[] = $formdata;
          
              // encodes the array into a string in JSON format (JSON_PRETTY_PRINT - uses whitespace in json-string, for human readable)
              $jsondata = json_encode($arr_data, JSON_PRETTY_PRINT);
          
              // saves the json string in "formdata.txt" (in "dirdata" folder)
              // outputs error message if data cannot be saved
              if(file_put_contents('formdata.txt', $jsondata)) {
                
                echo "  <div class='form'>
                        <h3>You are registered successfully.</h3><br/>
                        <p class='link'>Click here to <a href='login.php'>Login</a></p>
                        </div>";

              }
              
              else echo 'Unable to save data in "formdata.txt"';
        }
    
    }else {
        echo '  <form id="form-container">
                    <div class="form-group">
                        <label for="exampleInputEmail1">Username &amp; Email Address</label>
                        <input type="text" name="username" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder="Enter Username" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;" required="">
                        <div id="useremailspacing"></div>
                        <input type="email" name="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder="Enter Email" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;" required="">
                        <small id="emailHelp" class="form-text text-success">We will never share your email with anyone else.</small>
                    </div>
                    <div class="form-group">
                        <label for="exampleInputPassword1">Password</label>
                        <input type="password" class="form-control" name="password" id="exampleInputPassword1" placeholder="Password" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;" required="">
                    </div>
                    <div class="form-group">
                        <label for="exampleInputPassword1">Favorite Game</label>
                        <input type="text" class="form-control" name="game" id="exampleInputEmail1" placeholder="Favorite game" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;" required="">
                    </div>
                    <button type="submit" class="btn btn-primary" style="background-color: #cbf0cb; border: none; color: black;">Submit</button>
                </form>';
    }
?>
    </div>
    </div>

    <?php
        include("footer.php");
    ?>
</body>
</html>