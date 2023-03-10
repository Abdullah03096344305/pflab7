#include <iostream>
using namespace std;
int gcd(int no1, int no2);
int main()
{
    int no1, no2;
    cout << "enter 1st number to calculate hcf: ";
    cin >> no1;
    cout << "enter 2nd number to calculate hcf: ";
    cin >> no2;
    cout<<"H.C.F = "<<gcd(no1,no2);
    return 0;
}
int gcd(int no1, int no2)
{
    if (no2 != 0)
    {
        return gcd(no2, no1 % no2);
    }
    else
    return no1;
}