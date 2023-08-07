// numerology.h
#ifndef NUMEROLOGY_H
#define NUMEROLOGY_H


int sumOfDigits(int number) {
    // Base case: If the number is a single digit, return it as it is.
    if (number < 10) {
        return number;
    }

    // Recursive case: Calculate the sum of digits by adding the last digit to the sum of remaining digits.
    int lastDigit = number % 10;
    int remainingDigits = number / 10;
    return sumOfDigits(lastDigit + sumOfDigits(remainingDigits));
}
#endif
