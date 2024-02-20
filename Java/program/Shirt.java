//Kelas Shirt anak dari Clothing
class Shirt extends Clothing {
    //private atribut
    private String color;
    private String sleeve_type;
    
    //constructor
    public Shirt() {
    }
    
    public Shirt(String color, String sleeve_type) {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    public Shirt(String idProduct, String name, String brand, int price, String size, String material, String gender,
            String color, String sleeve_type) {
        super(idProduct, name, brand, price, size, material, gender);
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    //setter getter
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    public String getSleeve_type() {
        return sleeve_type;
    }
    public void setSleeve_type(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }
}
