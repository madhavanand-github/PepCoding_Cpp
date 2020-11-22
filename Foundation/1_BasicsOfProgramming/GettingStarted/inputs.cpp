#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<n<<endl;

    string str;
    cin>>str; // cin takes input till SPACE
    cout<<str<<endl;

    cin.ignore(); //Ignores the last character
    getline(cin, str); // getline takes input till ENTER
    cout<<str<<endl;

    return 0;
}