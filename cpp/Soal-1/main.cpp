/*

ANGGOTA KELOMPOK:
- Naufal Fahrezi            (140810200035)
- Amalia Nur Fitri          (140810200045)
- Calvin Calfi Montolalu    (140810200053)
- Deani Puteri Virdiana     (140810200059)

*/

#include <iostream>
#include "Student.cpp"

using namespace std;

int main() {
    Student *mahasiswa1=new Student();
    Student *mahasiswa2=new Student();

    cout << "===== MAHASISWA 1 =====" << endl;
    mahasiswa1->input();

    cout << "===== MAHASISWA 2 =====" << endl;
    mahasiswa2->input();

    cout << "===== MAHASISWA 1 =====" << endl;
    mahasiswa1->print();

    cout << "===== MAHASISWA 2 =====" << endl;
    mahasiswa2->print();
}