#include <iostream>
using namespace std;

int a, b, toysmoney, age, total;
float washingmoney;
int money = 10;

main()
{

    cout << "enter your age: ";
    cin >> age;
    cout << "enter money required to buy washing machine: ";
    cin >> washingmoney;
    cout << "enter money that you gain after selling your toys: ";
    cin >> toysmoney;

    for (int i = 0; i <= age; i = i + 2)
    {
        if (i >= 2 && i % 2 == 0)
        {
            money = money + 10;
            b=money+b;
           
        }
    }
    

    for (int j = 1; j <= age; j = j + 2)
    {
        a++;
    }
   
    total = (a * toysmoney) + (b);
   
    if(total>washingmoney)
    {
        cout<<"Yes! You can Buy the Washing Machine"<<endl;
    }
    if (total<washingmoney)
    {
        cout<<"No! You cannot Buy the Washing Machine"<<endl;
    }
    
}