import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if(a == 0)
        {
            System.out.println("0");
            return;
        }
        if(b == 0)
        {
            System.out.println("Infinity");
            return;
        }
        if(b < 0)
        {
            System.out.println("-" + a + "/" + (b*(-1)));
        }
        else
        {
            System.out.println(a + "/" + b);
        }
    }
}