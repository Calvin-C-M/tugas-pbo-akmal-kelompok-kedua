#include "mamalia.cpp"
#pragma once

class Paus: public Mamalia {
public:
    Paus() {
        Mamalia::setNama("Paus");
        Mamalia::setUkuran("Besar");
        Mamalia::setJumlahKaki(0);
        Mamalia::setHabitat("Laut");
    }
};