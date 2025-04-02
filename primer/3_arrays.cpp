#include<iostream>

using namspace std;

int main(){
    double f[5];
    int m[10] = {1,2,3,4,5};

    int a[ ] = {10, 11, 12, 13}; 
    bool b[ ] = {false, true}; 

    char c[ ] = {'c', 'a', 't'};
    char* p = c; // p points to c[0]
    char* q = &c[0]; // q also points to c[0]
    cout << c[2] << p[2] << q[2]; // outputs “ttt”
    return 0;
}