from mamalia import Mamalia

class Gajah(Mamalia) :
    def __init__(self) :
        super().__init__()
        super().setNama("Gajah")
        super().setUkuran("Besar")
        super().setJumlahKaki(4)
        super().setHabitat("Padang rumput")
