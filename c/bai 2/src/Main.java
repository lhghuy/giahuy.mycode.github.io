import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("ho va ten: ");
        String a = sc.nextLine();
        System.out.print("tuoi: ");
        int b = sc.nextInt();
        System.out.println("dia chi nha: ");
        String l = sc.nextLine();
        System.out.print("so dien thoai: ");
        int f = sc.nextInt();
        System.out.print("diem toan: ");
        double t = sc.nextDouble();
        System.out.print("diem van: ");
        double v = sc.nextDouble();
        System.out.print("diem anh: ");
        double e = sc.nextDouble();
        double i=(t+v+e)/3;
        System.out.println("diem trung binh: " + i);
        sc.close();
    }
}