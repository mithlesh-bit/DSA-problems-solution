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


    
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            /* code */
            if (arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
    cout<<"shortest array";
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
}

