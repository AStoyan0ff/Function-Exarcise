#include <iostream>
#include <vector>
using namespace std;

static string getUnits(int u) {
    vector<string> units = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    return units[u];
}

static string getTeens(int u) {
    vector<string> teens = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    return teens[u];
}

static string getTens(int t) {
    vector<string> tens = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    return tens[t];
}

static string getHundreds(int h) {
    vector<string> hundreds = { "", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred",
                                "six hundred", "seven hundred", "eight hundred", "nine hundred" };
    return hundreds[h];
}

static string getThousands(int th) {
    vector<string> thousands = { "", "one thousand", "two thousand", "three thousand", "four thousand",
                                 "five thousand", "six thousand", "seven thousand", "eight thousand", "nine thousand" };
    return thousands[th];
}

static string convertToWords(int number) {
    if (number == 0) return "zero";  // Специален случай за числото 0

    string result = "";
    int th = number / 1000;         // Хиляди
    int h = (number / 100) % 10;    // Стотици
    int t = (number / 10) % 10;     // Десетици
    int u = number % 10;            // Единици

    if (th > 0) result += getThousands(th);
    if (h > 0) {
        if (!result.empty()) result += " ";
        result += getHundreds(h);
    }

    if (t > 1) {
        if (!result.empty()) result += " ";
        result += getTens(t);
        if (u > 0) result += " " + getUnits(u);
    }
    else if (t == 1) {
        if (!result.empty()) result += " ";
        result += getTeens(u);
    }
    else if (u > 0) {
        if (!result.empty()) result += " ";
        result += getUnits(u);
    }

    return result;
}

int main() {
    int number;
    cin >> number;

    if (number < 0 || number > 9999) {
        
    }
    else {
        cout << convertToWords(number) << endl;
    }

    return 0;
}
