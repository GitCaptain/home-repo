"""класс куча"""

class queue():

    def __init__(self, arr, mod):
    """
    def __init__(self, arr, mod)
        arr - массив из которого будет построена куча
        mod - строка "min" или "max" в зависимости от этого параметра
        будет построена куча по минимуму или максимуму соответственно
    """
        if mod == "min":
            mod = lambda x, y: x < y
        else:
            mod = lambda x, y: x > y

        self.arr = arr
        self.mod = mod
        self.queue = [0] # первый элемент содержит длину кучи
        self.makeheap()

    def makeheap():
        for element in self.arr:
            self.insert(element)

    def insert(element):
        self.len += 1
        self.queue.append(element)
        ind = self.len
        while ind and







