#include <iostream>
using namespace std;

main()
{
    int no, number;
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float p4 = 0;
    float p5 = 0;
    
    cout << "enter a number: ";
    cin >> no;

    for (int i = 1; i <= no; i++)
    {
        cout << "enter no: ";
        cin >> number;
        

        if (number <= 200)
        {
            p1++;
        }
        if (number >= 200 && number <= 399)
        {
            p2++;
        }
        if (number >= 400 && number <= 600)
        {
            p3++;
        }
        if (number>600 && number <= 800)
        {
            p4++;
        }
        if (number > 800)
        {
            p5++;
        }
    }
    p1=(p1*100)/(no);
    cout << "p1 =" << p1 <<"%" << endl;
    p2=(p2*100)/(no);
    cout << "p2 =" << p2 <<"%" << endl;
    p3=(p3*100)/(no);
    cout << "p3 =" << p3 <<"%" << endl;
    p4=(p4*100)/(no);
    cout << "p4 =" << p4 <<"%" << endl;
    p5=(p5*100)/(no);
    cout << "p5 =" << p5 <<"%" << endl;
}