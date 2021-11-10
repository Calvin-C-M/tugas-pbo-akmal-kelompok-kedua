import java.util.Scanner;

public class Person {
    private String nama;
    private int umur;

    public Person() {
        this.nama="";
        this.umur=0;
    }

    public Person(String nama, int umur) {
        this.nama=nama;
        this.umur=umur;
    }

    public void setNama(String nama) { this.nama=nama; }
    public void setUmur(int umur) { this.umur=umur; }

    public String getNama() { return this.nama; }
    public int getUmur() { return this.umur; }

    public void input() {
        Scanner input=new Scanner(System.in);

        System.out.print("Masukkan nama: ");
        this.nama=input.nextLine();

        System.out.print("Masukkan umur: ");
        this.umur=input.nextInt();

    }

    public void print() {
        System.out.println("Nama\t\t=" + this.nama);
        System.out.println("Umur\t\t=" + this.umur);
    }
}
