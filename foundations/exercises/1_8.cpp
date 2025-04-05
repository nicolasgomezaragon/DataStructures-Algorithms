#include<iostream>

using namespace std;

bool isMultiple(long n, long m){
    return n%m;
}

int main(){
    bool val;
    
    val = isMultiple();

    if(val){
        cout << "n is multiple of m" << endl
    } else {
        cout << "n isn't multiple of m" << endl
    };

    return 0;
}