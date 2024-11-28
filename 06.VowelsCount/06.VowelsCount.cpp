#include <iostream>
#include <string>
using namespace std;

static int countVowels(const string& text) {
    int count = 0;
    string vowels = "aeiouyAEIOUY"; 

    for (char c : text) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }

    return count;
}

int main() {
   
    string text;
    cin >> text; 

    int vowelCount = countVowels(text); 
    cout << vowelCount << endl; 

    return 0;
}
