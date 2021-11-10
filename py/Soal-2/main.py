# ANGGOTA KELOMPOK:
# - Naufal Fahrezi            (140810200035)
# - Amalia Nur Fitri          (140810200045)
# - Calvin Calfi Montolalu    (140810200053)
# - Deani Puteri Virdiana     (140810200059)

from gajah import Gajah
from paus import Paus
from tikus import Tikus

print("========= GAJAH =========")
gajah = Gajah()
gajah.printInfo()

print("\n========= TIKUS =========")
tikus = Tikus()
print("Jenis\t\t:" + tikus.getJenis())
print("Nama\t\t:" + tikus.getNama())
print("Ukuran\t\t:" + tikus.getUkuran())
print("Jumlah Kaki\t:" + str(tikus.getJumlahKaki()))
print("Habitat\t\t:" + tikus.getHabitat())

print("\n========= PAUS ==========")
paus = Paus()
paus.printInfo()