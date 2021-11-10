#include "mamalia.cpp"
#pragma once

class Gajah: public Mamalia {
public:
    Gajah() {
        Mamalia::setNama("Gajah");
        Mamalia::setUkuran("Besar");
        Mamalia::setJumlahKaki(4);
        Mamalia::setHabitat("Padang rumput");
    }
};