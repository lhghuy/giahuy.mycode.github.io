
import java.util.Scanner;

class PhanSo {
    private int tu,mau;
    private Scanner sc = new Scanner(System.in);
    public PhanSo(int tu,int mau)
    {
        super();
        this.tu = tu;
        this.mau = mau;
    }

    public void input()
    {
         this.tu = sc.nextInt();
         this.mau = sc.nextInt();
         sc.close();
    }
    public int getTu() {
        return tu;
    }

    public void setTu(int tu) {
        this.tu = tu;
    }

    public int getMau() {
        return mau;
    }

    public void setMau(int mau) {
        this.mau = mau;
    }

    public int timUSCLN(int a, int b) {
        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        return a;
    }

    public void toiGianPhanSo() {
        int i = timUSCLN(this.getTu(), this.getMau());
        this.setTu(this.getTu() / i);
        this.setMau(this.getMau() / i);
    }

    public void chiaPhanSo(PhanSo ps) {
        int ts = this.getTu() * ps.getMau();
        int ms = this.getMau() * ps.getTu();
        PhanSo phanSoThuong = new PhanSo(ts, ms);
        phanSoThuong.toiGianPhanSo();
        System.out.println(phanSoThuong.tu + "/" + phanSoThuong.mau);
    }
    public void closeScanner() {
        sc.close();
    }
}
