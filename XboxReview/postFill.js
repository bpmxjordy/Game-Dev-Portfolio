/*document.getElementById('rating-change').addEventListener('change', function() {
  console.log('You selected: ', this.value);
});

function ratingChange(rating) {
  alert(rating);
}

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
 */