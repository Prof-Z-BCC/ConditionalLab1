#include <iostream>
#include <string>

/* For the following sections, write code that completes the task as described
 * You do not have to create variables in these functions, nor do you need
 * to create return statements.
 */

void divisible(const int& num1, const int& num2) {
    // Write a conditional that determines whether the first number
    // is divisible by the second number. If it isn't, print
    // "You need to work on your math facts." along with the remainder.
    // otherwise, do nothing.


}
bool evenOdd(const int& number) {
    bool result;
    // Write the if statement here that sets result to true if
    // the number is even.


    // Otherwise, the number is odd.


    // Return the result
    return result;
}

std::string typeInput(const char& ch) {
    // Determine the type of character that ch is
    // Number, Letter, or Symbol.
    // Assign the type to the result variable
    std::string result;

    // Check if the character is a number using a compound conditional


    // Check if the character is a letter using multiple compounds


    // Otherwise, it is a symbol


    // Don't change this part.
    return result;
}

int main() {
   // Section 1 - Do not change
    int value1,
    value2;
    std::cout << "Enter two numbers that are divisible, larger value first: ";
    std::cin >> value1 >> value2;
    divisible(value1, value2);


    std::cout << std::endl;

    // Section 2 - Do not change
    int number;
    std::cout << "Branch Conditional" << std::endl;
    std::cout << "Enter an integer value: ";
    std::cin >> number;

    std::cout.setf(std::ios::boolalpha);
    std::cout << "The value " << number << " is " << evenOdd(number) << "." << std::endl;

    std::cout << std::endl;

    // Section 3 - Do not change
    std::cout << "Multi-Branch Conditional" << std::endl;
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    std::cout << "That was a " << typeInput(ch) << "." << std::endl;

    std::cout << std::endl;

    // Section 4 -- Your turn to write it from scratch
    /* For this part, you will write a program that calculates the total price of items with
     * a discount. The base cost is $60 per student, per hour. If the number of total hours is
     * less than 20, there is no discount. If there are between 21 and 35 hours, it is a 5%
     * discount. Between 36 and 50 hours is 10% discount. Anything over 50 hours is a 15% discount.
     *
     * Additionally, there is a flat fee of $150 dollars that is paid, regardless of the number
     * of hours that is not a part of the discount.
     *
     * Write a branching conditional structure that allows the user to enter a number of seats
     * and a number of hours per seat. It should calculate the tota usage fee and display
     * appropriately to 2 decimals, whether it is .00 or .99.
     */

    return 0;
}