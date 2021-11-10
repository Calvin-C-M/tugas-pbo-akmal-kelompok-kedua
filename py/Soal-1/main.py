# ANGGOTA KELOMPOK:
# - Naufal Fahrezi            (140810200035)
# - Amalia Nur Fitri          (140810200045)
# - Calvin Calfi Montolalu    (140810200053)
# - Deani Puteri Virdiana     (140810200059)

from person import Person
from nilai import Nilai

class Student(Person) :
    def __init__(self) :
        super().__init__()
        self.__npm=0
        self.__penguji1=Nilai()
        self.__penguji2=Nilai()
        self.__pembimbing=Nilai()

    def setNpm(self,npm) : self.__npm=npm

    def getNpm(self) : return self.__npm

    def input(self) :
        super().input()
        self.__npm=int(input("Masukkan NPM: "))
        self.__penguji1.input("Penguji 1")
        self.__penguji2.input("Penguji 2")
        self.__pembimbing.input("Pembimbing")

    def hitungNilaiSidang(self) :
        nilai1=self.__penguji1.getNilai()*0.3
        nilai2=self.__penguji2.getNilai()*0.3
        nilai3=self.__pembimbing.getNilai()*0.4
        return nilai1+nilai2+nilai3

    def getHurufMutu(self,nilai) :
        if nilai > 80 and nilai <= 100 :
            return 'A'
        elif nilai > 70 and nilai <= 80 :
            return 'B'
        elif nilai > 60 and nilai <= 70 :
            return 'C'
        return 'T'

    def print(self) :
        super().print()
        print("NPM\t\t=" + str(self.__npm))
        print("Nilai Penguji 1\t=" + str(self.__penguji1.getNilai()))
        print("Nilai Penguji 2\t=" + str(self.__penguji2.getNilai()))
        print("Nilai Pembimbing\t=" + str(self.__pembimbing.getNilai()))
        print("Nilai Sidang\t=" + str(self.hitungNilaiSidang()))
        print("Huruf Mutu\t=" + self.getHurufMutu(self.hitungNilaiSidang()))

mahasiswa1=Student()
mahasiswa2=Student()

print("===== MAHASISWA 1 =====")
mahasiswa1.input()

print("===== MAHASISWA 2 =====")
mahasiswa2.input()

print("===== MAHASISWA 1 =====")
mahasiswa1.print()

print("===== MAHASISWA 2 =====")
mahasiswa2.print()