#ifndef facveh_hpp
#define facveh_hpp

#include <iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class FactoryVehicle{
    public:
        static Vehicle* getVehicle(string vehicle_type);
        /*
            Static functions in a class: Just like the static data members or static variables inside the class, 
            static member functions also does not depend on object of class. 
            We are allowed to invoke a static member function using the object and the ‘.’ operator 
            but it is recommended to invoke the static members using the class name and the scope resolution operator. 
            Static member functions are allowed to access only the static data members or other static member 
            functions, they can not access the non-static data members or member functions of the class. 

            For Static Reference: https://www.geeksforgeeks.org/static-keyword-cpp/
        */
};

#endif