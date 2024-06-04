public class TAMGIAC {
    private double canh1;
    private double canh2;
    private double canh3;
    public TAMGIAC(double canh1, double canh2, double canh3) {
        this.canh1 = canh1;
        this.canh2 = canh2;
        this.canh3 = canh3;
    }

    public boolean laTAMGIAC() {
        return (canh1 + canh2 > canh3) && (canh1 + canh2 > canh3) && (canh1 + canh2 > canh3);
    }

    public double ChuVi() {
        return canh1 + canh2 + canh3;
    }

    public double DienTich() {
        double s = ChuVi() / 2;
        return Math.sqrt(s * (s - canh1) * (s - canh2) * (s - canh3));
    }

    public void tamgiac() {
        System.out.println("Side 1: " + canh1);
        System.out.println("Side 2: " + canh2);
        System.out.println("Side 3: " + canh3);
        System.out.println("chu vi: " + ChuVi());
        System.out.println("dien tich: " + DienTich());
    }


}
