#include<iostream>
using namespace std;

int main(){

    // Do-While is hardly used
    int n; 
    cin>>n;
    while (n){
        cout<<"* ";
        n--;
    }

    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
        cout<<"* ";
    
    return 0;
}