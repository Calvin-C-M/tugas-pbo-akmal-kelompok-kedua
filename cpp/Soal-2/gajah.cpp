#include "mamalia.cpp"
#pragma once

class gajah: public mamalia
{
public:
    gajah() {
        mamalia::setNama("Gajah");
        mamalia::setUkuran("Besar");
        mamalia::setJumlahKaki(4);
        mamalia::setHabitat("Padang rumput");
    }
};