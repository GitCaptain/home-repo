#coding: utf-8

from person import Person

class Department():

    def __init__(self, *args):
        self.members = list(args)

    def addMember(self, member):
        self.members.append(member)

    def giveRaises(self, percent):
        for person in self.members:
            person.giveRaise(percent)

    def showAll(self):
        for person in self.members:
            print(person)