import java.util.HashMap;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        n = sc.nextInt();
        int a[] = new int [n];

        HashMap<Integer,Integer> arr = new HashMap<>();

        for(int i = 0 ; i < n ; i++) {
            a[i] = sc.nextInt();
        }

        for(int dem : a){
            if(arr.containsKey(dem)){
                arr.put(dem, arr.get(dem)+1);
            }
            else{
                arr.put(dem,1);
            }
        }

        for(int s : arr.keySet()){
            System.out.println(s + ":" + arr.get(s));
        }
    }
}