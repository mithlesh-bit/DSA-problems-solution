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


int Rstart=0,Rend=n-1,Cstart=0,Cend=m-1;


     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
if (i>Rstart && i<Rend)
{
    if (j==0  )
    {
    cout<<arr[i][Cstart];
    
    
        
    }else if(j==Cend){
    cout<<arr[i][Cend]<<" ";

    }
    


}else{
          cout<<arr[i][j]<<" ";

}

        }
        cout<<endl;
    }


}