<!-- Kelas Product -->
<?php
class Product{
    private $idProduct = '';
    private $name = '';
    private $brand = '';
    private $price = 0;
    
    // Constructor
    public function __construct($idProduct='', $name='', $brand='', $price=0) {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // Setter untuk idProduct
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct;
    }

    // Getter untuk idProduct
    public function getIdProduct() {
        return $this->idProduct;
    }

    // Setter untuk name
    public function setName($name) {
        $this->name = $name;
    }

    // Getter untuk name
    public function getName() {
        return $this->name;
    }

    // Setter untuk brand
    public function setBrand($brand) {
        $this->brand = $brand;
    }

    // Getter untuk brand
    public function getBrand() {
        return $this->brand;
    }

    // Setter untuk price
    public function setPrice($price) {
        $this->price = $price;
    }

    // Getter untuk price
    public function getPrice() {
        return $this->price;
    }
}
?>
