
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhanSo phanSo1 = new PhanSo();
        PhanSo phanSo2 = new PhanSo();
        phanSo1.input();
        phanSo2.input();

        phanSo1.chiaPhanSo(phanSo2);
        sc.close();
    }
}
