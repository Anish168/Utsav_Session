# import pygame
# pygame.init()

# width = 700
# height = 600

# screen = pygame.display.set_mode((width,height))
# gameOn = True

# backGround = pygame.image.load("./images/background.png")
# while gameOn:
#     # pass
#     for event in pygame.event.get():
#         # print(event)
#         if event.type == pygame.QUIT:
#             gameOn = False
            
#     screen.blit(backGround,(0,0))
#     pygame.display.update()

# Bouncing the ball
# import pygame
# pygame.init()

# width = 700
# height = 550

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width,height))

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")

# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60
       
#     ballX = 120
#     ballY = basey
#     gravity = 10
#     bouncing = 25
#     while gameOn:
#         # pass

#         for event in pygame.event.get():
#             # print(event)
#             if event.type == pygame.QUIT:
#                 gameOn = False
                
#         screen.blit(backGround,(0,0))
#         screen.blit(base, (baseX,basey))
#         screen.blit(basketball, (ballX,ballY))
        
#         # bouncing
#         ballY -= bouncing
#         bouncing -= 1
#         ballY += gravity
        
#         if(ballY > basey -20):
#             bouncing = 25

#         pygame.display.update()
#         clock.tick(fps)
        
# if __name__ == "__main__":
#     main()


# Generating Random height pole
# import pygame
# import random
# pygame.init()

# width = 700
# height = 550

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width,height))

# def getPoleY(baseY):
#     return random.randrange(100, baseY - 200)

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")
# pole = pygame.image.load("./images/pole.png")
# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60
       
#     ballX = 120
#     ballY = basey
#     gravity = 10
#     bouncing = 25
    
#     poleX= 400
#     poleY = getPoleY(basey)
#     while gameOn:
#         # pass

#         for event in pygame.event.get():
#             # print(event)
#             if event.type == pygame.QUIT:
#                 gameOn = False
                
#             elif event.type == pygame.KEYDOWN:
#                 if event.key == pygame.K_SPACE:
#                     bouncing = 25
                
#         screen.blit(backGround,(0,0))
#         screen.blit(pole,(poleX,poleY))
#         screen.blit(base, (baseX,basey))
#         screen.blit(basketball, (ballX,ballY))
        
#         # bouncing
#         ballY -= bouncing
#         bouncing -= 1
#         ballY += gravity
        
#         if(ballY > basey -20):
#             bouncing = 25

#         pygame.display.update()
#         clock.tick(fps)
        
# if __name__ == "__main__":
#     main()
    
    
    
    
# # Moving Pole
# import pygame
# import random
# pygame.init()

# width = 700
# height = 550

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width,height))

# def getPoleY(baseY):
#     return random.randrange(100, baseY - 200)

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")
# pole = pygame.image.load("./images/pole.png")
# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60
       
#     ballX = 120
#     ballY = basey
#     gravity = 10
#     bouncing = 25
    
#     poleX= 400
#     poleY = getPoleY(basey)
    
#     baseX_vel = 0
#     poleX_vel = 0
#     speed = 0
#     while gameOn:
#         # pass

#         for event in pygame.event.get():
#             # print(event)
#             if event.type == pygame.QUIT:
#                 gameOn = False
                
#             elif event.type == pygame.KEYDOWN:
#                 if event.key == pygame.K_SPACE:
#                     bouncing = 25
#                     speed = 5
#                     baseX_vel = int(speed)
#                     poleX_vel = int(speed)
                
#         screen.blit(backGround,(0,0))
#         screen.blit(pole,(poleX,poleY))
#         screen.blit(base, (baseX,basey))
#         screen.blit(basketball, (ballX,ballY))
        
#         # bouncing
#         ballY -= bouncing
#         bouncing -= 1
#         ballY += gravity
        
#         if(ballY > basey -20):
#             bouncing = 25

#         pygame.display.update() 
#         clock.tick(fps)
        
#         # moving pole
#         poleX += -poleX_vel #x diection m move (left direction)

#         if(poleX < -100):
#             poleX = width + 10
#             poleY = getPoleY(basey)
        
# if __name__ == "__main__":
#     main()

# Moving base
# import pygame
# import random
# pygame.init()

# width = 700
# height = 550

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width,height))

# def getPoleY(baseY):
#     return random.randrange(100, baseY - 200)

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")
# pole = pygame.image.load("./images/pole.png")

# def moving_base(baseX, baseY, base):
#     screen.blit(base, (baseX, baseY))
#     screen.blit(base, (baseX + width, baseY))

# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60
       
#     ballX = 120
#     ballY = basey - 60
#     gravity = 10
#     bouncing = 25
    
#     poleX= 400
#     poleY = getPoleY(basey)
    
#     baseX_vel = 0
#     poleX_vel = 0
#     speed = 0
#     while gameOn:
#         # pass

#         for event in pygame.event.get():
#             # print(event)
#             if event.type == pygame.QUIT:
#                 gameOn = False
                
#             elif event.type == pygame.KEYDOWN:
#                 if event.key == pygame.K_SPACE:
#                     bouncing = 25
#                     speed = 5
#                     baseX_vel = int(speed)
#                     poleX_vel = int(speed)
                
#         screen.blit(backGround,(0,0))
#         screen.blit(pole,(poleX, poleY))
#         moving_base(baseX, basey, base)
#         screen.blit(basketball, (ballX,ballY))
        
#         # bouncing
#         ballY -= bouncing
#         bouncing -= 1
#         ballY += gravity
        
#         if(ballY > basey -20):
#             bouncing = 25

#         pygame.display.update() 
#         clock.tick(fps)
        
#         # moving pole
#         poleX += -poleX_vel #x diection m move (left direction)

#         if(poleX < -100):
#             poleX = width + 10
#             poleY = getPoleY(basey)
            
#         # moving base
#         baseX += -baseX_vel
#         if(baseX <= -width):
#             baseX = 0

        
# if __name__ == "__main__":
#     main()

# Collide the ball and Game Over
# import pygame
# import random

# pygame.init()

# width = 700
# height = 550

# red = (255, 0, 0)

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width, height))

# def getPoleY(baseY):
#     return random.randrange(100, baseY - 200)

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")
# pole = pygame.image.load("./images/pole.png")

# def moving_base(baseX, baseY, base):
#     screen.blit(base, (baseX, baseY))
#     screen.blit(base, (baseX + width, baseY))

# def collision(poleX, poleY, ballX, ballY):
#     if ballX >= poleX and ballX <= poleX + 50 and ballY > poleY:
#         return True
#     elif ballY < -10:
#         return True
#     return False

# def screenText(text, color, x, y, size, style, bold=False, italic=False):
#     font = pygame.font.SysFont(style, size, bold=bold, italic=italic)
#     screen_Text = font.render(text, True, color)
#     screen.blit(screen_Text, (x, y))

# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60

#     ballX = 120
#     ballY = basey - 60
#     gravity = 10
#     bouncing = 25

#     poleX = 400
#     poleY = getPoleY(basey)

#     baseX_vel = 0
#     poleX_vel = 0
#     speed = 0
#     gameOver = False

#     while gameOn:
#         for event in pygame.event.get():
#             if event.type == pygame.QUIT:
#                 gameOn = False

#             elif event.type == pygame.KEYDOWN:
#                 if event.key == pygame.K_SPACE:
#                     if gameOver:
#                         # Reset the game state
#                         ballY = basey - 60
#                         bouncing = 25
#                         gravity = 10
#                         poleX = 400
#                         poleY = getPoleY(basey)
#                         speed = 5
#                         baseX_vel = int(speed)
#                         poleX_vel = int(speed)
#                         gameOver = False
#                     else:
#                         bouncing = 25

#         screen.blit(backGround, (0, 0))
#         screen.blit(pole, (poleX, poleY))
#         moving_base(baseX, basey, base)
#         screen.blit(basketball, (ballX, ballY))

#         if not gameOver:
#             # Apply bouncing and gravity
#             ballY -= bouncing
#             bouncing -= 1
#             ballY += gravity

#             if ballY > basey - 60:
#                 ballY = basey - 60
#                 bouncing = 25

#             # Move pole
#             poleX += -poleX_vel
#             if poleX < -100:
#                 poleX = width + 10
#                 poleY = getPoleY(basey)

#             # Move base
#             baseX += -baseX_vel
#             if baseX <= -width:
#                 baseX = 0

#             # Check for collision
#             gameOver = collision(poleX, poleY, ballX, ballY)
#             if gameOver:
#                 speed = 0
#                 gravity = 0
#                 baseX_vel = 0
#                 poleX_vel = 0

#         if gameOver:
#             screenText("Game Over", red, 200, 100, 60, "Arial", bold=True)

#         pygame.display.update()
#         clock.tick(fps)

# if __name__ == "__main__":
#     main()


# Adding basket on the pole and basket score
# import pygame
# import random

# pygame.init()

# width = 700
# height = 550

# red = (255, 0, 0)
# white = (255, 255, 255)

# fps = 60
# clock = pygame.time.Clock()

# screen = pygame.display.set_mode((width, height))

# def getPoleY(baseY):
#     return random.randrange(100, baseY - 200)

# backGround = pygame.image.load("./images/background.png")
# base = pygame.image.load("./images/road.jpg")
# basketball = pygame.image.load("./images/basketball.png")
# pole = pygame.image.load("./images/pole.png")
# basket = pygame.image.load("./images/basket.png")

# def randomBasket(poleY, baseY):
#     return random.randrange(poleY + 100, baseY - 100)

# def moving_base(baseX, baseY, base):
#     screen.blit(base, (baseX, baseY))
#     screen.blit(base, (baseX + width, baseY))

# def collision(poleX, poleY, ballX, ballY):
#     if ballX >= poleX and ballX <= poleX + 50 and ballY > poleY:
#         return True
#     elif ballY < -10:
#         return True
#     return False

# def screenText(text, color, x, y, size, style, bold=False, italic=False):
#     font = pygame.font.SysFont(style, size, bold=bold, italic=italic)
#     screen_Text = font.render(text, True, color)
#     screen.blit(screen_Text, (x, y))

# def main():
#     gameOn = True
#     baseX = 0
#     basey = height - 60

#     ballX = 120
#     ballY = basey - 60
#     gravity = 10
#     bouncing = 25

#     poleX = 400
#     poleY = getPoleY(basey)

#     baseX_vel = 0
#     poleX_vel = 0
#     speed = 0
#     gameOver = False

#     basketY = randomBasket(poleY, basey)
#     basketScore = 0
#     score = 0
#     speed_accelerating = False
    

#     while gameOn:
#         for event in pygame.event.get():
#             if event.type == pygame.QUIT:
#                 gameOn = False

#             elif event.type == pygame.KEYDOWN:
#                 if event.key == pygame.K_SPACE:
#                     if gameOver:
#                         # Reset the game state
#                         ballY = basey - 60
#                         bouncing = 25
#                         gravity = 10
#                         poleX = 400
#                         poleY = getPoleY(basey)
#                         basketY = randomBasket(poleY, basey)
#                         speed = 5
#                         baseX_vel = int(speed)
#                         poleX_vel = int(speed)
#                         gameOver = False
#                     else:
#                         bouncing = 25

#         screen.blit(backGround, (0, 0))
#         screen.blit(pole, (poleX, poleY))
#         moving_base(baseX, basey, base)
#         screen.blit(basketball, (ballX, ballY))
        
#         # Move basket
#         basketX = poleX + 35
#         screen.blit(basket, (basketX, basketY))

#         if not gameOver:
#             # Apply bouncing and gravity
#             ballY -= bouncing
#             bouncing -= 1
#             ballY += gravity

#             if ballY > basey - 60:
#                 ballY = basey - 60
#                 bouncing = 25

#             # Move pole
#             poleX += -poleX_vel
#             if poleX < -100:
#                 poleX = width + 10
#                 poleY = getPoleY(basey)
#                 basketY = randomBasket(poleY, basey)

#             # Move base
#             baseX += -baseX_vel
#             if baseX <= -width:
#                 baseX = 0

#             # Check for collision
#             gameOver = collision(poleX, poleY, ballX, ballY)
#             if gameOver:
#                 speed = 0
#                 gravity = 0
#                 baseX_vel = 0
#                 poleX_vel = 0

#         if gameOver:
#             screenText("Game Over", red, 200, 100, 60, "Arial", bold=True)

#         # Check if ball goes into the basket
#         if ballX + basketball.get_width() >= basketX and ballX <= basketX + basket.get_width() and ballY > basketY and ballY <= basketY + basket.get_height():
#             basketScore += 1

#         # accelrating
#         speed += 0.001
#         #speeding of score
#         score += int(speed)
        
#           # Display the score on the screen
#         screenText(f"Score: {basketScore}", white, 10, 10, 30, "Arial", bold=True)


#         pygame.display.update()
#         clock.tick(fps)

# if __name__ == "__main__":
#     main()


# Playing Sound in Pygame
import pygame
import random

pygame.init()

width = 700
height = 550

red = (255, 0, 0)
white = (255, 255, 255)

fps = 60
clock = pygame.time.Clock()

screen = pygame.display.set_mode((width, height))

def getPoleY(baseY):
    return random.randrange(100, baseY - 200)

backGround = pygame.image.load("./images/background.png")
base = pygame.image.load("./images/road.jpg")
basketball = pygame.image.load("./images/basketball.png")
pole = pygame.image.load("./images/pole.png")
basket = pygame.image.load("./images/basket.png")

# background sound
# pygame.mixer.music.load()
# pygame.mixer.music.play()
    
bounce = pygame.mixer.Sound("./sound/bouncing.wav")
extraPoint = pygame.mixer.Sound("./sound/basket.wav")

def randomBasket(poleY, baseY):
    return random.randrange(poleY + 100, baseY - 100)

def moving_base(baseX, baseY, base):
    screen.blit(base, (baseX, baseY))
    screen.blit(base, (baseX + width, baseY))

def collision(poleX, poleY, ballX, ballY):
    if ballX >= poleX and ballX <= poleX + 50 and ballY > poleY:
        return True
    elif ballY < -10:
        return True
    return False

def screenText(text, color, x, y, size, style, bold=False, italic=False):
    font = pygame.font.SysFont(style, size, bold=bold, italic=italic)
    screen_Text = font.render(text, True, color)
    screen.blit(screen_Text, (x, y))

def main():
    gameOn = True
    baseX = 0
    basey = height - 60

    ballX = 120
    ballY = basey - 60
    gravity = 10
    bouncing = 25

    poleX = 400
    poleY = getPoleY(basey)

    baseX_vel = 0
    poleX_vel = 0
    speed = 0
    gameOver = False

    basketY = randomBasket(poleY, basey)
    basketScore = 0
    score = 0
    speed_accelerating = False
    
    
    while gameOn:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                gameOn = False

            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    if gameOver:
                        # Reset the game state
                        ballY = basey - 60
                        bouncing = 25
                        gravity = 10
                        poleX = 400
                        poleY = getPoleY(basey)
                        basketY = randomBasket(poleY, basey)
                        speed = 5
                        baseX_vel = int(speed)
                        poleX_vel = int(speed)
                        gameOver = False
                    else:
                        bouncing = 25

        screen.blit(backGround, (0, 0))
        screen.blit(pole, (poleX, poleY))
        moving_base(baseX, basey, base)
        screen.blit(basketball, (ballX, ballY))
        
        # Move basket
        basketX = poleX + 35
        screen.blit(basket, (basketX, basketY))

        if not gameOver:
            # Apply bouncing and gravity
            ballY -= bouncing
            bouncing -= 1
            ballY += gravity

            if ballY > basey - 60:
                pygame.mixer.Sound.play(bounce)
                ballY = basey - 60
                bouncing = 25

            # Move pole
            poleX += -poleX_vel
            if poleX < -100:
                poleX = width + 10
                poleY = getPoleY(basey)
                basketY = randomBasket(poleY, basey)

            # Move base
            baseX += -baseX_vel
            if baseX <= -width:
                baseX = 0

            # Check for collision
            gameOver = collision(poleX, poleY, ballX, ballY)
            if gameOver:
                speed = 0
                gravity = 0
                baseX_vel = 0
                poleX_vel = 0

        if gameOver:
            screenText("Game Over", red, 200, 100, 60, "Arial", bold=True)

        # Check if ball goes into the basket
        if ballX + basketball.get_width() >= basketX and ballX <= basketX + basket.get_width() and ballY > basketY and ballY <= basketY + basket.get_height():
            pygame.mixer.Sound.play(extraPoint)
            basketScore += 1

        # accelrating
        speed += 0.001
        #speeding of score
        score += int(speed)
        
          # Display the score on the screen
        screenText(f"Score: {basketScore}", white, 10, 10, 30, "Arial", bold=True)


        pygame.display.update()
        clock.tick(fps)

if __name__ == "__main__":
    main()
