#include<iostream>
#include<string>

using std::string;

int main(){
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " +  t;
    if(s > t)
        cout << u << endl;

    int sizeU = u.size();
    cout << sizeU << endl;

    return 0;
}

