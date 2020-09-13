#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a, b, c;
    cout << "Tim nghiem cua phuong trinh bac 2: ax2 + bx + c = 0" << endl;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    float detal = b*b - 4*a*c;
    if (detal > 0)
    {
        cout << "Phuong trinh co hai nghiem: " << endl;
        cout << "x = " << (-b + sqrt(detal)) / 2*a << endl;
        cout << "x = " << (-b - sqrt(detal)) / 2*a << endl;
    }
    else if (detal == 0)
    {
        cout << "Phuong trinh co nghiem kep: " << endl;
        cout << "x = " << -b / 2*a;
    }
    else 
    {
        cout << "Phuong trinh vo nghiem!";
    }
    return 0;
}