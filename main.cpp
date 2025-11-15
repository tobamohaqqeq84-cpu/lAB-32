//Toba Mohaqqeq
//COMSC-210
//lab-32

#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "Car.h"
using namespace std;

int main(){
    const int INITAL_CARS = 2;
    const int PAY_PROBABILITY = 55;  //55% PAY

    srand(time(0));
    deque <Car> lane;

    for(int i=0; i< INITAL_CARS; ++i){
        lane.push_back(Car());
    }

    cout << "Initial queue:" << endl;
    if (lane.empty()){
        cout << "The queue is empty." << endl;
    } else {
        for (const Car& c : lane){
            c.print();
        }
    }
    cout << endl;

    int timeStep = 0;

    while (!lane.empty()){
        ++timeStep;

        int roll = rand () % 100;
        
        if (roll < PAY_PROBABILITY){
            Car paying = lane.front(); // car at front pays

        cout << "Time: " << timeStep << "operttion: Car paid: [" << paying.getYear() << " " << paying.getMake() << " (" << paying.getModel() << ")]" << endl; 
             lane.pop_front();  
        } else{
            Car newCar;

            cout 
        }
    }
}

