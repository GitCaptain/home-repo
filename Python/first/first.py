#dir()
#help()


String = "  ehfirhgirhi " # строки - неизменяемые последовательности
List = [123, "spam", "NI"] # список - почти то же что и vector в C++
Dictionary = {"food": "spam", "taste": "yum", 5: "Five", "Six": 6 } # словарь - то же что и map в C++ - пара ключ : значение
Tuple = (1 , 2 ,3 , 4) # кортеж - неизменяемый массив
#FileI = open("input.txt", "r") # файл открытый для ввода, по умолчанию ставится "r", можно: File = open("input.txt")
#FileO = open("output.txt", "w") # файл открытый для вывода
Set1 = set("abc") #Множество почти то же что и set в C++
Set2 = {"X", "Y", "Z"} #Множество почти то же что и set в C++
# Decimal, Fractions - вещественное, рациональное число


class Player():
    
    def __init__(self, name, score):
        self.name = name
        self.score = score
        
    def ShortName(self):
        ShrtNm = ""
        FirstName = self.name.split()[0]
        Сonsonants = set("bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ") #согласные буквы
        for x in FirstName:
            if x in Сonsonants:
                ShrtNm += x
        return ShrtNm


gamer = Player("New Bie", 999999)
print(gamer.ShortName()," ",gamer.score)


d = [x for x in range (10)]

intresting = [ x ** x for x in d  ]


print(d)

print(intresting)
