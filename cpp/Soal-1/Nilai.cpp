#include <iostream>

using namespace std;

class Nilai {
    protected:
        double nilai;

    public:
        Nilai() {
            this->nilai=0;
        }

        Nilai(double nilai) {
            this->nilai=nilai;
        }

        void setNilai(double nilai) { this->nilai=nilai; }

        double getNilai() { return this->nilai; }

        void input() {
            cout << "Masukkan nilai: "; cin >> this->nilai;
        }
};