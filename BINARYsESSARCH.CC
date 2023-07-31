#include <iostream>
// #include <math.h>
using namespace std;

int fin(int arr[], int a, int find)
{
    int s = 0;
    int e = a;
    // cout<<a<<find<<arr[5];

    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (arr[mid] == find)
        {
        
            return mid;
        }
        else if (arr[mid] > find)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a;
    cin >> a;
    int find;
    int i;
    int arr[a];
    cout << "give a arr";

    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "give a number to find";
    cin >> find;

    cout << fin(arr, a, find);
}