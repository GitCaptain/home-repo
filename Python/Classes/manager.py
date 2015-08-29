#coding: utf-8

from person import Person

class Manager(Person):

    def __init__(self, name = "Name Sename", pay = 10, age = 0):
        Person.__init__(self, name, "mgr", pay, age)
    
    def giveRaise(self, percent, bonus = 10):
        Person.giveRaise(self, percent + bonus)
