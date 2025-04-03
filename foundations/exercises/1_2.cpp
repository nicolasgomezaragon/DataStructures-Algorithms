#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    cout << "Enter number of values: ";
    cin >> size;

    vector<int> values;
    values.resize(size);

    cout << "Enter " << size << " values: " << endl;
    for(int i = 0; i < size; i++){
        cin >> values[i];
    };

    int min = values[0];
    int max = values[0];

    for(int j = 0; j < size; j++){
        if(values[j] < min)
            min = values[j];
        
        if(values[j] > min)
            max = values[j];
        
    }   

    cout << "Max value is: " << max << endl; 
    cout << "Min value is: " << min << endl; 
    
    return 0;

}   