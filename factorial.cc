#include <iostream>
using namespace std;

int fact(int x){
    if (x==1)
    {
        return 1;
    }

    int temp=x*fact(x-1);
    return temp;
    
}

int main(){
int a;
cin>>a;
cout<<fact(a);

}