#include "makhluk.cpp"
#pragma once

class mamalia: public makhluk
{
private:
    string nama;
    string ukuran;
    int jumlahKaki;
    string habitat;
public:
    mamalia() {
        makhluk::setJenis("Mamalia");
        this->nama="";
        this->ukuran="";
        this->jumlahKaki=0;
        this->habitat="";
    }

    mamalia(string nama, string ukuran, int jumlahKaki, string habitat) {
        makhluk::setJenis("Mamalia");
        this->nama=nama;
        this->ukuran=ukuran;
        this->jumlahKaki=jumlahKaki;
        this->habitat=habitat;
    }

    void setNama(string nama) {
        this->nama=nama;
    }

    void setUkuran(string ukrn) {
        this->ukuran=ukrn;
    }

    void setJumlahKaki(int jmlKaki) {
        this->jumlahKaki=jmlKaki;
    }

    void setHabitat(string habitat) {
        this->habitat=habitat;
    }

    string getNama() {
        return nama;
    }

    string getUkuran() {
        return ukuran;
    }

    int getJumlahKaki() {
        return jumlahKaki;
    }

    string getHabitat() {
        return habitat;
    }

    void printInfo() {
        makhluk::printInfo();
        cout << "Nama\t\t:" + this->nama << endl;
        cout << "Ukuran\t\t:" + this->ukuran << endl;
        cout << "Jumlah Kaki\t:" + this->jumlahKaki << endl;
        cout << "Habitat\t\t:" + this->habitat << endl;
    }

};
