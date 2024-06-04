import java.util.Scanner;
public class DEMO {
    public static void DEMO(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double canh1 = sc.nextDouble();
        Double canh2 = sc.nextDouble();
        Double canh3 = sc.nextDouble();
        TAMGIAC tamgiac = new TAMGIAC(canh1,canh2,canh3);
        if (tamgiac.laTAMGIAC()) {
            tamgiac.tamgiac();
        } else {
            System.out.println("cac canh khong hop le");
        }
    }
}