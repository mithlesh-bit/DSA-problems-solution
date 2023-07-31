#include <iostream>
using namespace std;

int main(){
    int a;
cin>>a;
int find;
int i;
int arr[a];
cout<<"give a arr";

for ( i = 0; i < a; i++)
{
    cin>>arr[i];
}
cout<<"give a number to find";
cin>>find;

for (int i = 0; i < a; i++)
{
    if (arr[i]==find)
    {
        cout<<i+1<<"th element"<<endl;

    }
    
}






}

