package assignment2;

import java.util.Scanner;

public class Question8 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int positiveCount = 0;
		int negativeCount = 0;
		int zeroCount = 0;

		char choice;
		do {
			System.out.print("Enter a number: ");
			int number = scanner.nextInt();

			if (number > 0) {
				positiveCount++;
			} else if (number < 0) {
				negativeCount++;
			} else {
				zeroCount++;
			}

			System.out.print("Do you want to enter another number? (y/n): ");
			choice = scanner.next().charAt(0);
		} while (choice == 'y' || choice == 'Y');

		System.out.println("Positive numbers entered: " + positiveCount);
		System.out.println("Negative numbers entered: " + negativeCount);
		System.out.println("Zeroes entered: " + zeroCount);

	}
}
