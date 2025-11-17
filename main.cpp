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
    const int Num_lane = 4;
    const int MAX_TIME_STEPS = 20;
    const int JOIN_PROB = 15;

    srand(time(0));  //makes rendom number
    
    deque<Car> lanes[Num_lane];

    //add the fist 2 cars to the line
    for(int i = 0; i < Num_lane; ++i){
        for(int j = 0; j < INITIAL_CARS; ++j){
        lanes[i].push_back(Car()); //creates a new car and adds it to the back of the line
    }
    }
    //prints the starting line of cars
    cout << "Initial queue:" << endl;
    for (int i =0; i < Num_lane; ++i){
        cout << "Lane " << (i + 1) << ":" << endl;

        if (lanes[i].empty()){
            cout << "Empty." << endl;}
        else {
            for (int k = 0; k < (int)lanes[i].size(); ++k){
                cout << "   ";
                lanes[i][k].print();
            }
    }}
    cout << endl;

    for (int timeStep = 1; timeStep <= MAX_TIME_STEPS; ++timeStep)
        cout << "Time: " << timeStep << endl;
    for (int i = 0; i < Num_lane; ++i){
        cout << "Lane " << (i + 1) << " ";
        if (lanes[i].empty()){
            int rollEmpty = rand () % 100;

            if (rollEmpty < JOIN_PROB){
                Car newCar;
                cout << "Joined: ";
                newcomer.print();
                lanes[i].push_back(newCar);
            } else {
                cout
            }
            }
            
        }
        
    }
    if (lane.empty()){
        cout << "Empty." << endl;
    } else {
       for(Car& c : lane){
            c.print();
        }
    }
    cout << endl;

    int timeStep = 0; //keeps track of time steps

   for(int timeStep =1; timeStep <= 20; ++timeStep ){
        

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
            cout << "Time: " << timeStep << " Operation: Joined Lane:  " << (i + 1)<< " ";
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

