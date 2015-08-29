#обработка ошибок 

shit = "yeeeaaaaaaaaaaaah"

try:            #попытка сделать что-то глупое
    shit ** 2
except:         #Если действительно глупо возбуждается исключение
    print("idiot")
else:           #Иначе действие исполняется
    print("it's OK ",shit ** 2)
