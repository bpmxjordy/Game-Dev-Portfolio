const userCardTemplate = document.querySelector("[data-user-template]")
const userCardContainer = document.querySelector("[data-user-cards-container]")
const searchInput = document.querySelector("[data-search]")

let users = []

var fs = require('fs');


fetch("postdata.txt")
  .then(res => res.json())
  .then(data => {
    users = data.slice(0).reverse().map(user => {

        var htmlContent = "<input type='hidden' id='hdnSession' data-value="+user.id+" '>";
     return fs.writeFile('/'+user.game+user.username+'.php', htmlContent , (error) => { /* handle error */ })
        console.log(card)
    })
  })
 
  fs.writeFile('/my-page.html', htmlContent, (error) => { /* handle error */ });