import java.io.*;
import java.util.Scanner;
public class vd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//System.out.printf("hello everyone!\nHappy new year");
		int cd,cr;
		Scanner cm = new Scanner(System.in);
		System.out.print("chieu dai, chieu rong HCN: ");
		cd = cm.nextInt();
		cr = cm.nextInt();
		int cv = (cd+cr)*2;
		System.out.print("chu vi HCN: " + cv);
		cm.close();
	}
}
