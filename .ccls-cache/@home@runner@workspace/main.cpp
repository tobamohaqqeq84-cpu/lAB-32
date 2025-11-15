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
    const int INITIAL_CARS = 2;
    const int PAY_PROBABILITY = 55;  //55% PAY

    srand(time(0));
    
    deque <Car> lane;

    for(int i = 0; i < INITIAL_CARS; ++i){
        lane.push_back(Car());
    }

    cout << "Initial queue:" << endl;
    if (lane.empty()){
        cout << "Empty." << endl;
    } else {
       for(Car& c : lane){
            c.print();
        }
    }
    cout << endl;

    int timeStep = 0;

    while (!lane.empty()){
        ++timeStep;

        int roll = rand () % 100;
        
        if (roll < PAY_PROBABILITY){

        cout << "Time: " << timeStep << " operation: Car paid: ";
            lane.front().print();
             lane.pop_front();  
        } else{
            
            Car newCar;

            cout << "Time: " << timeStep << " Operation: Joined Lane:  ";
             newCar.print();
             lane.push_back(newCar);
        }
        cout << "Queue:" << endl;
        if (lane.empty()){
            cout << "Empty." << endl;
        }else{
            for ( Car& c : lane){
                c.print();
            }
        }
        cout << endl;
    }
    return 0;
}

