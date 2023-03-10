#include <iostream>
using namespace std;

main()
{
    int heritancemoney;
    int year,a;
    int total = 0;
    int age = 19;
    cout << "enter inheritance money: ";
    cin >> heritancemoney;
    cout << "enter year: ";
    cin >> year;
    year = year - 1800;

    for (int i = 0; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            total = total + 12000;
        }
        if (i % 2 != 0)
        {
            total = total + 12000 + (50 * (18 + i));
            age++;
        }
        
    }
    a=heritancemoney-total;
        
       if (a<heritancemoney)
       {
      cout<<"Yes! he will live a carefree life and will have "<< a <<" dollars left "<<endl;
       }
       if (a<13000)
       {
      cout<<"he will need "<<a<<" dollar to survive";
       }
       
       
        
}