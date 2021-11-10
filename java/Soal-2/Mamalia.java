public class Mamalia extends Makhluk{

    public void setNama(){
        String nama = "Tidak bernama";
        System.out.println("Nama\t\t:" + nama);
    }

    @Override
    public void setJenis(){
        String jenis = "Hewan Mamalia";
        System.out.println("Jenis\t\t:" + jenis);
    }

    public void setUkuran(){
        String ukuran = "Bervariasi";
        System.out.println("Ukuran\t\t:" + ukuran);
    }

    public void setKaki(){
        int jmlKaki = 0;
        System.out.println("Jumlah Kaki\t:" + jmlKaki);
    }

    public void setHabitat(){
        String habitat = "Beragam habitat";
        System.out.println("Habitat\t\t:" + habitat);
    }
}
