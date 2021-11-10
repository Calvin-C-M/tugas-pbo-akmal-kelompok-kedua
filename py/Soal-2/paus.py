from mamalia import Mamalia

class Paus(Mamalia) :
    def __init__(self) :
        super().__init__()
        super().setNama("Paus")
        super().setUkuran("Besar")
        super().setJumlahKaki(0)
        super().setHabitat("Laut")