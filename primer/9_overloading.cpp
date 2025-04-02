#include<iostream>

using namespace std;


int main(){
    

    enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

    struct Passenger {
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        int FreqFlyerNum;
    }

    Passenger JMG = {"Jose Gomez", VEGETARIAN, true, 51713045};
    cout << JMG.name << endl;
    cout << JMG.mealPref << endl;
    cout << JMG.isFreqFlyer << endl;
    cout << JMG.FreqFlyerNum << endl;


    void print(int x)
        {cout << x;}

    void print(const Passenger& pass){
        cout << pass.name << " " << pass.mealPref;
        if(pass.isFreqFlyer)
            cout << " "<< pass.freqFlyerNum;
    }

    return 0; 
}