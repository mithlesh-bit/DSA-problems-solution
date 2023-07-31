#include <iostream>
using namespace std;

// use to find gretest common diviser of two number

int find(int x,int y){


    while (y!=0)
    {
int temp=x%y;
x=y;
y=temp;
    }
    
    return x;
}


int main(){
    int a,b;
    cin>>a>>b;
cout<<find(a,b)<<endl;


cout<<42%24<<endl;
cout<<24%42;
    
}