#include <iostream>

using namespace std;

class makhluk
{
private:
    string jenis;
public:
    makhluk() {
        this->jenis="";
    }

    makhluk(string jns) {
        this->jenis=jns;
    }

    void setJenis(string jenis) {
        this->jenis=jenis;
    }

    string getJenis() {
        return this->jenis;
    }

    void printInfo() {
        cout << "Jenis\t\t:" + this->jenis << endl;
    }
};