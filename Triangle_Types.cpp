#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double arr[3] = {a, b, c};
    sort(arr, arr + 3);
    a = arr[2];
    b = arr[1];
    c = arr[0];
    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (a * a == (b * b + c * c))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if (a * a > (b * b + c * c))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else if (a * a < (b * b + c * c))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if ((a == b) || (a == c) || (b == c))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}