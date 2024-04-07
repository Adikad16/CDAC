package assignment2;

import java.util.Scanner;

public class Question9 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;

		char choice;
		do {
			System.out.print("Enter a number: ");
			int number = scanner.nextInt();

			if (number > max) {
				max = number;
			}
			if (number < min) {
				min = number;
			}

			System.out.print("Do you want to enter another number? (y/n): ");
			choice = scanner.next().charAt(0);
		} while (choice == 'y' || choice == 'Y');

		if (max == Integer.MIN_VALUE && min == Integer.MAX_VALUE) {
			System.out.println("No numbers were entered.");
		} else {
			System.out.println("Maximum number entered: " + max);
			System.out.println("Minimum number entered: " + min);
		}

	}
}
