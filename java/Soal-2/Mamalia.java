public class Mamalia extends Makhluk {
    private String nama;
    private String ukuran;
    private int jumlahKaki;
    private String habitat;

    Mamalia() {
        super.setJenis("Mamalia");
        this.nama="";
        this.ukuran="";
        this.jumlahKaki=0;
        this.habitat="";
    }

    Mamalia(String nama, String ukuran, int jumlahKaki, String habitat) {
        super.setJenis("Mamalia");
        this.nama=nama;
        this.ukuran=ukuran;
        this.jumlahKaki=jumlahKaki;
        this.habitat=habitat;
    }

    public void setNama(String nama) {
        this.nama=nama;
    }

    public void setUkuran(String ukrn) {
        this.ukuran=ukrn;
    }

    public void setJumlahKaki(int jmlKaki) {
        this.jumlahKaki=jmlKaki;
    }

    public void setHabitat(String habitat) {
        this.habitat=habitat;
    }

    public String getNama() {
        return nama;
    }

    public String getUkuran() {
        return ukuran;
    }

    public int getJumlahKaki() {
        return jumlahKaki;
    }

    public String getHabitat() {
        return habitat;
    }

    public void printInfo() {
        super.printInfo();
        System.out.println("Nama\t\t:" + this.nama);
        System.out.println("Ukuran\t\t:" + this.ukuran);
        System.out.println("Jumlah Kaki\t:" + this.jumlahKaki);
        System.out.println("Habitat\t\t:" + this.habitat);
    }
}
