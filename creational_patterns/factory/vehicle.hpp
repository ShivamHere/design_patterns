#ifndef vehicle_hpp
#define vehicle_hpp

class Vehicle{
    public:
        virtual void createVehicle() = 0;   
        /*
            This is an example of pure virtual function or abstract class, 
            for them we must override that function in the derived class, 
            otherwise the derived class will also become abstract class.

            We can't create object of abstract classes.
        */
};

#endif