<?php
//include auth_session.php file on all user panel pages
include("header.php");
?>

<head>
    <link rel="stylesheet" href="css/index.css">
    <link rel="stylesheet" href="css/cardReview.css">
</head>
<div class="review-container">
    <div class="user-cards" data-user-cards-container></div>
          
          <template data-user-template >
          
                <div class="card" href="" style="background: none;">
                <a >
                  <div class="image" data-image></div>
                  <div class="image-text-container">
                    <div class="header" data-header></div>
                    <div class="rating" >/5<span data-rating class="rating"></span> Rating: </div>
                  </div>
                  <div class="nameRating">
                    <div class="username" data-username></div> <div id="nameRatingSpacing"></div>
                        
                    <div class="time" data-time></div> 
                  </div>
                  <div class="text" data-review ></div>
                  <div id="priceAndLink">

                  <div class="text price-text" data-price ></div>
                    <a href="" data-game-link1>
                      <div class="text-link game-link" data-game-link1-text ></div>
                    </a>

                    <a href="" data-game-link2>
                      <div class="text-link game-link" data-game-link2-text ></div>
                    </a>

                    <a href="" data-game-link3>
                      <div class="text-link game-link" data-game-link3-text ></div>
                    </a>

                    <a href="" data-game-review1>
                      <div class="text-link game-link" data-game-review1-text ></div>
                    </a>

                    <a href="" data-game-review2>
                      <div class="text-link game-link" data-game-review2-text ></div>
                    </a>

                    <a href="" data-game-review3>
                      <div class="text-link game-link" data-game-review3-text ></div>
                    </a>


                    <div class="text game-genre" data-game-genre ></div>

                    <div class="text game-age-rating" data-game-age-rating ></div>
                    
                    <div class="text game-creator" data-game-creator ></div>

                    <div class="text game-platforms" data-game-creator ></div>

                    <div class="text game-release-date" data-game-release-date ></div>

                    <div class="text game-platforms" data-game-platforms ></div>
                    

                    
                    
                  </div>
                    
                  <div id="id" data-id></div> 
                </a>
                  
                
                </div>
              

              
          </template>
      
      </div>
<?php
include("footer.php");
?>

<body>
<script src="reviewPagePostFill.js" defer></script>
<script>
function reviewPage() {
  window.location = 'index.php?'+document.getElementById("id").innerHTML;
 // return document.getElementById("id").textContent;
  
}
</script>

</body>
</html>