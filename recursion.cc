#include <iostream>
using namespace std;

int sum(int x){
if (x==0)
{
return 0;
    /* code */
}

    int temp=sum(x-1);
    
    
    return x+temp;

}


int main(){
int a;
cin>>a;
cout<<sum(a);

}
