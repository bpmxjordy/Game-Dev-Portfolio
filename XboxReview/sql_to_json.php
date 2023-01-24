<?php

require('db.php');

//Fetch 3 rows from actor table
  $result = $con->query("SELECT * FROM posts ORDER BY
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
