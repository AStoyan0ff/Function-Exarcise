#include <iostream>
#include <cctype>
#include <string>
using namespace std;

static void getPassword(string& password) {
    
    bool numError = false;
    bool sizeError = false;
    
    int passwordLenght = password.size();
    int digitCount = 0;
    
    if (passwordLenght < 6 or passwordLenght > 10) sizeError = true;
    for (char ch : password) {
        if (!isalnum(ch)) {
            numError = true;
        }

        if (isdigit(ch)) {
            digitCount++;
        }
    }
    
    if (digitCount >= 2 && !numError && !sizeError) {
        cout << "Password is valid" << endl;
    }

    if (sizeError) {
        cout << "Password must be between 6 and 10 characters" << endl;
    }
    if (numError) {
        cout << "Password must consist only of letters and digits" << endl;
    }
    if (digitCount < 2) {
        cout << "Password must have at least 2 digits" << endl;
    }
}

int main() {
    
    string password;
    cin >> password;
    
    getPassword(password);
}
