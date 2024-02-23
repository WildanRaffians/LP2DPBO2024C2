<!-- Kelas Shirt -->
<?php

require('Clothing.php');    //parent

class Shirt extends Clothing{
    private $color = '';
    private $sleeve_type = '';

    // Constructor
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color, $sleeve_type) {
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // Setter untuk color
    public function setColor($color) {
        $this->color = $color;
    }

    // Getter untuk color
    public function getColor() {
        return $this->color;
    }

    // Setter untuk sleeve_type
    public function setSleeveType($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }

    // Getter untuk sleeve_type
    public function getSleeveType() {
        return $this->sleeve_type;
    }
}
?>
