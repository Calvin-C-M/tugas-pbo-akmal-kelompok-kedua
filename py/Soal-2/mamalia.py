from makhluk import Makhluk

class Mamalia(Makhluk):
    def __init__(self) :
        super().__init__("Mamalia")
        self.__nama=""
        self.__ukuran=""
        self.__jumlahKaki=0
        self.__habitat=""

    def setNama(self, nama) :
        self.__nama=nama

    def setUkuran(self, ukrn) :
        self.__ukuran=ukrn

    def setJumlahKaki(self, jmlKaki) :
        self.__jumlahKaki=jmlKaki

    def setHabitat(self, habitat) :
        self.__habitat=habitat

    def getNama(self) :
        return self.__nama

    def getUkuran(self) :
        return self.__ukuran

    def getJumlahKaki(self) :
        return self.__jumlahKaki

    def getHabitat(self) :
        return self.__habitat

    def printInfo(self) :
        super().printInfo()
        print("Nama\t\t:" + self.__nama)
        print("Ukuran\t\t:" + self.__ukuran)
        print("Jumlah Kaki\t:" + str(self.__jumlahKaki))
        print("Habitat\t\t:" + self.__habitat)