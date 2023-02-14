#include "factory_vehicle.hpp"

int main(){
    //This design pattern decouples main file from any addition or deletion of vehicles.
    string vehicleType;
    cin>>vehicleType;

    //recommended way to access static function/variables instead initializing object and calling them.
    Vehicle* vehicle = FactoryVehicle::getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
    /*
        Step to compile and execute
        1. make object files: g++ -c bike.cpp car.cpp factory_vehicle.cpp
        2. make library file: ar ru factory_lib.a bike.o car.o factory_vehicle.o
        3. make executable file: g++ -o main main.cpp factory_lib.a
    */
    
}