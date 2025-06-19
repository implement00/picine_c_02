#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb) {

    // Handle the special case of zero
    if (nb == 0) {
        write(1, "0", 1);
        return;
    }

    // Handle negative numbers
    if (nb < 0) {
        write(1, "-", 1); // Print the negative sign
        nb = -nb; // Make the number positive
    }

    // Store the digits in reverse order
    char array[25]; // Enough to hold all digits of an int
    int index = 0;

    // Extract digits and store them in the buffer
    while (nb > 0) {
        array[index++] = (nb % 10) + '0'; // Convert digit to character
        nb /= 10; // Remove the last digit
    }

    // Print the digits in reverse order using a while loop
    int i = index - 1; // Start from the last index
    while (i >= 0) {
        write(1, &array[i], 1); // Print each digit
        i--; // Move to the previous index
    }
}

int main() {
    ft_putnbr(42); // Example usage
    write(1, "\n", 1); // New line for better output formatting
    ft_putnbr(-1002); // Test with the minimum int value
    write(1, "\n", 1);
    ft_putnbr(0); // Test with zero
    write(1, "\n", 1);
    return 0;
}
