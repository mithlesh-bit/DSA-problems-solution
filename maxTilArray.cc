#include <iostream>
using namespace std;


int main(){
    int a;
    cout<<"enter array size";
    cin>>a;

    int arr[a];
    cout<<"enter element";

    for (int i = 0; i < a; i++)
    {
      cin>>arr[i];
    }

int mx=-2;
    for (int i = 0; i < a; i++)
    {
         mx=max(mx,arr[i]);
        
     cout<<mx<<endl;
    }
    
}