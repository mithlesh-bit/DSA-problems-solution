#include<iostream>
using namespace std;

int main(){
    // int a;
    // cout<<"enter a number  ";
    // cin>>a;

    for (int i = 0; i < 5; i++)
    {
       if (i==0 || i==4)
       {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            cout<<"* ";
        }
       }else{
        for (int k = 0; k < 2; k++)
        {
            cout<<"*     ";
        }
       }
       
        cout<<"\n";
        
    }
    
}