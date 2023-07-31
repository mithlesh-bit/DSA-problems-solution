#include<iostream>
using namespace std;


void hnoi(int n, char src,char desti,char helper){

if(n==0){
    return;
}
    hnoi(n-1,src,helper,desti);
    cout<<"move "<<src<<" to "<<desti<<endl;
    hnoi(n-1,helper,desti,src);
}

int main(){
  
hnoi(3,'A','B','C');
}