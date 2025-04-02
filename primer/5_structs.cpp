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

    JMG.name = "Jose Miguel Gomez";
    cout << "Name changed: " >> JMG.name << endl;


    Passenger *IAR;
    IAR = new Passenger;
    IAR -> name = "Isaura Aragon";
    IAR -> mealPref = LOW_FAT;
    IAR -> isFreqFlyer = false;
    IAR -> freqFlyerNum = 51713045;

    cout << IAR.name << endl;
    cout << IAR.mealPref << endl;
    cout << IAR.isFreqFlyer << endl;
    cout << IAR.FreqFlyerNum << endl;

    delete IAR;

    char* buffer = new char[500];
    buffer[3] = 'a';
    delete [] buffer;

    return 0; 
}