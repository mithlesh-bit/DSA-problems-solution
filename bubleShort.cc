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

int n=1;
    while (n<a)
    {
        // for (int i = 0; i < a-1; i++)
        // {
            for (int i = 0; i < a-n; i++)
            {
                if (arr[i]>arr[i+1])
                {
                    int temp=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=temp;

                }
                
             }
            n++;
            
        
        
    }
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
}
    
