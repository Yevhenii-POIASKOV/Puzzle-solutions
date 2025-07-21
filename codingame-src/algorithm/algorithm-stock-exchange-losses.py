#Algorithm to solve the "Stock Exchange Losses" problem on CodinGame.
#https://www.codingame.com/training/medium/stock-exchange-losses
#Puzzles  Classic puzzle - Medium Stock Exchange Losses
#Pass all test cases to win the game.

#========
#The Goal
#========
#A finance company is carrying out a study on the worst stock investments and would like to acquire a program to do so. The program must be able to analyze a chronological series of stock values in order to show the largest loss that it is possible to make by buying a share at a given time t0 and by selling it at a later date t1. The loss will be expressed as the difference in value between t0 and t1. If there is no loss, the loss will be worth 0.

#==========
#Game Input
#==========
#Input
#Line 1: the number n of stock values available.
#Line 2: the stock values arranged in order, from the date of their introduction on the stock market v1 until the last known value vn. The values are integers.

#======
#Output
#======
#The maximal loss p, expressed negatively if there is a loss, otherwise 0.   

import sys
import math

class Losses:
    def __init__(self):
        self.n = int(input())
        self.values = [int(i) for i in input().split()]
    def max_losses(self):
        losses = 0
        max_price = self.values[0]
        for i in self.values:
            if i > max_price:
                max_price = i
            else:
                if i - max_price < losses:
                    losses = i - max_price
        return losses

losses = Losses()
print(losses.max_losses())
