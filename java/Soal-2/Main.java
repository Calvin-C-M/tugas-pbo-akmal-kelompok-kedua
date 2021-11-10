/*

ANGGOTA KELOMPOK:
- Naufal Fahrezi            (140810200035)
- Amalia Nur Fitri          (140810200045)
- Calvin Calfi Montolalu    (140810200053)
- Deani Puteri Virdiana     (140810200059)

*/

public class Main {
    public static void main(String[] args) {
        System.out.println("========= GAJAH =========");
        Mamalia gajah = new Gajah();
        gajah.printInfo();

        System.out.println("\n========= TIKUS =========");
        Mamalia tikus = new Tikus();
        System.out.println("Jenis\t\t:" + tikus.getJenis());
        System.out.println("Nama\t\t:" + tikus.getNama());
        System.out.println("Ukuran\t\t:" + tikus.getUkuran());
        System.out.println("Jumlah Kaki\t:" + tikus.getJumlahKaki());
        System.out.println("Habitat\t\t:" + tikus.getHabitat());

        System.out.println("\n========= PAUS ==========");
        Mamalia paus = new Paus();
        paus.printInfo();
    }
}