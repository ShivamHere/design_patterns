#include "factory_vehicle.hpp"

Vehicle* FactoryVehicle:: getVehicle(string vehicleType){
    Vehicle* vehicle;
    if(vehicleType == "car")     vehicle = new Car;
    else if(vehicleType == "bike")  vehicle = new Bike;
    return vehicle;
}