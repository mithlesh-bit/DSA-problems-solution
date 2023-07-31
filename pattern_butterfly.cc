#include<iostream>
using namespace std;

 int  main(){

     int a;
     cin>>a;
     int c=1;

     for (int i = 1; i <=a; i++)
     {
        for (int j = 1; j <=2*i; j++)
        {
            cout<<"*";

            if (j==i)
            {
                int n=2*4-2*i;
               for (int k = 1; k <=n; k++)
            {
                cout<<" ";
            }
                
            }
            
        }
        cout<<endl;
     }
     for (int i = a; i >=1; i--)
     {
        for (int j = 2*i; j >=1; j--)
        {
            cout<<"*";

            if (j==i)
            {
                int n=2*4-2*i;
               for (int k = 1; k <=n; k++)
            {
                cout<<" ";
            }
                
            }
            
        }
        cout<<endl;
     }
     

 }
