package assignment2;

public class Question10 {

	public static void main(String[] args) {
		int n = 4; // Number of rows in the pattern

		for (int i = 0; i < n; i++) {
			// Print spaces
			for (int j = 0; j < n - i - 1; j++) {
				System.out.print(" ");
			}

			// Print stars
			for (int j = 0; j < 2 * i + 1; j++) {
				System.out.print("*");
			}

			// Move to the next line
			System.out.println();
		}
	}

}
