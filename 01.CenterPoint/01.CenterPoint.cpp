#include <iostream>
#include <cmath>
using namespace std;

// ������� �� ����������� �� ������������ �� ����� �� ������� (0, 0)
static double distanceToCenter(double x, double y) {
    return sqrt(x * x + y * y);
}

// ������� �� �������� �� �������, ���-������ �� �������
static void printClosestToCenter(double x1, double y1, double x2, double y2) {
    
    double distance1 = distanceToCenter(x1, y1);
    double distance2 = distanceToCenter(x2, y2);

    if (distance1 < distance2) {
        cout << "(" << x1 << ", " << y1 << ")" << endl;
    }
    else {
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }
}

int main() {
    
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
        
    // ��������� �� ���������, ����� ��������� �������, ���-������ �� �������
    printClosestToCenter(x1, y1, x2, y2);

    return 0;
}
