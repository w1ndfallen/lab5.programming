#include <iostream>
#include <cmath>

using namespace std;

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cout << "Enter the lengths of the triangle's sides a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double area = triangleArea(a, b, c);
        cout << "Area of ​​a triangle: " << area << endl;
    } else {
        cout << "The given sides do not form a triangle." << endl;
    }

    return 0;
}
