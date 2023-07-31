#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int c = 1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            int e=i+j;
            int z=e%2;
            if (z==0)
            {
                /* code */
                cout<<"1 ";

            }else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
}