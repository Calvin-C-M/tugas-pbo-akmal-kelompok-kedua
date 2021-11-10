class Person :
    def __init__(self) :
        self.__nama=""
        self.__umur=0

    def setNama(self,nama) : self.__nama=nama
    def setUmur(self,umur) : self.__umur=umur

    def getNama(self) : return self.__nama
    def getUmur(self) : return self.__umur

    def input(self) :
        self.__nama=input("Masukkan nama: ")
        self.__umur=int(input("Masukkan umur: "))

    def print(self) :
        print("Nama\t\t=" + self.__nama)
        print("Umur\t\t=" + str(self.__umur))