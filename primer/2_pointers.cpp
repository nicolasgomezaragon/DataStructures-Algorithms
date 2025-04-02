#include<iostream>

using namespace std;

int main (){
    char ch = 'Q';
    char* p = &ch; 

    cout << *p << endl;

    ch = 'Z';
    cout << *p;

    *p = 'X';
    cout << ch;

    return 0; 
}