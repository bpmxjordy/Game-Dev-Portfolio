const gameCardTemplate = document.querySelector("[data-profile-template]")
const gameCardContainer = document.querySelector("[data-profile-cards-container]")

let profile = []
var username= $("#hdnSession").data('value');
fetch("formdata.txt")
  .then(res => res.json())
  .then(data => {
    profile = data.slice(0).reverse().map(profile => {

      if(profile.username == username){
        const card = gameCardTemplate.content.cloneNode(true).children[0]
        const game = card.querySelector("[data-game]")
 
  
        game.textContent = profile.game
        gameCardContainer.append(card)
        console.log(card)
          console.log(profile.game);
        return {game: profile.game, element: card }
          
      }else {
       
      }
      
    })
  })


const userCardTemplate = document.querySelector("[data-user-template]")
const userCardContainer = document.querySelector("[data-user-cards-container]")
const searchInput = document.querySelector("[data-search]")

let users = []

let json = fetch("postdata.txt");
var username= $("#hdnSession").data('value');
console.log(username);
fetch("postdata.txt")
  .then(res => res.json())
  .then(data => {
    users = data.slice(0).reverse().map(user => {

      if(user.username == username){
        const card = userCardTemplate.content.cloneNode(true).children[0]
        const username = card.querySelector("[data-username]")
        const header = card.querySelector("[data-header]")
        const image = card.querySelector("[data-image]")
        const postTime = card.querySelector("[data-time]")
        const reviewText = card.querySelector("[data-review]")
        const rating = card.querySelector("[data-rating]")
        const link = card.querySelector("[data-link]")
  
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
          console.log(username);
      }else {
       
      }
      
    })
  })