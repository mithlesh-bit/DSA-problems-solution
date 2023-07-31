#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int statr_room = 1, end_room = 10, xlivein, ylivein;

    while (t--)
    {

        int x, y;
        cin >> x >> y;

        for (int i = 1; i <= 10; i++)
        {

            if (y >= statr_room && y >= end_room)
            {
                ylivein = i;
            }
            if (y >= statr_room && y >= end_room)
            {

                xlivein = i;
            }

            statr_room += 10;
            end_room += 10;
            if (end_room == 100)
            {
                break;
            }
            if (x > y)
            {

                cout << xlivein - ylivein << endl;
            }
            else
            {
                cout << ylivein - xlivein << endl;
            }
        }

        return 0;
    }
}
