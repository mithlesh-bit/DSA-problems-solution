#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int c = 1;

    for (int i = 1; i <= a; i++)
    {
        for (int z = 1; z <= a - i; z++)
            {
                cout <<" ";
            }

        for (int j = 1; j <= a; j++)
        {
            
            cout << "*  ";
        }
        cout << endl;
    }
}