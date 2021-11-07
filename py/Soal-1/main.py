# ANGGOTA KELOMPOK:
# - Naufal Fahrezi            (140810200035)
# - Amalia Nur Fitri          (140810200045)
# - Calvin Calfi Montolalu    (140810200053)
# - Deani Puteri Virdiana     (140810200059)

from person import Person
from nilai import Nilai

class Student(Person) :
    def __init__(self) :
        Person.__init__()
        self.__npm=0
        self.__penguji1=Nilai()
        self.__penguji2=Nilai()
        self.__pembimbing=Nilai()

    def setNpm(self,npm) : self.__npm=npm

    def getNpm(self) : return self.__npm

    def input(self) :
        Person.input()
        self.__npm=int(input("Masukkan NPM: "))
        self.__penguji1.input()
        self.__penguji2.input()
        self.__pembimbing.input()

    def hitungNilaiSidang(self) :
        nilai1=self.__penguji1.getNilai()*0.3
        nilai2=self.__penguji2.getNilai()*0.3
        nilai3=self.__pembimbing.getNilai()*0.4
        return nilai1+nilai2+nilai3

    def getHurufMutu(nilai) :
        if nilai > 80 and nilai <= 100 :
            return 'A'
        elif nilai > 70 and nilai <= 80 :
            return 'B'
        elif nilai > 60 and nilai <= 70 :
            return 'C'
        return 'T'

    def print(self) :
        Person.print()
        print("NPM = " + str(self.__npm))
        print("Nilai Penguji 1 = " + str(self.__penguji1.getNilai()))
        print("Nilai Penguji 2 = " + str(self.__penguji2.getNilai()))
        print("Nilai Pembimbing = " + self.__pembimbing.getNilai())
        print("Nilai Sidang = " + str(self.hitungNilaiSidang()))
        print("Huruf Mutu = " + str(self.getHurufMutu(self.hitungNilaiSidang())))