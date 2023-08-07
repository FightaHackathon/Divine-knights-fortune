#include <iostream>
#include "Header files/Numerology.h"
using namespace std;

// Function prototypes for the fortune telling methods
void method1();
void method2();
void method3();
void method4();

int main() {
    int choice;

    // Function pointer type for fortune telling methods
    typedef void (*FortuneTellingMethod)();

    // Array of function pointers for the fortune telling methods
    FortuneTellingMethod methods[] = {method1, method2, method3, method4};

    // Fortune telling menu
    cout << "Fortune Telling Menu" << endl;
    cout << "1. Method 1" << endl;
    cout << "2. Method 2" << endl;
    cout << "3. Method 3" << endl;
    cout << "4. Method 4" << endl;

    cout << "Enter the number to select a method of fortune telling: ";
    cin >> choice;

    // Check if the choice is valid
    if (choice >= 1 && choice <= 4) {
        // Call the selected fortune telling method through the function pointer
        methods[choice - 1]();
    } else {
        cout << "Invalid choice. Please select a number from 1 to 4." << endl;
    }

    return 0;
}

// Implement the fortune telling methods
void method1() {
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
}


void method2() {
    cout << "Method 2: An unexpected opportunity will come your way!" << endl;
}

void method3() {
    cout << "Method 3: Be patient, good things are coming your way!" << endl;
}

void method4() {
    cout << "Method 4: Embrace change, it will lead to growth!" << endl;
}

