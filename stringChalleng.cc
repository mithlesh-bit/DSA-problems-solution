#include <iostream>
using namespace std;

int main(){
    string s="jhdsujlbvds";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
            /* code */
        }
        
        /* code */
    }
        cout<<s;
    
    
}
