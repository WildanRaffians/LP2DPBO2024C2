<!-- Kelas Clothing -->
<?php

require('Product.php'); //parent

class Clothing extends Product{
    private $size = '';
    private $material = '';
    private $gender = '';

    // Constructor
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender) {
        parent::__construct($idProduct, $name, $brand, $price);
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // Setter untuk size
    public function setSize($size) {
        $this->size = $size;
    }

    // Getter untuk size
    public function getSize() {
        return $this->size;
    }

    // Setter untuk material
    public function setMaterial($material) {
        $this->material = $material;
    }

    // Getter untuk material
    public function getMaterial() {
        return $this->material;
    }

    // Setter untuk gender
    public function setGender($gender) {
        $this->gender = $gender;
    }

    // Getter untuk gender
    public function getGender() {
        return $this->gender;
    }
}
?>
