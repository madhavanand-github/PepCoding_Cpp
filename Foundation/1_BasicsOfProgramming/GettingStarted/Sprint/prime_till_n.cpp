#include<iostream>
using namespace std;

bool isPrime(int num){
    
    for (int i = 2; i*i <= num; i++)
        if (num%i==0)
            return false;
    
    return true;

}

int main(){

    int low, high;
    cin>>low>>high; // both inclusive

    for (int i = low; i <= high; i++)
        if (isPrime(i))
            cout<<i<<endl;

    return 0;
}