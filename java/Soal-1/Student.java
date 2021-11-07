import java.util.Scanner;

public class Student extends Person {
    private int npm;
    private Nilai penguji1;
    private Nilai penguji2;
    private Nilai pembimbing;

    public Student() {
        super();
        this.npm=0;
        this.penguji1=new Nilai();
        this.penguji2=new Nilai();
        this.pembimbing=new Nilai();
    }

    public Student(String nama, int umur, int npm, Nilai penguji1, Nilai penguji2, Nilai pembimbing) {
        super(nama, umur);
        this.npm=npm;
        this.penguji1=penguji1;
        this.penguji2=penguji2;
        this.pembimbing=pembimbing;
    }

    public void setNpm(int npm) { this.npm=npm; }

    public int getNpm() { return this.npm; }

    public void input() {
        Scanner input=new Scanner(System.in);

        super.input();

        System.out.print("Masukkan NPM: ");
        this.npm=Integer.parseInt(input.nextLine());

        this.penguji1.input();
        this.penguji2.input();
        this.pembimbing.input();

        input.close();
    }

    public double hitungNilaiSidang() {
        double nilai1=this.penguji1.getNilai()*0.3;
        double nilai2=this.penguji2.getNilai()*0.3;
        double nilai3=this.pembimbing.getNilai()*0.4;
        return nilai1+nilai2+nilai3;
    }

    public char getHurufMutu(double nilai) {
        if(nilai > 80 && nilai <= 100) {
            return 'A';
        } else if(nilai > 70 && nilai <= 80) {
            return 'B';
        } else if(nilai > 60 && nilai <= 70) {
            return 'C';
        }
        return 'T';
    }

    public void print() {
        super.print();
        System.out.println("NPM = " + this.npm);
        System.out.println("Nilai Penguji 1 = " + this.penguji1.getNilai());
        System.out.println("Nilai Penguji 2 = " + this.penguji2.getNilai());
        System.out.println("Nilai Pembimbing = " + this.pembimbing.getNilai());
        System.out.println("Nilai Sidang = " + this.hitungNilaiSidang());
        System.out.println("Huruf Mutu = " + this.getHurufMutu(this.hitungNilaiSidang()));
    }
}
