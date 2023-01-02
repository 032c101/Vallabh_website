#include<iostream>
#include<iomanip>
using namespace std;

 int main()
 {
      string name,prn,dep;

      cout<<"Enter Your Name:";
      getline(cin,name);

      cout<<"Enter Your PRN:";
      getline(cin,prn);

    cout<<"Enter Your Department:";
    getline(cin,dep);

    cout<<"name:\n"<<setw(20)<<name<<endl;
    cout<<"PRN:\n"<<setw(20)<<prn<<endl;
    cout<<"Department:\n"<<setw(20)<<dep<<endl;

    return 0;
      
      
 }