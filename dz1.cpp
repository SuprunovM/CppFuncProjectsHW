//#include <iostream>
//using namespace std;
//int main()
//{
//    float r;
//    cout << "r circle: ";
//    cin >> r;
//
//    cout << "S circle: " << r * r * 3.14 << "\n";
//
//    cout << "Circumference: " << r * 6.28 << "\n";
//
//    cout << "Circle diameter: " << r * 2 << "\n";
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    float a, b, c, d;
//    cout << "Student grade for 1st quarter: ";
//    cin >> a;
//    cout << "Student grade for 1st quarter: ";
//    cin >> b;
//    cout << "Student grade for 1st quarter: ";
//    cin >> c;
//    cout << "Student grade for 1st quarter: ";
//    cin >> d;
//    cout << "Student's assessment for the year: " << round((a + b + c + d) / 4);
//
//}


﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float zp1, zp2, zp3;
    cout << "Зарплата за 1-й месяц = ";
    cin >> zp1;
    cout << "Зарплата за 2-й месяц = ";
    cin >> zp2;
    cout << "Зарплата за 3-й месяц = ";
    cin >> zp3;
    cout << "Зарплата за квартал " << zp1 + zp2 + zp3;

}