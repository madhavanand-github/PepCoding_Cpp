#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 0;
    while (n)
    {
        n/=10;
        count++;
    }
    cout<<count;
    return 0;
}