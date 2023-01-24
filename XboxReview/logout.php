<?php
    session_start();
    // Destroy session
    unset ($_SESSION["username"]);
    if(session_destroy()) {
        // Redirecting To Home Page
        header("Location: index.php");
    }
?>