#include <iostream>

using namespace std;

class Makhluk {
private:
    string jenis;
public:
    Makhluk() {
        this->jenis="";
    }

    Makhluk(string jns) {
        this->jenis=jns;
    }

    void setJenis(string jenis) {
        this->jenis=jenis;
    }

    string getJenis() {
        return this->jenis;
    }

    void printInfo() {
        cout << "Jenis\t\t:" << this->jenis << endl;
    }
};