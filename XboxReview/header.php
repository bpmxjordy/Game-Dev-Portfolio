<?php
include("auth_session.php");
?>
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta charset="utf-8">
    <title>Xbox Reviews</title>
    <link rel="icon" href="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Xbox_one_logo.svg/2048px-Xbox_one_logo.svg.png">
    <link rel="stylesheet" href="css/header.css" />
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Ubuntu:wght@300&display=swap" rel="stylesheet">
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js" integrity="sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q" crossorigin="anonymous"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js" integrity="sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl" crossorigin="anonymous"></script>
  </head>

  
<nav class="navbar navbar-expand-lg " style="background-color: rgb(15, 16, 19); color: white;">
  <a class="navbar-brand" href="index.php" style="color: #cbf0cb;">Xbox<br> Reviews</a>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent"  aria-label="Toggle navigation" style="height:100%; margin-right: 30px; margin-bottom: 15px; outline: none !important;">
    <span class="navbar-toggler-icon" style="margin: 0px; color: white; font-size: 0.5rem;">______ <br> ____ <br> _____ </span>
  </button>

  <div class="collapse navbar-collapse" id="navbarSupportedContent">
    <ul class="navbar-nav mr-auto">
      <li class="nav-item">
        <a class="nav-link" href="index.php" style="color: white;">Home</a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="reviews.php" style="color: white;">Reviews</a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="consolePage.php" style="color: white;">About the xbox</a>
      </li>
    </ul>
    <form class="form-inline my-2 my-lg-0" style="margin-right: 5%;">
    <?php


if(empty($_SESSION["username"])) {
    echo('  <li class="nav-item">
                    <a href="login.php" class="nav-link"><button class="btn btn-outline-success" type="button" name="login" style="border-color: #cbf0cb; color: #cbf0cb;">Login</button></a>
            </li>
            <li class="nav-item">
                    <a href="registration.php" class="nav-link"><button class="btn btn-outline-success my-2 my-sm-0" type="button" name="login" style="border-color: #cbf0cb; color: #cbf0cb;">Register</button></a>
            </li>
            </div>
');
}else{
    echo('
    <input type="hidden" id="hdnSession" data-value=' .$_SESSION['username']. '>
    <li class="nav-item dropdown" style="width: 100%;">
    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLink" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false" style="color: #cbf0cb;">
    '.$_SESSION['username'].'
    </a>
    <div class="dropdown-menu" aria-labelledby="navbarDropdownMenuLink">
      <a class="dropdown-item" href="profile.php" >Profile Page</a>
      <a href="logout.php" class="nav-link"><button class="btn btn-outline-success my-2 my-sm-0" type="button" name="logout" >Logout</button></a>
    </div>
  </li>  ');
}
?>

    </form>
  </div>
</nav>


</div>
</nav>