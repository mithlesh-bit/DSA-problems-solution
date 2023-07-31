#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int a;
    cin>>a;
    int sum=0;
    int b=a;

   while (a>0)
   {
     int store=a%10;
     sum+=pow(store,3);
     
     a=a/10;

   }
   if (sum==b){
    cout<<"armstrong true";
   }else{
    cout<<"false";
   }
   
   
   
    
}