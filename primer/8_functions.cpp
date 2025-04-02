#include<iostream>

using namespace std;

// Summing all of nums within an array until we get an even value
bool evenSum(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return (sum % 2) == 0;
}

int main(){
    int nums[] = {1,2,4,3};
    
    bool result = evenSum(nums, 4);

    if(result) cout << "The sum is even!" << endl;
    else       cout << "The sum is oddd!" << endl;
    
    return EXIT_SUCCESS; 
}