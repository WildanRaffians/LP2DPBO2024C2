#Class Product

class Product:
    #Atribut
    __idProduct = ""
    __name = ""
    __brand = ""
    price = 0
    
    #constructor
    def __init__(self, idProduct, name, brand, price):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.price = price

    # Getter dan Setter untuk idProduct
    def get_idProduct(self):
        return self.__idProduct

    def set_idProduct(self, idProduct):
        self.__idProduct = idProduct

    # Getter dan Setter untuk name
    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

    # Getter dan Setter untuk brand
    def get_brand(self):
        return self.__brand

    def set_brand(self, brand):
        self.__brand = brand

    # Getter dan Setter untuk price
    def get_price(self):
        return self.price

    def set_price(self, price):
        self.price = price
