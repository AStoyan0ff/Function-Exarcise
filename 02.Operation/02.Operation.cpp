#include <iostream>
using namespace std;

// �������  �������� ( + - * / )
static int add(int a, int b) { // ��������
    return a + b;
}

static int subtract(int a, int b) { // ���������
    return a - b;
}

static int multiply(int a, int b) { // ����������
    return a * b;
}

static double divide(int a, int b) { // �����
    
    if (b == 0) { // �������� �� ������� �� �� �������� ���������� ������...
       
        return 0;
    }
    return static_cast<double>(a) / b; // �������  double(�) ....
}

int main() {
    
    int numberOne, numberTwo;
    char operation;
        
    cin >> numberOne >> numberTwo;
    cin >> operation;
       
    switch (operation) {  // ���������� ���������� ������ ������� (��� �� ���� ���-������ �������) =)
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
