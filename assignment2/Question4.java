/*
 * Two numbers are entered through the keyboard. 
 * Write a program to find the value of one number raised to the power of another. 
 */
package assignment2;

import java.util.Scanner;

public class Question4 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter the base number: ");
		int base = scanner.nextInt();

		System.out.print("Enter the exponent: ");
		int exponent = scanner.nextInt();

		int result = power(base, exponent);
		System.out.println(base + " raised to the power of " + exponent + " is: " + result);

		scanner.close();
	}

	public static int power(int base, int exponent) {
		int result = 1;
		for (int i = 0; i < exponent; ++i) {
			result *= base;
		}
		return result;
	}
}
