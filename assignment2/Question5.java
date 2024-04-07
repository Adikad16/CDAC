package assignment2;

import java.util.Scanner;

public class Question5 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter an integer number: ");
		int number = scanner.nextInt();

		int reversedNumber = reverseNumber(number);
		System.out.println("Reversed number: " + reversedNumber);

	}

	public static int reverseNumber(int number) {
		int reversedNumber = 0;
		while (number != 0) {
			int digit = number % 10;
			reversedNumber = reversedNumber * 10 + digit;
			number /= 10;
		}
		return reversedNumber;
	}
}
