class Makhluk:
    def __init__(self) :
        self.__jenis=""

    def __init__(self, jns) :
        self.__jenis=jns

    def setJenis(self,jenis) :
        self.__jenis=jenis

    def getJenis(self) :
        return self.__jenis

    def printInfo(self) :
        print("Jenis\t\t:" + self.__jenis)
