/*

ANGGOTA KELOMPOK:
- Naufal Fahrezi            (140810200035)
- Amalia Nur Fitri          (140810200045)
- Calvin Calfi Montolalu    (140810200053)
- Deani Puteri Virdiana     (140810200059)

*/

public class Main {
    public static void main(String[] args) {
        Student mahasiswa1=new Student();
        Student mahasiswa2=new Student();

        System.out.println("MAHASISWA 1");
        mahasiswa1.input();

        System.out.println("MAHASISWA 2");
        mahasiswa2.input();

        System.out.println("MAHASISWA 1");
        mahasiswa1.print();

        System.out.println("MAHASISWA 2");
        mahasiswa2.print();
    }
}