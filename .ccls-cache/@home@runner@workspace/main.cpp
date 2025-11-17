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
    const int PAY_PROB = 46;

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
                cout << "No action" << endl;
            }
            }
          else {
              int roll = rand () % 100;
              if (roll < PAY_PROB){
                  cout << "Paid: ";
                   lanes[i].front().print();
                   lanes[i].pop_front();
              }
              else if (roll < PAY_PROB + JOIN_PROB){
                  Car newCar;
                  cout << "Joined: ";
                  newCar.print();
                  lanes[i].push_back(newCar);
              }
              else
                  Car switchingCar = lanes[i].back();
                  lanes[i].pop_back();
                  int newLane = i;
                  while (newLane == i){
                      newLane = rand() % Num_lane;
                  }
                cout << "Switched: ";
                switchingCar.print();
                lanes[newLane].push_back(switchingCar);
              
          }  
        }
        
    }
cout << endl;

for (int i =0; i < Num_lane; ++i){
    if (lanes[i].empty()) {
        cout << "Lane " << (i =  1)<< " Queue: Empty." << endl;}
    else{
        cout << "Lane " << (i + 1) << " Queue: " << endl;
        for (int k = 0; k < (int)lanes[i].size(); ++k){
            cout << "   ";
            lanes[i][k].print();
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

