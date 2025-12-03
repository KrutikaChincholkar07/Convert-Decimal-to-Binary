import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a decimal number: ");
        int num = sc.nextInt();

        String binary = "";

        int temp = num;
        if (temp == 0) {
            binary = "0";
        } else {
            while (temp > 0) {
                int remainder = temp % 2;
                binary = remainder + binary;  // adding in reverse order
                temp /= 2;
            }
        }

        System.out.println("Binary: " + binary);
    }
}
