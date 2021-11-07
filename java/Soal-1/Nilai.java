import java.util.Scanner;

public class Nilai {
    private double nilai;

    public Nilai() {
        this.nilai=0;
    }

    public Nilai(double nilai) {
        this.nilai=nilai;
    }

    public void setNilai(double nilai) { this.nilai=nilai; }

    public double getNilai() { return this.nilai; }

    public void input() {
        Scanner input=new Scanner(System.in);

        System.out.print("Masukkan nilai: ");
        this.nilai=Double.parseDouble(input.nextLine());

        input.close();
    }
}
