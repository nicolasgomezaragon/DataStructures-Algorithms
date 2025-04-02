#include<iostream>

using namespace std;

namespace myglobals {
    int cat;
    string dog = "wooooooooooooooof"; 
}

using namespace myglobals;

int main(){
    const double PI = 3.14159265;
    const int CUT OFF[ ] = {90, 80, 70, 60};
    const int N DAYS = 7;
    const int N HOURS = 24*N DAYS; 
    int counter[N HOURS];

    // Define a new type name
    typedef char* BufferPtr; // pointer to a char
    typedef double Coordinate; // double
    
    BufferPtr p; // pointer to a char
    Coordinate x,y; // type double

    cout << dog << endl;


    return 0;


}