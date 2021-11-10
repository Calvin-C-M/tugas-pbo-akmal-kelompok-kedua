#include "mamalia.cpp"
#pragma once

class Tikus: public Mamalia {
public:
    Tikus() {
        Mamalia::setNama("Tikus");
        Mamalia::setUkuran("Kecil");
        Mamalia::setJumlahKaki(4);
        Mamalia::setHabitat("Perumahan");
    }
};
