//import library
#include <iostream>
#include <string>
#include "Clothing.cpp"

//using standar namespace
using namespace std;

class Shirt : public Clothing{ //class Shirt

    //Private attributes
    private:
        string color; 
        string sleeve_type;
        
    //public methods
    public:
        Shirt(){
            this->color = "";
            this->sleeve_type = "";
        }

        Shirt(string color, string sleeve_type){
            this->color = color;
            this->sleeve_type = sleeve_type;
        }

        string get_color() { return color; }
        string get_sleeve_type() { return sleeve_type; }

        void set_color(string color) {
        this->color = color; 
        }
        void set_sleeve_type(string sleeve_type) {
        this->sleeve_type = sleeve_type; 
        }

        //destractor
        ~Shirt(){
            
        }
};