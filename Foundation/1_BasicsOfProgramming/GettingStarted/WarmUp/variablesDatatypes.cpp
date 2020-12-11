#include<iostream>
using namespace std;

int main(){

    // Just like in maths we use, let x = 10
    // ;) computer can store more than just numbers
    // Always remember {datatype} {variable_Name} = {value};
    int x = 10;

    //Techincally, Memory of int type with 'x' as a name is declared in RAM

    int y = 20;
    int z = x + y;
    cout<<"z"<<endl;//"" print as it is
    cout<<z<<endl; // print it's value

    //Overview of Data-types

    // 1. Integer Values: Small or Big Values
    int smallNumber = 5;
    long largeNumber = 1000;

    // 2. Decimal Values: Less or More Precision
    float smallDecimals = 5.1;
    double largeDecimals = 5.22;

    // 3. Boolean: True/False
    bool examPassed = true;

    // 4. Character: Single Letter in 'this'
    char letter = 'A';

    // 5. String: Multiple Letters in "this"
    string name = "Microsoft GitHub";

    int garbage; // This is called declaration
    cout<<garbage<<endl;
    garbage = 10; // This is called initialization
    cout<<garbage;

    // Recall: Chrome Browser Example ___IMP___ 

    return 0;
}