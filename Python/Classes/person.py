#coding: utf-8

from classtools import AttrDisplay

class Person(AttrDisplay):
    """Хранит и обрабатывает информацию о людях"""
    def __init__(self, name = "Name Sename", job = "None", pay = 0, age = 0):
        self.name = name
        self.age = age
        self.job = job
        self.pay = pay
    
    def setName(self, name):
        self.name = name

    def setAge(self, age):
        self.age = age

    def setPay(self, pay):
        self.pay = pay

    def setJob(self, job):
        self.job = job

    def lastName(self):
        return self.name.split()[-1]

    def giveRaise(self, percent): # percent величина в диапазоне 0..100
        self.pay =  round( self.pay * (1 + 0.01 * percent ), 2)
    
    
    """
    Старая неиспользуемая версия __str__ которую жалко удалять

    def __str__(self):
        sepchr = '-'
        septm  = 20
        end = "\n"
        sepline = end + sepchr * septm + end

        classInfo = sepline + "[{0}: {1}]".format(self.__class__.__name__, self.lastName()) + end
        attrInfo = ""
        
        for key in self.__dict__:
            attrInfo += str(key) + ": " + str(self.__dict__[key]) + end
            
        return classInfo + attrInfo + sepline
    """
