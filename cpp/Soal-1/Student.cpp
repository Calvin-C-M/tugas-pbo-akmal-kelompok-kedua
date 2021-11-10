#include "Person.cpp"
#include "Nilai.cpp"

class Student: public Person {
    private:
        int npm;
        Nilai penguji1;
        Nilai penguji2;
        Nilai pembimbing;

    public:
        Student() {
            Person::nama="";
            Person::umur=0;
            this->npm=0;
            this->penguji1.setNilai(0);
            this->penguji2.setNilai(0);
            this->pembimbing.setNilai(0);
        }

        Student(string nama, int umur, int npm, Nilai penguji1, Nilai penguji2, Nilai pembimbing) {
            Person::nama=nama;
            Person::umur=umur;
            this->npm=npm;
            this->penguji1=penguji1;
            this->penguji2=penguji2;
            this->pembimbing=pembimbing;
        }

        void setNpm(int npm) { this->npm=npm; }

        int getNpm() { return this->npm; }

        void input() {
            Person::input();
            cout << "Masukkan NPM: "; cin >> this->npm;
            this->penguji1.input();
            this->penguji2.input();
            this->pembimbing.input();
        }

        double hitungNilaiSidang() {
            double nilai1=this->penguji1.getNilai()*0.3;
            double nilai2=this->penguji2.getNilai()*0.3;
            double nilai3=this->pembimbing.getNilai()*0.4;
            return nilai1+nilai2+nilai3;
        }

        char getHurufMutu(double nilai) {
            if(nilai > 80 && nilai <= 100) {
                return 'A';
            } else if(nilai > 70 && nilai <= 80) {
                return 'B';
            } else if(nilai > 60 && nilai <= 70) {
                return 'C';
            }
            return 'T';
        }

        void print() {
            Person::print();
            cout << "NPM\t\t= " << this->npm << endl;
            cout << "Nilai Penguji 1\t= " << this->penguji1.getNilai() << endl;
            cout << "Nilai Penguji 2\t= " << this->penguji2.getNilai() << endl;
            cout << "Nilai Pembimbing= " << this->pembimbing.getNilai() << endl;
            cout << "Nilai Sidang\t= " << this->hitungNilaiSidang() << endl;
            cout << "Huruf Mutu\t= " << this->getHurufMutu(this->hitungNilaiSidang()) << endl;
        }
};