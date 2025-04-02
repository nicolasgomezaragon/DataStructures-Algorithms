#include<iostream>

using namespace std;

int main(){
    string author = "Jose Gomez";
    string& penName = author;
    cout << author << endl;
    penName = "Isaura Aragon";
    cout << author << endl;
    return 0;
}