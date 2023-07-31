#include<iostream>
using namespace std;

int my(int a){
int *ptr=&a;
cout<<ptr<<endl; /*printing address of a*/
cout<<*ptr<<endl; /*print value of a*/
*ptr=20;
cout<<*ptr<<endl;
ptr++;
cout<<ptr<<endl;

}


int main(){

my(10);

}