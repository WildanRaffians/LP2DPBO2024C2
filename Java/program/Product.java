//Kelas Product
class Product {
    //private atribut
    private String idProduct;
    private String name;
    private String brand;
    private int price;

    //constructor
    public Product(){
    }

    public Product(String idProduct, String name, String brand, int price){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    //setter getter
    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }

    public String getIdProduct(){
        return this.idProduct;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

}
