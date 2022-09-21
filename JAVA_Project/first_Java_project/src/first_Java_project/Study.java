package first_Java_project;

import java.util.Scanner;

public class Study {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		var a = sc.nextInt();
		var b = sc.nextInt();
		if(a>b) {
			System.out.print(">");
		}
		else if (a<b) {
			System.out.print("<");
		}
		else {
			System.out.print("==");
		}
	}
}
