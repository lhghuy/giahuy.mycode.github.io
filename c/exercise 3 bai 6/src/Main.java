import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner su = new Scanner(System.in);
        System.out.print("nhap so bat ki: ");
        int a = su.nextInt();
        su.close();
        public static boolean checkPrime(int a) {
            if (a <= 1) {
                return false;
            }
            for (int i = 2; i <= Math.sqrt(a); i++) {
                if (a % i == 0) {
                    return false;
                }
            }
            return true;
        }
//        Scanner su = new Scanner(System.in);
//        System.out.println("nhap so bat ki: ");
//        int a = su.nextInt();
//
//        int checkPrime(a);
//        System.out.println(+checkPrime);
//        su.close();
    }
}