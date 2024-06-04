import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] arr = {9, 2, 5, 3, 7, 1, 8, 4, 6, 0};
        Arrays.sort(arr);
        System.out.print("Mang sau khi sap xep tang dan: ");
        for (int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
