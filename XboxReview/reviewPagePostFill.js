const userCardTemplate = document.querySelector("[data-user-template]")
const userCardContainer = document.querySelector("[data-user-cards-container]")
const searchInput = document.querySelector("[data-search]")

let users = []

let json = fetch("postdata.txt");
var username= $("#hdnSession").data('value');
console.log(username);

var url = window.location.search;

var lastChar = url.substring(1);

console.log(lastChar);

fetch("postdata.txt")
  .then(res => res.json())
  .then(data => {
    users = data.slice(0).reverse().map(user => {

      if(user.id == lastChar){
        const card = userCardTemplate.content.cloneNode(true).children[0]
        const username = card.querySelector("[data-username]")
        const header = card.querySelector("[data-header]")
        const image = card.querySelector("[data-image]")
        const postTime = card.querySelector("[data-time]")
        const reviewText = card.querySelector("[data-review]")
        const Price = card.querySelector("[data-price]")

        const GameLink1 = card.querySelector("[data-game-link1]")
        const GameLink2 = card.querySelector("[data-game-link2]")
        const GameLink3 = card.querySelector("[data-game-link3]")
        const GameLinkText1 = card.querySelector("[data-game-link1-text]")
        const GameLinkText2 = card.querySelector("[data-game-link2-text]")
        const GameLinkText3 = card.querySelector("[data-game-link3-text]")

        const GameReviewLink1 = card.querySelector("[data-game-review1]")
        const GameReviewLink2 = card.querySelector("[data-game-review2]")
        const GameReviewLink3 = card.querySelector("[data-game-review3]")
        const GameReviewText1 = card.querySelector("[data-game-review1-text]")
        const GameReviewText2 = card.querySelector("[data-game-review2-text]")
        const GameReviewText3 = card.querySelector("[data-game-review3-text]")

        
        const GameGenre = card.querySelector("[data-game-genre]")

        const GameAgeRating = card.querySelector("[data-game-age-rating]")

        const GameCreator= card.querySelector("[data-game-creator]")

        const GamePlatforms= card.querySelector("[data-game-platforms]")

        const GameReleaseDate= card.querySelector("[data-game-release-date]")
        
        const rating = card.querySelector("[data-rating]")
  
        header.textContent = user.game
        username.textContent = user.username
        image.innerHTML = '<img class="contain" src="'+user.game_image+'" />'
        reviewText.textContent = user.game_review
        rating.textContent = user.rating
        postTime.textContent = user.create_datetime
        Price.textContent = user.product_price

        GameLink1.href = "" +user.product_link1 + ""
        GameLinkText1.innerHTML = "Link 2: " +user.product_link1
        
        GameLink2.href = "" +user.product_link2 + ""
        GameLinkText2.innerHTML = "Link 2: " +user.product_link2

        GameLink3.href = "" +user.product_link3 + ""
        GameLinkText3.innerHTML = "Link 2: " +user.product_link3

        GameReviewLink1.href = "" +user.product_review1 + ""
        GameReviewText1.innerHTML = "Review 1: " +user.product_review1

        GameReviewLink2.href = "" +user.product_review2 + ""
        GameReviewText2.innerHTML = "Review 2: " +user.product_review2

        GameReviewLink3.href = "" +user.product_review3 + ""
        GameReviewText3.innerHTML = "Review 3: " +user.product_review3

        GameGenre.innerHTML = "Genre: " +user.genre

        GameAgeRating.innerHTML = "Age rating: " +user.age_rating

        GameCreator.innerHTML = "Creator " +user.product_creator
        
        GameReleaseDate.innerHTML = "Release date: " +user.product_release_date

        GamePlatforms.innerHTML = "Platforms: " +user.product_platforms

        userCardContainer.append(card)
        
        return { username: user.username, game: user.game, game_image: user.game_image, game_review: user.game_review, rating: user.rating, create_datetime: user.create_datetime, element: card }
          console.log(card)
          console.log(username);
      }else {
       
      }
      
    })
  })