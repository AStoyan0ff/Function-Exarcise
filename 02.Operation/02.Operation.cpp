#include <iostream>
using namespace std;

// Основни  операции ( + - * / )
static int add(int a, int b) { // събираме
    return a + b;
}

static int subtract(int a, int b) { // изваждаме
    return a - b;
}

static int multiply(int a, int b) { // умножаваме
    return a * b;
}

static double divide(int a, int b) { // делим
    
    if (b == 0) { // Проверка на деление за да избегнем евентуална грешка...
       
        return 0;
    }
    return static_cast<double>(a) / b; // връщаме  double(а) ....
}

int main() {
    
    int numberOne, numberTwo;
    char operation;
        
    cin >> numberOne >> numberTwo;
    cin >> operation;
       
    switch (operation) {  // Извършваме операцията според символа (май не беше най-добрия вариант) =)
    case '+':
        cout << add(numberOne, numberTwo) << endl;
        break;
    case '-':
        cout << subtract(numberOne, numberTwo) << endl;
        break;
    case '*':
        cout << multiply(numberOne, numberTwo) << endl;
        break;
    case '/':
        cout << divide(numberOne, numberTwo) << endl;
        break;
    default:
        break;
    }

    return 0;

}
