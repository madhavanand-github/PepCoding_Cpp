#include<iostream>
using namespace std;

// Check whether a number is prime or not

void primeTest(int num){

    bool flag=1;
    for (int i = 2; i < num; i++)
        if (num%i==0)
        {
            flag = 0;
            break;
        }
    
    if (flag)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;

}

int main(){

    int t;
    cin>>t;
    
    while (t)
    {
        int num;
        cin>>num;
        primeTest(num);
        t--;
    }

    return 0;
}