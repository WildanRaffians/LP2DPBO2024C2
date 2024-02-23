#kelas Clothing anak dari kelas product

from Product import Product 

class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ""

    #constructor
    def __init__(self, idProduct, name, brand, price, size, material, gender):
        super().__init__(idProduct, name, brand, price)
        self.__size = size
        self.__material = material
        self.__gender = gender

    # Getter dan Setter untuk size
    def get_size(self):
        return self.__size

    def set_size(self, size):
        self.__size = size

    # Getter dan Setter untuk material
    def get_material(self):
        return self.__material

    def set_material(self, material):
        self.__material = material

    # Getter dan Setter untuk gender
    def get_gender(self):
        return self.__gender

    def set_gender(self, gender):
        self.__gender = gender