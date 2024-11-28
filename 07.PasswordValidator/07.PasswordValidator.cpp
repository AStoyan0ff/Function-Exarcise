#include <iostream>
#include <cctype>
#include <string>
using namespace std;

static void validatePassword(const string& password) {
    bool isValid = true;
        
    if (password.size() < 6 || password.size() > 10) {
        cout << "Password must be between 6 and 10 characters" << endl;
        cout << "Password must have at least 2 digits" << endl;
        isValid = false;
       
    }
        
    bool onlyLettersAndDigits = true;
    int digitCount = 0;
    
    for (char ch : password) {
        if (!isalnum(ch)) {
            onlyLettersAndDigits = false;
        }
        if (isdigit(ch)) {
            digitCount++;
        }
    }

    if (!onlyLettersAndDigits) {
        cout << "Password must consist only of letters and digits" << endl;
        cout << "Password must have at least 2 digits" << endl;
        isValid = false;
    }
       
    if (digitCount < 2) {
       
        isValid = false;
    }
       
    if (isValid) {
        cout << "Password is valid" << endl;
    }
}


int main() {
    
    string password;
    cin.ignore();
    getline(cin, password);

    validatePassword(password);
          
    return 0;
}
