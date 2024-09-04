#include <iostream>

// Function to calculate the sum of all integers between 'first' and 'last' inclusive
int sum_from_to(int first, int last) {
    int sum = 0;

    // Ensure 'first' is less than or equal to 'last'
    if (first > last) {
        // Swap values if 'first' is greater than 'last'
        std::swap(first, last);
    }

    // Calculate the sum from 'first' to 'last'
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int first, last;

    // Get user input for 'first' and 'last'
    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the last integer: ";
    std::cin >> last;

    // Calculate the sum and display the result
    int result = sum_from_to(first, last);
    std::cout << "The sum of all integers from " << first << " to " << last << " is: " << result << std::endl;

    return 0;
}
