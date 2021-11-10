#include <iostream>

using namespace std;

class Person {
    protected:
        string nama;
        int umur;
    
    public:
        Person() {
            this->nama="";
            this->umur=0;
        }

        Person(string nama, int umur) {
            this->nama=nama;
            this->umur=umur;
        }

        void setNama(string nama) { this->nama=nama; }
        void setUmur(int umur) { this->umur=umur; }

        string getNama() { return this->nama; }
        int getUmur() { return this->umur; }

        void input() {
            cout << "Masukkan nama: "; cin >> this->nama;
            cout << "Masukkan umur: "; cin >> this->umur;
        }

        void print() {
            cout << "Nama\t\t= " << this->nama << endl;
            cout << "Umur\t\t= " << this->umur << endl;
        }
};
