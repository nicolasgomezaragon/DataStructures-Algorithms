#include<iostream>

class Counter {
    public:
        Counter();
        int getCount();
        void increaseBy(int x);
    private:
        int count;    

    Counter::Counter()
        {count = 0; }
    int Counter::getCount()
        {return count;}
    void Counter::increaseBy(int x)
        {count += x; }
}

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

class Passenger {
    public:
        Passenger();
        bool isFrequentFlyer() const;

        void makeFrequentFlyer(const string& newFreqFlyerNum);
    private:
        string name; 
        MealType mealPref; 
        bool isFreqFlyer; 
        string freqFlyerNo; 
    
}

bool Passenger::isFrequentFlyer() const{
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqFlyerNum){
    isFreqFlyer = true;
    FreqFlyerNum = newFreqFlyerNum;
}


int main(){
    Counter ctr;

    cout << ctr.getCount << endl;

    ctr.increaseBy(3);
    cout << ctr.getCount << endl;

    ctr.increaseBy(-4);
    cout << ctr.getCount << endl;



    return 0;
}