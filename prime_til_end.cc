#include <iostream>
using namespace std;

int main()
{
    int a, z;
    cout << "enter a number";
    cin >> a;

    if (a <= 2)
    {
        cout << 1 << "\n";
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
        cout << 2 << "\n";
        for (int i = 3; i <= a; i++)
        {
            int result;
            for (int z = 2; z <= i / 2; )
            {
                result = i % z;
                if (result==0)
                {
                  break;  
                }
                else{
                    z=z+1;
                }  
            }
                if (result==0)
                {     
                }
                else{
                   cout<<i  <<"\n";
                }
        }
    }
}