<?php

$servername = "localhost";
$username = "root";
$password = "";
$database = "loginsystem";

// Create connection
$con = new mysqli($servername, $username, $password, $database);

    if (mysqli_connect_errno()){
        echo "Failed to connect to MySQL: " . mysqli_connect_error();
    }
?>