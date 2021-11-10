#include "mamalia.cpp"
#pragma once

class tikus: public mamalia
{
public:
    tikus() {
        mamalia::setNama("Tikus");
        mamalia::setUkuran("Kecil");
        mamalia::setJumlahKaki(4);
        mamalia::setHabitat("Perumahan");
    }
};
