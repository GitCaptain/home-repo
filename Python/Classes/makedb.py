#coding: utf-8
from person import Person
from manager import Manager
########################
import shelve
##############################

Bob = Person(age = 56, job = "Tester")
Bob.setName("Bob Oden")
Bob.setPay(1000)
Bob.giveRaise(100)
John = Person("John Smith", "Programmer", 1e6, 17)
Tom = Manager("Tom mi", 100, 20)
Tom.giveRaise(8, 8)
######################################

db = shelve.open("persondb")
for object in (Bob, John, Tom):
    db[object.name] = object

#####################################
import glob

print(glob.glob("person*"))

#####################################
db = shelve.open("persondb")

print(len(db))
print(list(db.keys()))
bob = db['Bob Oden']
print(bob)

for key in sorted(db):
    print(key, "=>", db[key])
##############################