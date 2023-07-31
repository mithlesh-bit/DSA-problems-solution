#include <iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){


// str.size()   usae to determide the size of the string

    // ---------->>>string 3type declareation   <<<<<--------------

// string str;        1111111111111
// cin>>str;
// cout<<str;

// string str(10,'N');   22222222222
// cout<<str;

// string str2="jdfjbcd";    33333333
// cout<<str2;

// string str3;           ------->>> space wala string ke liye yye sahi hai <<<---------
// getline(cin,str3);
// cout<<str3;


// ---------->>>> joinin string -------->> 

// string str4="ristedar",str5="madarchod";

// str4.append(str5);
// cout<<str4<<endl;

// cout<<str4+str5;

// -------->>>>>> use indexing to access the element------?>>>>>>

// %%%%%%%%   compare string        $$$$$$$$$$$

string s1="abc",s2="ABC";
// cout<<s1.compare(s2);
// if(!s1.compare(s2)){     ----->> ==0
//     cout<< "sahi hai banchod";
// }else if(s1.compare(s2)){  --------->> ==1
//     cout<<" one of them is in capital letter";
// }


// s1.empty()==1 -> string is empty


// string ss="abcdefghijkl";    ************ to delete the element  use erase()************
// ss.erase(2,4);
// cout<<ss;


string ss="abcdefghijkl";


// ************   sub string find *********

    // string s6="abcdefghi";
    // cout<<s6.find("bcd");      its give starting index of sub string;
    // cout<<s6.substr(1,4)       its print "bcde"

//    ******** insert in string  *********
    //    string s7(10,'a');
    //    cout<<s7<<endl;
    //    s7.insert(5,"lol");
    //    cout<<s7<<endl;


// ******************   string to integer  **********
// string s8="123";
//  int x= stoi(s8);
//  cout<<x+200;

// ***************   int to string   ***********
// int x=152;
// cout<<to_string(x)<<endl;


// ****************** sort string************

string s9="cxbdsiuvjdfvljd";
sort(s9.begin(),s9.end());
cout<<s9;




}