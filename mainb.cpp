#include <iostream>

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce a fraction represented by num and denom
// Returns 0 if either num or denom is non-positive, otherwise returns 1
int reduce(int& num, int& denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    // Calculate GCD of num and denom
    int gcd_value = gcd(num, denom);

    // Reduce the fraction by dividing by the GCD
    num /= gcd_value;
    denom /= gcd_value;

    return 1;
}

int main() {
    int num, denom;

    // Get user input for numerator and denominator
    std::cout << "Enter the numerator: ";
    std::cin >> num;
    std::cout << "Enter the denominator: ";
    std::cin >> denom;

    // Attempt to reduce the fraction
    int result = reduce(num, denom);

    if (result == 0) {
        std::cout << "Invalid input. Both numerator and denominator must be positive integers." << std::endl;
    } else {
        std::cout << "The reduced fraction is: " << num << "/" << denom << std::endl;
    }

    return 0;
}
