//import library
#include <iostream>
#include <string>
#include "Product.cpp"

//using standar namespace
using namespace std;

class Clothing : public Product{ //class Clothing

    //Private attributes
    private:
        string size; 
        string material;        
        string gender;
        
    //public methods
    public:
        Clothing(){
            this->size = "";
            this->material = "";
            this->gender = "";
        }

        Clothing(string size, string material, string gender){
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        string get_size() { return size; }
        string get_material() { return material; }
        string get_gender() { return gender; }

        void set_size(string size) {
        this->size = size; 
        }
        void set_material(string material) {
        this->material = material; 
        }
        void set_gender(string gender) {
        this->gender = gender; 
        }

        //destractor
        ~Clothing(){
            
        }
};