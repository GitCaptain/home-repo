#coding: utf-8

##################################
#       Работа с классами        #
##################################

from person import Person
from department import Department
from manager import Manager


Bob = Person(age = 56, job = "Tester")
Bob.setName("Bob Oden")
Bob.setPay(1000)
Bob.giveRaise(100)
John = Person("John Smith", "Programmer", 1e6, 17)
Tom = Manager("Tom mi", 100, 20)
Tom.giveRaise(8, 8)
#Bob.newdata = "something"  не рекомендуется присоединять аттрибуты за пределами класса


development = Department(Bob, John)
development.addMember(Tom)
development.giveRaises(10)
development.showAll()