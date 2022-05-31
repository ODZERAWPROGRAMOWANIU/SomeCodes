#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double calculateCevian(double &b, double &c,
                       double &n, double &m)
{
    double x = sqrt((((n * c * c) + (m * b * b)) / (m + n) - (m * n)));
    return x;
}
int main()
{
    cout << "Enter how many cevians you wanna calculate: "
         << endl;
    int amount;
    cin >> amount;
    while (amount--)
    {
        double b, c, n, m;
        cout << "Enter b, c, n, m (in this order): " << endl;
        cin >> b >> c >> n >> m;
        cout << "Cevian: " << fixed << setprecision(2)
             << calculateCevian(b, c, n, m) << endl;
    }
    return 0;
}