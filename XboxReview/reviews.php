<?php
//include auth_session.php file on all user panel pages
include("header.php");
?>

<head>
    <link rel="stylesheet" href="css/index.css">
    <link rel="stylesheet" href="css/card.css">
</head>

<div class="filter-section">
<label for="exampleInputPassword1">Filters</label>
<div class="filter-options">
              <select id="rating-change" name="rating" style="background-color: rgb(18, 19, 22); border: 1px solid grey; padding: 10px; color: #cbf0cb;" required>
                <option value="" disabled selected>Rating</option>
                <option value="1">1</option>
                <option value="2">2</option>
                <option value="3">3</option>
                <option value="4">4</option>
                <option value="5">5</option>
              </select>

              <select id="genre-change" name="genre" style="background-color: rgb(18, 19, 22); border: 1px solid grey; padding: 10px; color: #cbf0cb;" required>
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

              <button id="date-change" name="dateChange" class="btn btn-primary" style="background-color: #cbf0cb; border: none; color: black;">Date ▼</button>
</div>
</div>

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
<?php
include("footer.php");
?>

<body>
<script src="postFill.js" defer></script>
<script>

const userCardTemplate = document.querySelector("[data-user-template]")
const userCardContainer = document.querySelector("[data-user-cards-container]")
const searchInput = document.querySelector("[data-search]")

let users = []

fetch("postdata.txt")
  .then(res => res.json())
  .then(data => {
    users = data.slice(0).reverse().map(user => {
      const card = userCardTemplate.content.cloneNode(true).children[0]
      const link = card.querySelector("[data-link]")
      const username = card.querySelector("[data-username]")
      const header = card.querySelector("[data-header]")
      const image = card.querySelector("[data-image]")
      const postTime = card.querySelector("[data-time]")
      const reviewText = card.querySelector("[data-review]")
      const rating = card.querySelector("[data-rating]")
      const id = card.querySelector("[data-id]")

      header.textContent = user.game
      username.textContent = user.username
      image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
      reviewText.textContent = user.game_review
      rating.textContent = user.rating
      postTime.textContent = user.create_datetime
      link.href = "javascript: reviewPage("+user.id+")"
      userCardContainer.append(card)
      
      return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
        console.log(card)
    })
  })


  document.getElementById('date-change').addEventListener('click', function() {
    date_Change();
});

function date_Change() {

if(dateChange == true){

  document.getElementById('date-change').innerHTML = "Date ▲"
  dateChange = false;
  userCardContainer.innerHTML = "";
fetch("postdata.txt")
.then(res => res.json())
.then(data => {
  users = data.slice(0).map(user => {
    const card = userCardTemplate.content.cloneNode(true).children[0]
    const link = card.querySelector("[data-link]")
    const username = card.querySelector("[data-username]")
    const header = card.querySelector("[data-header]")
    const image = card.querySelector("[data-image]")
    const postTime = card.querySelector("[data-time]")
    const reviewText = card.querySelector("[data-review]")
    const rating = card.querySelector("[data-rating]")
    const id = card.querySelector("[data-id]")

    header.textContent = user.game
    username.textContent = user.username
    image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
    reviewText.textContent = user.game_review
    rating.textContent = user.rating
    postTime.textContent = user.create_datetime
    link.href = "javascript: reviewPage("+user.id+")"
    userCardContainer.append(card)
    
    return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
      console.log(card)
  })
})
}
else if(dateChange == false)
{
  document.getElementById('date-change').innerHTML = "Date ▼"
  dateChange = true;
  userCardContainer.innerHTML = "";
fetch("postdata.txt")
.then(res => res.json())
.then(data => {
  users = data.slice(0).reverse().map(user => {
    const card = userCardTemplate.content.cloneNode(true).children[0]
    const link = card.querySelector("[data-link]")
    const username = card.querySelector("[data-username]")
    const header = card.querySelector("[data-header]")
    const image = card.querySelector("[data-image]")
    const postTime = card.querySelector("[data-time]")
    const reviewText = card.querySelector("[data-review]")
    const rating = card.querySelector("[data-rating]")
    const id = card.querySelector("[data-id]")

    header.textContent = user.game
    username.textContent = user.username
    image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
    reviewText.textContent = user.game_review
    rating.textContent = user.rating
    postTime.textContent = user.create_datetime
    link.href = "javascript: reviewPage("+user.id+")"
    userCardContainer.append(card)
    
    return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
      console.log(card)
  })
})
}

}

document.getElementById('genre-change').addEventListener('change', function() {
  genreChange(this.value);
});

function genreChange(genre) {
  var newRating = genre;
  userCardContainer.innerHTML = "";

          fetch("postdata.txt")
          .then(res => res.json())
          .then(data => {
          users = data.slice(0).reverse().map(user => {

            if(user.genre == genre){

            
            const card = userCardTemplate.content.cloneNode(true).children[0]
            const link = card.querySelector("[data-link]")
            const username = card.querySelector("[data-username]")
            const header = card.querySelector("[data-header]")
            const image = card.querySelector("[data-image]")
            const postTime = card.querySelector("[data-time]")
            const reviewText = card.querySelector("[data-review]")
            const rating = card.querySelector("[data-rating]")
            const id = card.querySelector("[data-id]")

            header.textContent = user.game
            username.textContent = user.username
            image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
            reviewText.textContent = user.game_review
            rating.textContent = user.rating
            postTime.textContent = user.create_datetime
            link.href = "javascript: reviewPage("+user.id+")"
            userCardContainer.append(card)
            
            return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
              console.log(card)

            }else {
              
            } 
          })
        })
}

  document.getElementById('rating-change').addEventListener('change', function() {
  ratingChange(this.value);
});

function ratingChange(rating) {
  var newRating = rating;
  userCardContainer.innerHTML = "";

          fetch("postdata.txt")
          .then(res => res.json())
          .then(data => {
          users = data.slice(0).reverse().map(user => {

            if(user.rating == rating){

            
            const card = userCardTemplate.content.cloneNode(true).children[0]
            const link = card.querySelector("[data-link]")
            const username = card.querySelector("[data-username]")
            const header = card.querySelector("[data-header]")
            const image = card.querySelector("[data-image]")
            const postTime = card.querySelector("[data-time]")
            const reviewText = card.querySelector("[data-review]")
            const rating = card.querySelector("[data-rating]")
            const id = card.querySelector("[data-id]")

            header.textContent = user.game
            username.textContent = user.username
            image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
            reviewText.textContent = user.game_review
            rating.textContent = user.rating
            postTime.textContent = user.create_datetime
            link.href = "javascript: reviewPage("+user.id+")"
            userCardContainer.append(card)
            
            return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
              console.log(card)

            }else {
              
            } 
          })
        })
}


var dateChange = true;

function reviewPage(x) {

  window.location = 'reviewPage.php?'+x;
 // return document.getElementById("id").textContent;
  
}
</script>

</body>
</html>