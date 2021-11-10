class Nilai :
    def __init__(self) :
        self.__nilai=0

    def setNilai(self,nilai) : self.__nilai=nilai

    def getNilai(self) : return self.__nilai

    def input(self, penilai) :
        self.__nilai=float(input("Masukkan nilai " + penilai + ": "))