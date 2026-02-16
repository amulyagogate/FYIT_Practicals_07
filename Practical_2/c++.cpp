#include <iostream>
#include <cmath>
 
using namespace std;
 
class Demo {
private:
    int num;
 
    
    void readNo() {
        cout << "Enter a number: ";
        cin >> num;
    }
 
public:
 
    void factorial() {
        readNo(); // Calling private method
        long long fact = 1;
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
 
   
    void reverseNo() {
        readNo();
        int temp = num, reversed = 0;
        while (temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }
        cout << "Reverse of " << num << " is: " << reversed << endl;
    }
 
   
    void isPalindrome() {
        readNo();
        int temp = num, reversed = 0, remainder;
        while (temp > 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
        }
        if (num == reversed)
            cout << num << " is a Palindrome." << endl;
        else
            cout << num << " is not a Palindrome." << endl;
    }
 
    
    void isArmstrong() {
        readNo();
        int temp = num, sum = 0, digits = 0;
        
       
        int n = num;
        while (n > 0) {
            n /= 10;
            digits++;
        }
 
        temp = num;
        while (temp > 0) {
            int lastDigit = temp % 10;
            sum += pow(lastDigit, digits);
            temp /= 10;
        }
 
        if (sum == num)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is not an Armstrong number." << endl;
    }
};
 
int main() {
    Demo obj;
    int choice;
 
    do {
        cout << "\n--- Demo Class Menu ---" << endl;
        cout << "1. Factorial\n2. Reverse Number\n3. Check Palindrome\n4. Check Armstrong\n5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
 
        switch (choice) {
            case 1: obj.factorial(); break;
            case 2: obj.reverseNo(); break;
            case 3: obj.isPalindrome(); break;
            case 4: obj.isArmstrong(); break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
 
    return 0;
}
