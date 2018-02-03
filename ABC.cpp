#include <iostream>
using namespace std;


int main(){
     cerr<<"x=";
     int x;
     cin>>x;
     int y = x;
     if(x<0) y=-x;
     cerr<<"|"<<x<<"| = ";
     cout<<y<<endl;
     return 0;
}