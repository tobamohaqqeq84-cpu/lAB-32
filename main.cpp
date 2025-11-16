//Toba Mohaqqeq
//COMSC-210
//lab-32

#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "Car.h" // Include the Car class header file
using namespace std;

int main(){
    const int INITIAL_CARS = 2; //starts with 2 cars
    const int PAY_PROBABILITY = 55;  //55% chance of paying
    const int Num_lanes = 4;

    srand(time(0));  //makes rendom number
    
    deque<Car> lanes[Num_lanes];

    //add the fist 2 cars to the line
    for(int i = 0; i < INITIAL_CARS; ++i){
        lane.push_back(Car()); //creates a new car and adds it to the back of the line
    }

    //prints the starting line of cars
    cout << "Initial queue:" << endl;
    if (lane.empty()){
        cout << "Empty." << endl;
    } else {
       for(Car& c : lane){
            c.print();
        }
    }
    cout << endl;

    int timeStep = 0; //keeps track of time steps

    while (!lane.empty()){
        ++timeStep; //moves to the next time step

        int roll = rand () % 100;

        //checks if the front car pays
        if (roll < PAY_PROBABILITY){

            //car pays and leaves the line
        cout << "Time: " << timeStep << " operation: Car paid: ";
            lane.front().print();
             lane.pop_front();  
        } else{
            
            Car newCar;

            //car does not pay and joins the back of the line
            cout << "Time: " << timeStep << " Operation: Joined Lane:  ";
             newCar.print();
             lane.push_back(newCar);
        }
        //prints the current state of the line
        cout << "Queue:" << endl;
        if (lane.empty()){
            cout << "Empty." << endl;
        }else{
            for ( Car& c : lane){ //prints each car in the line
                c.print();
            }
        }
        cout << endl; 
    }
    return 0;
}

