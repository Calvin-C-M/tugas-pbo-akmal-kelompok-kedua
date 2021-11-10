from mamalia import Mamalia

class Tikus(Mamalia) :
    def __init__(self) :
        super().__init__()
        super().setNama("Tikus")
        super().setUkuran("Kecil")
        super().setJumlahKaki(4)
        super().setHabitat("Perumahan")