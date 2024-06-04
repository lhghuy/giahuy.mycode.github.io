import java.util.Scanner;

class HOCSINH {

    Scanner scanner = new Scanner(System.in);
    private String maSo;
    private String hoTen;
    private float DTB;

    public String getMaSo(){
        return maSo;
    }
    public String getHoTen(){
        return hoTen;
    }
    public float getDTB(){
        return DTB;
    }


    public void setMaSo(String ms){
        maSo = ms;
    }
    public void setHoTen(String name){
        hoTen = name;
    }
    public void setDTB(float diem){
        DTB = diem;
    }

    public void input(){

        maSo = scanner.nextLine();


        hoTen = scanner.nextLine();


        DTB = scanner.nextFloat();
    }

    public void rank(){
        if(DTB >=8.5 && DTB <= 10){
            System.out.println("Gioi");
        }
        else if(DTB >=7 && DTB < 8.5){
            System.out.println("Kha");
        }
        else if(DTB >=5 && DTB < 7){
            System.out.println("Trung Binh");
        }
        else{
            System.out.println("Yeu");
        }
    }
    public void output(){
        System.out.print(maSo +" - "+ hoTen+" - "+DTB +" - ");

    }
}

public class Main {
    public static void main(String[] args) {

        //Khai báo đối tượng hs từ lớp HOCSINH
        HOCSINH hs = new HOCSINH();
        Scanner sc = new Scanner(System.in);
        //Gọi các phương thức từ đối tượng hs
        hs.setMaSo(sc.nextLine());
        hs.setHoTen(sc.nextLine());
        hs.setDTB(Float.parseFloat(sc.nextLine()));

        String newname = sc.nextLine();
        hs.setHoTen(newname);
        hs.output();
        hs.rank();
    }
}