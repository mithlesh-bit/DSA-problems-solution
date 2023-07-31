#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int store=0;

    
while (a>0)
{
   
        int b=a%10;
    
        store=store*10+b;
    
       a=a/10;
    
}
cout<<store<<endl;




    


}