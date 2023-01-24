<?php
//include auth_session.php file on all user panel pages
include("header.php");
?>

<head>
    <link rel="stylesheet" href="css/index.css">
    <link rel="stylesheet" href="css/card-index.css">
</head>
<body>
<div id="first-section">
  <div class="main-title-container">
  <h1 class="title" >Xbox Game Reviews</h1>
  <p class="title-undertext">All about games</p>
</div>
<div class="down-arrow-container">
  <p>⌄</p>
</div>

</div>
</div>

<div id="second-section">
<div class="second-title-container">
  <h1 class="title white" >Latest Review</h1>
</div>

<div class="section2-cards">
    <div class="user-cards">  

    <div class="card" href="" style="background: none;">
        <a href="reviewPage.php?1">
          <div class="image" ><img class="contain" src="https:\/\/cdn.cloudflare.steamstatic.com\/steam\/apps\/1506830\/capsule_616x353.jpg?t=1644868577"></div>
          <div class="header" style="display: -webkit-box; -webkit-line-clamp: 1; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">FIFA 22</div>
          <div class="text" style="display: -webkit-box; -webkit-line-clamp: 3; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">Over the past 5 or so years, FIFA has slowly gotten worse with addition of AI, game sway, more competitiveness and more pay to win aspects. But, FIFA 22 seems to have changed a bit in the way its less pay to win. other than that the AI and game sway has gotten a lot stronger, and you sometimes find that you are fighting yourself\/ your players to get them to do what you want.</div>
          <div class="nameRating">
            <div class="username" >bpmxjordy</div> <div id="nameRatingSpacing"></div>
            <div class="rating" >4/5<span  class="rating"></span> Rating: </div>
          </div>
          <div class="time">2022-02-22 11:27:10</div> 
        </a>           
      </div>

      <div class="card" href="" style="background: none;">
        <a href="reviewPage.php?4">
          <div class="image" ><img class="contain" src="https:\/\/cdn.akamai.steamstatic.com\/steam\/apps\/920210\/capsule_616x353.jpg?t=1642712305"></div>
          <div class="header" style="display: -webkit-box; -webkit-line-clamp: 1; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">LEGO Star Wars: The Skywalker Saga</div>
          <div class="text" style="display: -webkit-box; -webkit-line-clamp: 3; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">Play through all nine Star Wars saga films in a brand-new LEGO video game unlike any other. Experience fun-filled adventures, whimsical humor, and the freedom to fully immerse yourself in the LEGO Star Wars galaxy. Want to play as a Jedi? A Sith? Rebel, bounty hunter, or droid? LEGO Star Wars: The Skywalker Saga features hundreds of playable characters from throughout the galaxy. Whether on land or in space, a variety of vehicles are yours to command. Jump to light speed in the Millennium Falcon, fly the T-47 Airspeeder and battle TIE fighters in Resistance X-wings\u2026 it's the ULTIMATE LEGO Star Wars experience.</div>
          <div class="nameRating">
            <div class="username" >bpmxjordy</div> <div id="nameRatingSpacing"></div>
            <div class="rating" >3/5<span  class="rating"></span> Rating: </div>
          </div>
          <div class="time">2022-02-22 11:27:10</div> 
        </a>           
      </div>

      <div class="card" href="" style="background: none;">
        <a href="reviewPage.php?3">
          <div class="image" ><img class="contain" src="https://rocketleague.media.zestyio.com/rl_platform_keyart_2019.f1cb27a519bdb5b6ed34049a5b86e317.jpg"></div>
          <div class="header" style="display: -webkit-box; -webkit-line-clamp: 1; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">Rocket League</div>
          <div class="text" style="display: -webkit-box; -webkit-line-clamp: 3; -webkit-box-orient: vertical; text-overflow: ellipsis; overflow: hidden;">This game is the best. I got Rocket pass, and am a super sonic legend. You are crazy not to get this game. #1 GAME IN THE WORLD! Get rocket league. This game is the best game, because you can change your car. You can earn rewards and very cool stuff. You can also buy add-ons. The best part of the game, is that you can select and customize your car, with a variety of cool designs, and models. \r\n\r\nThe most popular games are games that allow you to rank up, or games that give you prizes. The fun thing about it is when you play ranked you can bring your rank up. As you play you will get better and better. I have been playing since 2016, and I'm not planning to stop now. This game is also. Lastly, you can play a variety of different game modes. You can play online or offline, private matches and more. But, most people play online and play soccer. While I played soccer I have studied aerial dynamics, because in the game you can hit the ball in the air by jumping and balancing your self with a boost. I have been practicing it, and now I learned how to perfectly balance my self in the air. Now I can easily do aerial hits. So in conclusion, Rocket League isn't just a game. In some ways it is a educational game. DOWNLOAD ROCKET LEAGUE! You won't regret it. Also, IT'S FREE!!!!!</div>
          <div class="nameRating">
            <div class="username" >bpmxjordy</div> <div id="nameRatingSpacing"></div>
            <div class="rating" >3/5<span  class="rating"></span> Rating: </div>
          </div>
          <div class="time">2022-02-22 11:27:10</div> 
        </a>           
      </div>
  </div>

</div>
</div>

<div id="third-section">
    <div class="main-title-container">
      <h1 class="title" >See more reviews</h1>
      <a href="reviews.php" class="nav-link"><button class="btn btn-outline-success" type="button" style="border-color: #cbf0cb; color: #cbf0cb;">See more</button></a>
    </div>
  </div>
</div>


<?php
include("footer.php");
?>
</body>

</html>