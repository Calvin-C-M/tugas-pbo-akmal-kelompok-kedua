public class Tikus {

    @Override
    public void setNama(){
        String nama = "Tikus";
        System.out.println("Nama\t\t: " + nama);
    }

    @Override
    public void setUkuran(){
        String ukuran = "Kecil";
        System.out.println("Ukuran\t\t: " + ukuran);
    }

    @Override
    public void setKaki(){
        int jmlKaki = 4;
        System.out.println("Jumlah Kaki\t: " + jmlKaki);
    }

    @Override
    public void setHabitat(){
        String habitat = "Daratan";
        System.out.println("Habitat\t\t:" + habitat);
    }
}
