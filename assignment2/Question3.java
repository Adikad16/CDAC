/*
 * Write a program to find the factorial value of any number entered through the keyboard.
 */
package assignment2;

import java.util.Scanner;

public class Question3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num, fact = 1;
		System.out.println("Enter a number: ");
		num = sc.nextInt();
		for (int i = 1; i <= num; i++) {
			fact = fact * i;

		}
		System.out.println("factorial is: " + fact);

	}

}
