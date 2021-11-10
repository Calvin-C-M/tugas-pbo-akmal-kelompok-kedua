public class Makhluk {
    private String jenis;

    Makhluk() {
        this.jenis="";
    }

    Makhluk(String jns) {
        this.jenis=jns;
    }

    public void setJenis(String jenis) {
        this.jenis=jenis;
    }

    public String getJenis() {
        return this.jenis;
    }

    public void printInfo() {
        System.out.println("Jenis = " + this.jenis);
    }
}
