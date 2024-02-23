<h1>LP2DPBO2024C2</h1>
<h3>Janji</h3>
Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-2 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

<h3>Deskripsi</h3>
Program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas berikut:<br>
- Product: idProduct, name, brand, price<br>
- Clothing: size, material, gender<br>
- Shirt: color, sleeve_type<br>


<h3>Desain Program</h3>

![DPBO_Prak (1)](https://github.com/WildanRaffians/LP2DPBO2024C2/assets/134181656/6cee39b7-ab31-432a-b25a-19fa2ed7049d)

<h4>Penjelasan :</h4>
<ol>
<li>
  Kelas Product<br>
  Kelas Product Merupakan Super Class dari kelas Clothing dan Shirt. Hal ini karena Clothing dapat dikategorikan sebagai product dan Shirt dapat dikategorikan sebagai Clothing. Juga setiap atribut yang dimiliki oleh Product dapat dipakai oleh Clothing dan Shirt. Pada Kelas Product terdapat 4 atribut yaitu, idProduct, name, brand dan price. Setiap atribut bersifat private dan setiap atribut memiliki method get dan set. Untuk method get dan set bersifat public agar dapat di akses oleh kelas lain.
</li>
<li>
  Kelas Clothing<br>
  Kelas Clothing merupakan anak dari kelas Product dan orang tua dari kelas Shirt. Kelas Product dapat menggunakan atribut kelas Product dan setiap atribut di kelas Clothing dapat digunakan oleh kelas Shirt. Pada Kelas Clothing terdapat 3 atribut yaitu, size, material, dan gender. Setiap atribut bersifat private dan setiap atribut memiliki method get dan set. Untuk method get dan set  bersifat public agar dapat di akses oleh kelas lain.
</li>
<li>
  Kelas Shirt<br>
  Kelas Shirt merupakan anak dari kelas Clothing dan cucu dari kelas Product. Kelas Shirt dapat menggunakan semua atribut kelas Product dan kelas Clothing. Pada Kelas Shirt terdapat 2 atribut yaitu, color dan sleeve_type. Setiap atribut bersifat private dan setiap atribut memiliki method get dan set. Untuk method get dan set  bersifat public agar dapat di akses oleh kelas lain.
</li>
<li>
  Kelas Tabel<br>
  Kelas Tabel berdiri sendiri alias tidak mewarisi/diwarisi oleh kelas lain. Dikarenakan atribut pada kelas lain tidak dapat / tidak cocok digunakan oleh kelas Tabel. Pada Kelas Tabel terdapat 2 atribut yaitu, baris dan kolom. Setiap atribut bersifat private dan setiap atribut memiliki method get dan set. Untuk method get dan set  bersifat public agar dapat di akses oleh kelas lain. Terdapat juga method buatTabel untuk membentuk tabel yang diinginkan dan method pemisahBaris untuk membentuk garis yang memisahkan baris pada tabel.
</li>
</ol>

Pada program ini hanya dapat menambahkan data, setelah memasukkan data maka akan menampilkan tabel berisi data masukan.



<h3>Dokumentasi Program</h3>

![Screenshot1](https://github.com/WildanRaffians/LP2DPBO2024C2/assets/134181656/0c49cb92-c4b5-4484-9864-264f417049f0)

![Screenshot2](https://github.com/WildanRaffians/LP2DPBO2024C2/assets/134181656/2498e07f-c8af-4f7a-a5e4-8fe9e4cdcd4f)

![Screenshot3](https://github.com/WildanRaffians/LP2DPBO2024C2/assets/134181656/e0a9e42f-8ffd-4ec3-a7af-1800301d9da9)

