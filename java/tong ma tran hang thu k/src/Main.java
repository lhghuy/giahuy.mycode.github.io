import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Nhap so hang cua ma tran: ");
        int rows = scanner.nextInt();
        System.out.print("Nhap so cot cua ma tran: ");
        int cols = scanner.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Nhap gia tri cho ma tran:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.printf("Nhap gia tri cho vi tri [%d][%d]: ", i, j);
                matrix[i][j] = scanner.nextInt();
            }
        }

        System.out.print("Nhap so hang k can tinh tong: ");
        int k = scanner.nextInt();

        if (k >= 0 && k < rows) {
            int sum = 0;
            for (int j = 0; j < cols; j++) {
                sum += matrix[k][j];
            }
            System.out.printf("Tong cua hang thu %d la: %d%n", k, sum);
        } else {
            System.out.println("Hang khong hop le!");
        }

        scanner.close();
    }
}
