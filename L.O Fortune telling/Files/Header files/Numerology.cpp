#include <iostream>
using namespace std;



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

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "Result: " << result << endl;
      switch (result) {
      case 1:
        cout << "No 1 represents self. You like to do things alone and most of you are introverts. You have difficulties in communication with others. You have the leadership skills which makes you independent and confident. Sometimes, that confident can be used in the wrong place and can make mistakes. You can be reckless when young and don’t care of anyone. You do what you want to do and that makes you face with more difficulties. Sometimes, you can be selfish but as you are very patient towards life. You don’t let others influence your own decisions.Love life of number 1You can get dominating in love life. You try to lead in the relationship and have inflammatory ego. Due to that ego, you could be a single during youth." << endl;
        break;
      case 2:
        cout << "Yotsu!" << endl;
        break;
      case 3:
        cout << "Loli!" << endl;
        break;
      case 4:
        cout << "Sinster!"<< endl;
        break;
      case 5:
        cout << "Damn!" << endl;
        break;
      case 6:
        cout << "Nein!" << endl;
        break;
      case 7:
        cout << "Doubled!" << endl;
        break;
      case 8:
        cout << "Boo!" << endl;
        break;
      case 9:
        cout << "Shit!"<< endl;
        break;
      case 0:
        cout << " Kill yoursefl!" << endl;
        break;

      }
    return 0;
}
