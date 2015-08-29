#copy files

FileName = input("Введите название файла (Введите путь если он не лежит в папке с программой):\n")
File2Copy = open(FileName,'rb').read()
print(File2Copy)
#r = FileName[FileName.rfind('.'): len(FileName)] #Расширение
new = open("Сopy of " + FileName, 'wb')
new.write(File2Copy)
