import java.util.Scanner;
import java.util.Random;
public class Main {
    public static void main(String[] args) {
        Scanner su = new Scanner(System.in);
        Random random = new Random();
        int solandem=5, point=0, k, luotdem=0;
        System.out.println("chao ban den voi tro choi random!!!");
        System.out.print("moi ban nhap ten: ");
        String ten = su.nextLine();
        System.out.print("hay tao tai khoan cho minh: ");
        String tk = su.nextLine();
        System.out.print("nhap gioi han du doan: ");
        int max = su.nextInt();
        int randomNumber = random.nextInt(max);
        System.out.println("so du doan tu 0 den " + max);
        System.out.println("ban co " +solandem + " va " + point + " diem");
        System.out.println("tro choi bat dau:  ");
        while(luotdem<5) {
            System.out.print("so lan doan thu " + (luotdem+1) + ":");
            k = su.nextInt();
            if(k==randomNumber){
                System.out.println("ban da doan dung");
                System.out.println("chuc mung ban da doan dung vao luot dem thu "+luotdem);
                if(luotdem==0){
                    System.out.print("ban duoc 5 diem");}
                if(luotdem==1){
                    System.out.print("ban duoc 4 diem");}
                if(luotdem==2){
                    System.out.print("ban duoc 3 diem");}
                if(luotdem==3){
                    System.out.print("ban duoc 2 diem");}
                if(luotdem==4){
                    System.out.print("ban duoc 1 diem");}
                return;}
            else if(k<randomNumber){
                System.out.println("so ban doan nho hon so he thong, moi ban doan lai");}
            else {
                System.out.println("so ban doan lon hon so he thong, moi ban doan lai");}
            luotdem++;}
        System.out.print("ban da thua, ngu");
        su.close();
    }
}