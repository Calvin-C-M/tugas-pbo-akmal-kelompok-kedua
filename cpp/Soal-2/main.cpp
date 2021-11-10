/*

ANGGOTA KELOMPOK:
- Naufal Fahrezi            (140810200035)
- Amalia Nur Fitri          (140810200045)
- Calvin Calfi Montolalu    (140810200053)
- Deani Puteri Virdiana     (140810200059)

*/

#include <iostream>
#include "gajah.cpp"
#include "tikus.cpp"
#include "paus.cpp"

using namespace std;

int main() {
    cout << "========= GAJAH =========" << endl;
    Gajah gj;
    gj.printInfo();

    cout << "\n========= TIKUS =========" << endl;
    Tikus tk;
    cout << "Jenis\t\t:" << tk.getJenis() << endl;
    cout << "Nama\t\t:" << tk.getNama() << endl;
    cout << "Ukuran\t\t:" << tk.getUkuran() << endl;
    cout << "Jumlah Kaki\t:" << tk.getJumlahKaki() << endl;
    cout << "Habitat\t\t:" << tk.getHabitat() << endl;

    cout << "\n========= PAUS ==========" << endl;
    Paus ps;
    ps.printInfo();
}