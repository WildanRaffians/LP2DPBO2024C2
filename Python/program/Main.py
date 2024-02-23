# Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-2
# dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin

#Kelas Main

#siapkan kelas yang dibutuhkan
from Shirt import Shirt
from Tabel import Tabel

#inisialisasi
listShirt = []  #list data shirt
i = 1   #iterator
n = 4   #batas jumlah masukan awal

# perulangan selama kurang dari n
while(i<n):
    # meminta masukan user data shirt ke i
    print("\nMasukkan Data Shirt Ke - ", i, " :")
    id = str(input('Id       : '))
    nama = str(input('Nama     : '))
    brand = str(input('Brand    : '))
    harga = int(input('Harga    : '))
    print("\nUkuran   : (XS | S | M | L | XL | XXL | XXXL | XXXXL)")
    ukuran = str(input('Ukuran   : '))
    material = str(input('Material : '))
    print("\nGender   : (Pria | Wanita)")
    gender = str(input('Gender   : '))
    warna = str(input('Warna    : '))
    jenis_lengan = str(input('Jenis Lengan : '))

    # instansiasi dan tambah ke list shirt
    listShirt.append(Shirt(id, nama, brand, harga, ukuran, material, gender, warna, jenis_lengan))
    
    if(i >= 3):
        # jika sudah 3 atau lebih
        # tanyakan apakah ingin menambah data lagi
        print("\n> Ingin menambah data?")
        print("  1. Ya")
        print("  2. Tidak")

        tambah = int(input('\n> ')) #minta masukan

        if(tambah == 1):
            # jika iya maka n bertambah
            n = n + 1
    i+=1 #iterasi

# tampilkan
# siapkan isi tabel
isiTabel = [[0 for _ in range(9)] for _ in range(len(listShirt))]
i = 0
for shirt in listShirt:
        isiTabel[i][0] = shirt.get_idProduct()
        isiTabel[i][1] = shirt.get_name()
        isiTabel[i][2] = shirt.get_brand()
        isiTabel[i][3] = str(shirt.get_price())
        isiTabel[i][4] = shirt.get_size()
        isiTabel[i][5] = shirt.get_material()
        isiTabel[i][6] = shirt.get_gender()
        isiTabel[i][7] = shirt.get_color()
        isiTabel[i][8] = shirt.get_sleeve_type()
        i+=1

# siapkan isi header
headTabel = ["Id Product", "Nama", "Brand", "Harga", "Ukuran", "Material", "Gender", "Warna", "Jenis Lengan"]

# Tampilkan  tabel
print("\nList Shirt : ")
tab = Tabel()
tab.buat_tabel(len(listShirt), 9, isiTabel, headTabel)