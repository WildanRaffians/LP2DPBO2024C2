//import library
#include <iostream>
#include <string>

//using standar namespace
using namespace std;

class Product{ //class Product

    //Private attributes
    private:
        string idProduct; 
        string name;        
        string brand;
        int price;

        

    //public methods
    public:
        Product(){
            this->idProduct = "";
            this->name = "";
            this->brand = "";
            this->price = 0;
        }

        Product(string idProduct, string name, string brand, int price){
            this->idProduct = idProduct;
            this->name = name;
            this->brand = brand;
            this->price = price;
        }

        string get_idProduct() { return idProduct; }
        string get_name() { return name; }
        string get_brand() { return brand; }
        int get_price() { return price; }

        void set_idProduct(string idProduct) {
        this->idProduct = idProduct; 
        }
        void set_name(string name) {
        this->name = name; 
        }
        void set_brand(string brand) {
        this->brand = brand; 
        }
        void set_price(int price) {
        this->price = price; 
        }


        //destractor
        ~Product(){
            
        }
};