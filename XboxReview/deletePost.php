<?php
session_start();
require('db.php');

$json_string    = file_get_contents('postdata.txt');
$parsed_json    = json_decode($json_string, true);

foreach ($parsed_json as $i => $parsed_json) 
{
    if ($parsed_json->id == $id) 
    {
        unset ($posts[$i]);
        $save = json_encode(array_values($posts), JSON_PRETTY_PRINT | JSON_UNESCAPED_UNICODE);
        file_put_contents('posts.json', $save);
        break;
    }
}
?>
