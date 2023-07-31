#include <iostream>
using namespace std;

int main()
{
    // prime c

    int i = 2;
    int userEnter;
    cout << "enter a number";
    cin >> userEnter;

    if (userEnter <= i)
    {
        cout << "prime true";
    }
    else
    {

        for (i = 2; i < userEnter; i++)
        {
            int result = userEnter % i;
            if (result == 0)
            {
                 cout << "prime false";
                break;
            }
            
            else
            {
                cout << "prime true";
                break;
            }
        }
    }
}