<?php
session_start();
require('db.php');

//Fetch 3 rows from actor table

  $username = stripslashes($_SESSION['username']);

  $result = $con->query("SELECT * FROM posts WHERE username='$username' ORDER BY
  id DESC");

//Initialize array variable
  $dbdata = array();

//Fetch into associative array
  while ( $row = $result->fetch_assoc())  {
	$dbdata[]=$row;
  }

//Print array in JSON format
 echo json_encode($dbdata);
 
?>
