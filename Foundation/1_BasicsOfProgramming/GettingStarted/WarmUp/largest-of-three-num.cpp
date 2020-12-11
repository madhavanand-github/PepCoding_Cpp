#include<iostream>
using namespace std;

int main(){

    // x, y, z all three are distinct numbers
    int x, y, z;
    cin>>x>>y>>z;

    if (x>y && x>z)
            cout<<"Greated of three "<<x<<endl;
    else if (y>z)
        cout<<"Greated of three "<<y<<endl;
    else 
        cout<<"Greated of three "<<z<<endl;
    
        
    
        
}