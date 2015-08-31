#coding: utf-8
"""Подсказывает на какой странице книги я остановился"""

import os
import string

def Clear(String):
    """
    Очищает строку от символов " [],' " (Заменяя их на "")
    которые остались после того как она была превращена в строку из списка
    """

    String = String.replace("[","")
    String = String.replace("]","")
    String = String.replace(",","",String.count(","))
    String = String.replace("'","",String.count("'"))
    String = String.replace('"',"",String.count('"'))

    return String


def main():

    """
    Основная функция
    Запускает программу в зависимости от используемой системы (ЕЩЕ НЕ СДЕЛАНО)
    """

    Books = {} #словарь в котором будут хранится пары: книга - страница
    Path = os.getcwd() + "/times" #Рабочая директория + название файла

    File = open(Path)
    Times = File.readline() #количество запусков программы
    print("You have run this program %s times " % Times.rsplit()[0])

    #считывание данных

    for BookName in File:
        BookName = BookName.split()

        *CurrentBook, CurrentPage = BookName #текущая книгa, текущая страница
        CurrentBook, CurrentPage = str(CurrentBook), str(CurrentPage)
        CurrentBook = Clear(CurrentBook)
        Books[CurrentBook] = CurrentPage

        print("You have stopped on %s page of ' %s' " % ( CurrentPage, CurrentBook ) )
        NewPage = input("Will you enter new page for this book? ")

        #обработка полученных данных и составление новых
        if NewPage.isdigit() and int(NewPage) > int(CurrentPage): #все норм
            print("Got it")
            print("you have read %s page(s) of ' %s', since you run this programm last time"
                  % (str( int(NewPage) - int(CurrentPage) ), CurrentBook ) )
            Books[CurrentBook] = NewPage
        elif NewPage.isdigit(): #что-то не так
            print("Amazing!! Crazy!!!")

    File.close()


    #запись новых данных в файл
    File = open(Path,'w')
    File.write(str(int(Times) + 1)+"\n")
    for Book in Books:
        print(Book, Books[Book], file = File)
    File.close()

    print("Good Bye")



if __name__ == "__main__":
    main()
