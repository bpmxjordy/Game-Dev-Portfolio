<?php include("header.php");?>
<link rel="stylesheet" href="css/registration.css">
<body style="background-color: #1c1e22;">

<div id="main-contents">
    <h1>Login</h1>
    <div id="form-div">
    <?php
    // When form submitted, check and create user session.
    if (isset($_POST['username'])) {
        $username = stripslashes($_REQUEST['username']);    // removes backslashes
        $password = stripslashes($_REQUEST['password']);
        // Check user is exist in the database
            $json_string = file_get_contents('formdata.txt');
            $parsed_json = json_decode($json_string, true);
            $flag        = false;
            foreach ($parsed_json as $key => $value) {
                if ($value['username'] == $username && $value['password'] == $password) {
                    $flag = true;
                    break;
                }
            }
            if ($flag) {
                $_SESSION['username'] = $username;
                header('location: profile.php');
            } else {
                echo "  <div class='form'>
                        <h3>Incorrect Username/password.</h3><br/>
                        <p class='link'>Click here to <a href='login.php'>try</a> again.</p>
                        <p class='link'>Click here to <a href='registration.php'>register</a></p>
                        </div>";
            }
        } else {
            echo '        <div id="form-div">

            <form id="form-container" method="post" name="login"> 
            <div class="form-group">
            <label for="exampleInputEmail1">Username</label>
            <input type="username" name="username" class="form-control" id="exampleInputEmail1" aria-describedby="usernameHelp" placeholder="Enter Username" required="" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;">
            </div>
            <div class="form-group">
            <label for="exampleInputPassword1">Password</label>
            <input type="password" name="password" class="form-control" id="exampleInputPassword1" placeholder="Password" required="" style="background-color: rgb(18, 19, 22); border-radius: 0px; border: 1px solid grey; color: #cbf0cb;">
            </div>
            <button type="submit" value="Login" name="submit" class="btn btn-primary" style="background-color: #cbf0cb; border: none; color: black;">Submit</button>
            </form>
            </div>';
        } ?>
    </div>
    </div>
<?php include("footer.php");?>
</body>
</html>