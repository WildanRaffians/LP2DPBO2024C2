#Kelas Shirt anak dari kelas clothing

from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    #constructor
    def __init__(self, idProduct, name, brand, price, size, material, gender, color, sleeve_type):
        super().__init__(idProduct, name, brand, price, size, material, gender)
        self.__color = color
        self.__sleeve_type = sleeve_type

    # Getter dan Setter untuk color
    def get_color(self):
        return self.__color

    def set_color(self, color):
        self.__color = color

    # Getter dan Setter untuk sleeve_type
    def get_sleeve_type(self):
        return self.__sleeve_type

    def set_sleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type