#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j<i-1)
            {
            cout<<" ";
                /* code */
            }else{
            cout<<"*";

            }
            
        }
        cout<<endl;
        
    }
    
}