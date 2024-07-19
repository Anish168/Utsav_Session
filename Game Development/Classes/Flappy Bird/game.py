# Basic SETUP
# import pygame as pg
# import sys
# pg.init()

# class Game:
#     def __init__(self):
#         self.width = 600
#         self.height = 768
#         self.scale_factor = 1.5
#         self.win = pg.display.set_mode((self.width, self.height))
#         self.bg_img = pg.transform.scale(pg.image.load("./assets/bg.png").convert(), (600,1066))
#         self.gameLoop()

#     def gameLoop(self):
#         while True:
#             for event in pg.event.get():
#                 if event.type == pg.QUIT:
#                     pg.quit()
#                     sys.exit()

#             self.win.blit(self.bg_img,(0, -300))
#             pg.display.update()


# game = Game()



# Making Ground
import pygame as pg
import sys, time
pg.init()

class Game:
    def __init__(self):
        self.width = 600
        self.height = 768
        self.scale_factor = 1.5
        self.win = pg.display.set_mode((self.width, self.height))
        self.clock = pg.time.Clock()
        self.move_speed = 70
        
        self.setUpBgAndGround()
        
        self.gameLoop()

    def gameLoop(self):
        last_time = time.time()
        
        while True:
            # calculate delta time
            new_time = time.time()
            dt = new_time - last_time
            last_time = new_time
            
            for event in pg.event.get():
                if event.type == pg.QUIT:
                    pg.quit()
                    sys.exit()

            self.updateEverything(dt)
            self.drawEverything()
            pg.display.update()
            self.clock.tick(60)

    def updateEverything(self,dt):
        self.ground1_react.x -= self.move_speed*dt
        self.ground2_react.x -= self.move_speed*dt

        if self.ground1_react.right < 0:
            self.ground1_react.x = self.ground2_react.right
        if self.ground2_react.right < 0:
            self.ground2_react.x = self.ground1_react.right
        

    def drawEverything(self):
        self.win.blit(self.bg_img,(0, -300))
        self.win.blit(self.ground1_img, self.ground1_react)
        self.win.blit(self.ground2_img, self.ground2_react)
        
    def setUpBgAndGround(self):
        self.bg_img = pg.transform.scale(pg.image.load("./assets/bg.png").convert(), (600,1066))
        self.ground1_img = pg.transform.scale_by(pg.image.load("./assets/ground.png").convert(), self.scale_factor)
        self.ground2_img = pg.transform.scale_by(pg.image.load("./assets/ground.png").convert(), self.scale_factor)

        self.ground1_react = self.ground1_img.get_rect()
        self.ground2_react = self.ground2_img.get_rect()

        self.ground1_react.x = 0
        self.ground2_react.x = self.ground1_react.right
        self.ground1_react.y = 568
        self.ground2_react.y = 568
        
        

game = Game()