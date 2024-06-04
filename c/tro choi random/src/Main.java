import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random random = new Random();
        int randomNumber = random.nextInt(101);
        int solandem = 0;
        int k;

        System.out.println("Tôi đã chọn một số từ 0 đến 100. Bạn có 5 lần để đoán.");

        while (solandem < 5) {
            System.out.print("Lần đoán thứ " + (solandem + 1) + ": ");
            k = sc.nextInt();
            if (k == randomNumber) {
                System.out.println("Chính xác!");
                return;
            } else if (k < randomNumber) {
                System.out.println("Số bạn đoán nhỏ hơn số tôi đã chọn");
            } else {
                System.out.println("Số bạn đoán lớn hơn số tôi đã chọn");
            }
            solandem++;
        }

        System.out.println("Rất tiếc, bạn đã thua cuộc");
        sc.close();
    }
}
