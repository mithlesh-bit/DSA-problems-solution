#include <iostream>
using namespace std;


int main(){
    int m,n;
    cout<<"enter array size";
    cin>>n;
    cin>>m;

    int arr[n][m];
    cout<<"enter element";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
        
    }
cout<<"arrIS"<<endl;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


int find;
cout<<"enter element to find";
cin>>find;


int r=0,c=m-1;

while (r<n and c>=0)
{
    if(arr[r][c]==find){

    cout<<"at potision"<<r<<c;
    break;
    }else if(arr[r][c]<find){

        r++;

    }else if(arr[r][c]>find){
        c--;
    }else{
        cout<<"not found";
    }
}








}