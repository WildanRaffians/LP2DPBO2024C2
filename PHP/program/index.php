<!-- Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-2 
dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin -->

<!-- Index / main -->
<?php

    //memanggil file class
    require('Shirt.php');
    require('Tabel.php');
    
    $listShirt = array();//menyiapkan array/list

    //instansiasi dan menambah objek shirt
    $shirt1 = new Shirt("001", "Kemeja Bulan", "Niel Knivlac", 999000, "XL", "Pelepah Pisang", "Pria", "Abu Vulkanik", "Panjang");
    $shirt2 = new Shirt("020", "Kemeja Klasik", "Uniq Lo", 89000, "L", "Kayu Besi", "Pria", "Coklat Karamel", "Pendek");
    $shirt3 = new Shirt("031", "Kemeja Polos", "Hu Go Boss", 120000, "M", "Keramik", "Wanita", "Emas Batangan", "Panjang");
    $shirt4 = new Shirt("035", "Kemeja Formal", "Brooks Yohoho", 90000, "S", "Tulang Ikan", "Pria", "Tulang Alami", "Pendek");
    $shirt5 = new Shirt("051", "Kemeja Laut", "Tom Mihifig", 788000, "XXL", "Batu Karang", "Wanita", "Kuning Bambu", "Pendek");
    
    //memasukkan shirt ke list
    array_push($listShirt, $shirt1);
    array_push($listShirt, $shirt2);
    array_push($listShirt, $shirt3);
    array_push($listShirt, $shirt4);
    array_push($listShirt, $shirt5);

    //Tampilkan Tabel
    //menyiapkan isi tabel
    $isiTabel = array();
    $i = 0;
    foreach ($listShirt as $shirt){
        $isiTabel[$i][0] = $shirt->getIdProduct();
        $isiTabel[$i][1] = $shirt->getName();
        $isiTabel[$i][2] = $shirt->getbrand();
        $isiTabel[$i][3] = $shirt->getPrice();
        $isiTabel[$i][4] = $shirt->getSize();
        $isiTabel[$i][5] = $shirt->getMaterial();
        $isiTabel[$i][6] = $shirt->getGender();
        $isiTabel[$i][7] = $shirt->getColor();
        $isiTabel[$i][8] = $shirt->getSleeveType();
        $i+=1;
    }

    //intansiasi tabel
    $tbl = new Tabel();
    
    //menyiapkan judul dan header tabel
    $judul = "List Shirt";
    $head = array("Id Product", "Nama", "Brand", "Harga", "Ukuran", "Material", "Gender", "Warna", "Jenis Lengan");
    
    //buat Tabel
    $tbl->buatTabel(sizeof($listShirt), 9, $isiTabel, $head, $judul);
?>