#include <iostream>
#include <iomanip>
using namespace std;

static unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    
    int num1, num2;       
    cin >> num1 >> num2;
       
    unsigned long long fact1 = factorial(num1);  
    unsigned long long fact2 = factorial(num2);
       
    double result = (double)fact1 / fact2;
    cout << setprecision(2) << fixed << result << endl;

    return 0;
}
