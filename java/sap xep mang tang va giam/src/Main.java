import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int [100];
        int n = sc.nextInt();

        for(int i=0 ; i<n ; i++)
        {
            arr[i] = sc.nextInt();
        }

        int change;
        for(int i=0 ; i < n-1 ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[i] > arr[j])
                {
                    change = arr[i];
                    arr[i] = arr[j];
                    arr[j] = change;
                }
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        for(int i=0 ; i < n-1 ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[i] < arr[j])
                {
                    change = arr[i];
                    arr[i] = arr[j];
                    arr[j] = change;
                }
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}