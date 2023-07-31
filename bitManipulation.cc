#include <iostream>
using namespace std;



int get(int a,int index){
    return (a & (1<<index))!=0;
}

int main(){

cout<<get(5,2);

}