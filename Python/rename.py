import os

def rnm2mp3(path):
    
    folders = []
    files = []

    os.chdir(path)
    
    for file in os.listdir(path):
        if os.path.isdir(file): #если папка
            folders.append(file)
        else:
            files.append(file)

    print("|rename in " + path + "...")
    
    for file in files:
        if file.rfind('.') == -1:
            os.rename(file, file + ".mp3") 
            print("|  *File " + file + " renamed!")
            
    for folder in folders:
        rnm2mp3(path + folder + '/')
        
        

if __name__ == "__main__":
    path = input("Введите путь до папки файлы которой нужно переименовать в mp3:\n")
    print("ОК.\nПодождите идет переименование файлов, это может занять некоторое время...")
    rnm2mp3(path)
    print("Готово!")
