#include <iostream>
#include <cmath>
  
using namespace std;
  
 //giai phuong trinh bac 2: ax2 + bx + c = 0
 
void GiaiPhuongTrinhBac2(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo nghiem!";
        } else {
            cout << "Phuong trinh co mot nghiem: x = " << -c / b;
        }
        return;
    }
    // tinh delta
    double delta = b*b - 4*a*c;
    double x1;
    double x2;
    if (delta > 0) {
        x1 = ((-b + sqrt(delta)) / (2*a));
        x2 = ((-b - sqrt(delta)) / (2*a));
        cout << "Phuong trinh co 2 nghiem la: x1 = " << x1 << ", x2 = " << x2;
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x1;
    } else {
        cout <<"Phuong trinh vo nghiem!";
    }
}

int main() {
 float a, b, c;
    cout << "Nhap he so bac 2, a = ";
    cin >> a;
    cout << "Nhap he so bac 1, b = ";
    cin >> b;
    cout << "Nhap so hang tu do, c = ";
    cin >> c;
    GiaiPhuongTrinhBac2(a, b, c);
    return 0;
}
