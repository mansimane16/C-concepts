#include<iostream>
using namespace std;

int main() {
    int a;
    a = 32;
    cout << "size of int: " << sizeof(a) << endl;
    
    
    float b = 32.34;
    cout<<"size of float"<<sizeof(b)<<endl;
    
    double d = 32.34;
    cout<<"size of double"<<sizeof(d)<<endl;
    
    int  ascii = 'b';
    cout<<"size of char "<<sizeof(ascii)<<endl;
    
    bool c = true;
    cout<<"size of boolean"<<sizeof(c)<<endl;
    
    return 0;
}
