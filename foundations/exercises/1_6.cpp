#include<iostream>

using namespace std; 

int main(){
    double* dp[10];

    for(int i = 0; i < 10; i++){
        dp[i] = new double;
        *dp[i] = 0.0;
        cout <<  *dp[i] << endl;
    };
    return 0;
}