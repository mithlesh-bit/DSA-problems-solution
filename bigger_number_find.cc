#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter number";
    cin>>a>>b>>c;

    if(a>b){
        if (a>c)
        {
            cout<<a<<"is the max value";
        }else{
            cout<<c<<"is the max value";
        }
        
    }else if (b>a)
    {
         if (b>c)
        {
            cout<<b<<"is the max value";
        }else{
            cout<<c<<"is the max value";
        }
       
    }
    else{
                    cout<<c<<"is the max value";

         
    }
    

}