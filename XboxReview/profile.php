<?php
//include auth_session.php file on all user panel pages
include("header.php");
?>

<head>
    <link rel="stylesheet" href="css/index.css">
    <link rel="stylesheet" href="css/profile.css">
    <link rel="stylesheet" href="css/card.css">
</head>

<div id="main-contents">
<form id="post-form" >
    <div class="profile-contents2">

        <div class="profile-contents">
            <h1 id="profile-name"><?php echo $_SESSION['username']; ?></h1>
        </div>

        <div class="create-post-cont">
            <div class="form-group">
                <div class="form-group">
                <div class="game-cards" data-profile-cards-container></div>
                <template data-profile-template >
                        <h3 id="profile-name"> Favorite Game: <div class="text" data-game></div></h1>  
                </template>

                </div>
            </div>
        </div>

    </div>
</form> 

    <form id="post-form" >

<div class="profile-contents">
<div class="profile-contents">
            <h1 id="profile-name">Create a post</h1>
        </div>
    <div class="create-post-cont">
    <div class="form-group">
        <input type="text" name="game-name" class="form-control1" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder="Enter Game Title" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
        </div>
        <div id="useremailspacing"></div>
            <div class="form-group">
                <textarea style="background-color: rgb(18, 19, 22); border-radius: 5px; border: 1px solid grey; color: #cbf0cb;" placeholder="Enter review" name="review-text" class="form-control1" id="exampleFormControlTextarea1" rows="3" required></textarea>
            </div>
            
            <div id="useremailspacing"></div>
            <div class="form-group">
                <input type="text" name="image-link" class="form-control1" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder="Enter picture link" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>
            
            <div id="useremailspacing"></div>
            <div class="form-group">
                <input type="text" name="product-link1" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product link 1" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-link2" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product link 2" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-link3" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product link 3" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>            
            
            <div class="form-group">
                <input type="text" name="product-review1" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product review 1" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-review2" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product review 2" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-review3" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product review 3" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-release" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product release date" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-platforms" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product platforms" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
                <input type="text" name="product-creator" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product creator" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div id="useremailspacing"></div>
            <div class="form-group">
                <input type="text" name="product-price" class="form-control1" id="exampleInputEmail1" aria-describedby="productHelp" placeholder="Enter product price" style="background-color: rgb(18, 19, 22); border: 1px solid grey; color: #cbf0cb;" required>
            </div>

            <div class="form-group">
            <select name="age-rating" style="background-color: rgb(18, 19, 22); border: 1px solid grey; padding: 10px; color: #cbf0cb;" required>
                <option value="" disabled selected>Age Rating</option>
                <option value="3">3</option>
                <option value="7">7</option>
                <option value="12">12</option>
                <option value="16">16</option>
                <option value="18+">18+</option>
            </select>
            </div>

            <div class="form-group">
            <select name="genre" style="background-color: rgb(18, 19, 22); border: 1px solid grey; padding: 10px; color: #cbf0cb;" required>
                <option value="" disabled selected>Genre</option>
                <option value="Action">Action</option>
                <option value="Adventure">Adventure</option>
                <option value="Racing">Racing</option>
                <option value="Simulation and sports">Simulation and sports</option>
                <option value="RPG">RPG</option>
                <option value="Puzzle and Party">Puzzle and Party</option>
                <option value="Sandbox">Sandbox</option>
                <option value="Moba">Moba</option>
                <option value="RTS">RTS</option>
            </select>
            </div>


            <div class="form-group">
            <select name="rating" style="background-color: rgb(18, 19, 22); border: 1px solid grey; padding: 10px; color: #cbf0cb;" required>
                <option value="" disabled selected>Rating</option>
                <option value="1">1</option>
                <option value="2">2</option>
                <option value="3">3</option>
                <option value="4">4</option>
                <option value="5">5</option>
            </select>
            </div>
            <div class="form-group">
                <button type="submit" class="btn btn-primary postButton" style="background-color: #cbf0cb; color: black; border: none;">Submit</button>
            </form>
        </div>
        </div>
    
</div>
</div>
<?php
require('db.php');

$json_string    = file_get_contents('postdata.txt');
$parsed_json    = json_decode($json_string, true);
$flag           = false;
$highId         = 0;

foreach ($parsed_json as $key => $value) {
    if ($value['id'] > $highId) {
        $highId = $value['id'];
    }
}
// When form submitted, insert values into the database.
if (isset($_REQUEST['game-name'])) {
    // removes backslashes
    $gameName = ($_REQUEST['game-name']);
    //escapes special characters in a string
    $username = $_SESSION["username"];
    $reviewText    = ($_REQUEST['review-text']);
    $gameRating    = ($_REQUEST['rating']);
    $imageLink = stripslashes($_REQUEST['image-link']);
    $productLink1 = ($_REQUEST['product-link1']);
    $productLink2 = ($_REQUEST['product-link2']);
    $productLink3 = ($_REQUEST['product-link3']);
    $productReview1 = ($_REQUEST['product-review1']);
    $productReview2 = ($_REQUEST['product-review2']);
    $productReview3 = ($_REQUEST['product-review3']);
    $productCreator = ($_REQUEST['product-creator']);
    $ageRating = ($_REQUEST['age-rating']);
    $genre = ($_REQUEST['genre']);
    $productPlatforms= ($_REQUEST['product-platforms']);
    $releaseDate = ($_REQUEST['product-release']);
    $price = stripslashes($_REQUEST['product-price']);
    $create_datetime = date("Y-m-d H:i:s");




            $formdata = array(
                'id' => $highId + 1,
                'username'=> $_SESSION['username'],
                'game'=> $gameName,
                'game_image'=> $imageLink,
                'game_review'=> $reviewText,
                'product_link1'=> $productLink1,
                'product_link2'=> $productLink2,
                'product_link3'=> $productLink3,
                'product_review1'=> $productReview1,
                'product_review2'=> $productReview2,
                'product_review3'=> $productReview3,
                'product_creator'=> $productCreator,
                'age_rating'=> $ageRating,
                'product_platforms'=> $productPlatforms,
                'product_release_date'=> $releaseDate,
                'rating'=> $gameRating,
                'genre' => $genre,
                'product_price' => $price,
                'create_datetime'=> $create_datetime,
                
              );
          
              // path and name of the file
              $filetxt = 'postdata.txt';
          
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
              if(file_put_contents('postdata.txt', $jsondata)) {
                
                echo "";

              }
              
              else echo '';
        }

?>
<div class="container-fluid px-1 py-5 mx-auto">
    <div class="row justify-content-center" style=" margin: 0px; width: 100%;">
    

    <div class="user-cards" data-user-cards-container></div>
          
    <template data-user-template >
          
                <div class="card" href="" style="background: none;">
                <a  data-link>
                  <div class="image" data-image></div>
                    <div class="header" data-header style="display: -webkit-box; -webkit-line-clamp: 1; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;"></div>
                    <div class="text" data-review style="display: -webkit-box; -webkit-line-clamp: 3; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;"></div>
                      <div class="nameRating">
                      <div class="username" data-username></div> <div id="nameRatingSpacing"></div>
                        <div class="rating" >/5<span data-rating class="rating"></span> Rating: </div>
                        </div>
                    <div class="time" data-time></div> 
                  <div id="id" data-id></div> 
                </a>
                  
                
                </div>
              

              
          </template>
      
      </div>
</div>
</div>


<body>

<?php
include("footer.php");
?>

<script>
function reviewPage(x) {

  window.location = 'reviewPage.php?'+x;
 // return document.getElementById("id").textContent;
  
}

</script>

<script src="profilePostFill.js" defer></script>
</body>
</html>