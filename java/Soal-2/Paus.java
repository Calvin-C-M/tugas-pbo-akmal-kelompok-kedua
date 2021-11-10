public class Paus extends Mamalia{

    @Override
    public void setNama(){
        String nama = "Paus";
        System.out.println("Nama\t\t: " + nama);
    }

    @Override
    public void setUkuran(){
        String ukuran = "Besar";
        System.out.println("Ukuran\t\t: " + ukuran);
    }

    @Override
    public void setKaki(){
        int jmlKaki = 0;
        System.out.println("Jumlah Kaki\t: " + jmlKaki);
    }

    @Override
    public void setHabitat(){
        String habitat = "Lautan";
        System.out.println("Habitat\t\t:" + habitat);
    }
}
