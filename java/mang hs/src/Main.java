import java.util.Scanner;

class hs{
    Scanner sc = new Scanner(System.in);
    private hs ds[];
    private int sl;
    private String maSo;
    private String hoTen;
    public void infor(){
        System.out.println("nhap danh sach :");
        sl = sc.nextInt();
        int []ds = new int[sl];
    }
    public String getMaSo(){
        return maSo;
    }
    public String getHoTen(){
        return hoTen;
    }
    public void setMaSo(String ms){
        maSo = ms;
    }
    public void setHoTen(String name){
        hoTen = name;
    }

    public void input(){
        maSo = sc.nextLine();
        hoTen = sc.nextLine();
    }

}
public class Main {
    public static void main(String[] args){
       hs hocsinh = new hs();

    }
}