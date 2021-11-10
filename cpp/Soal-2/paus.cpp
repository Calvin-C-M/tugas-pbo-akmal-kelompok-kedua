#include "mamalia.cpp"
#pragma once

class paus: public mamalia
{
public:
    paus() {
        mamalia::setNama("Paus");
        mamalia::setUkuran("Besar");
        mamalia::setJumlahKaki(0);
        mamalia::setHabitat("Laut");
    }
};