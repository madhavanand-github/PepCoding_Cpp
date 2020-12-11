#include<iostream>
using namespace std;

// Print Fibonacci(fee-bo-na-chi) Numbers till "n"

/*
Steps
1. What is Fibonacci Numbers ?
# Fibonacci is sequence, not a series.
*/

int main(){

    int n;
    cin>>n;

    int a=0, b=1;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        int c = a+b;
        a=b;
        b=c;
    }   
    

    return 0;
}