/*Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-2
dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/

//import library dan file class
#include <bits/stdc++.h>
#include "Shirt.cpp"
#include "Tabel.cpp"

//using standard namespace
using namespace std;

//main
int main(){
   
    list<Shirt> listShirt;  //list data shirt

    //instansiasi
    Shirt kemeja1;
    Shirt kemeja2;
    Shirt kemeja3;
    Shirt kemeja0;

    string id, nama, brand, size, material, gender, color, sleeve_type; //penampung untuk masukan user
    int price;      //penampung untuk masukan user
    int i = 1;      //iterator
    int n = 4;      //jumlah awal masukan
    int tambah = 0; //tampungan masukan user jika ingin menambha data

    //perulangan selama kurang dari n
    while(i<n){
        //meminta masukan user data shirt ke i
        cout << "\nMasukkan Data Shirt Ke - " << i << " :" << '\n';
        cout << "Id       : ";
        cin >> id;
        cout << "Nama     : ";
        cin >> nama;
        cout << "Brand    : ";
        cin >> brand;
        cout << "Harga    : ";
        cin >> price;
        cout << "\nUkuran   : (XS | S | M | L | XL | XXL | XXXL | XXXXL)";
        cout << "\nUkuran   : ";
        cin >> size;
        cout << "Material : ";
        cin >> material;
        cout << "\nGender   : (Pria | Wanita)";
        cout << "\nGender   : ";
        cin >> gender;
        cout << "Warna    : ";
        cin >> color;
        cout << "Jenis Lengan : ";
        cin >> sleeve_type;

        //set atribut objek lalu tambahkan ke list
        if(i == 1){
            kemeja1.set_idProduct(id);
            kemeja1.set_name(nama);
            kemeja1.set_brand(brand);
            kemeja1.set_price(price);
            kemeja1.set_size(size);
            kemeja1.set_material(material);
            kemeja1.set_gender(gender);
            kemeja1.set_color(color);
            kemeja1.set_sleeve_type(sleeve_type);

            listShirt.push_back(kemeja1);
        } else if(i == 2){
            kemeja2.set_idProduct(id);
            kemeja2.set_name(nama);
            kemeja2.set_brand(brand);
            kemeja2.set_price(price);
            kemeja2.set_size(size);
            kemeja2.set_material(material);
            kemeja2.set_gender(gender);
            kemeja2.set_color(color);
            kemeja2.set_sleeve_type(sleeve_type);

            listShirt.push_back(kemeja2);
        } else if(i == 3){
            kemeja3.set_idProduct(id);
            kemeja3.set_name(nama);
            kemeja3.set_brand(brand);
            kemeja3.set_price(price);
            kemeja3.set_size(size);
            kemeja3.set_material(material);
            kemeja3.set_gender(gender);
            kemeja3.set_color(color);
            kemeja3.set_sleeve_type(sleeve_type);

            listShirt.push_back(kemeja3);
        }else if (i>3){
            kemeja0.set_idProduct(id);
            kemeja0.set_name(nama);
            kemeja0.set_brand(brand);
            kemeja0.set_price(price);
            kemeja0.set_size(size);
            kemeja0.set_material(material);
            kemeja0.set_gender(gender);
            kemeja0.set_color(color);
            kemeja0.set_sleeve_type(sleeve_type);

            listShirt.push_back(kemeja0);
        }

        if(i >= 3){
            //jika sudah 3 atau lebih
            //tanyakan apakah ingin menambah data lagi
            cout << "\n> Ingin menambah data?\n";
            cout << "  1. Ya\n";
            cout << "  2. Tidak\n\n";
            cout << "> ";
            cin >> tambah;  //minta masukan

            if(tambah == 1){
                //jika iya maka n bertambah
                n = n+1;
            }
        }
        i++;    //iterasi
    }
    //tampilkan
    //siapkan isi tabel
    string isiTabel[listShirt.size()][9];
    i = 0;
    for(list<Shirt>::iterator it = listShirt.begin(); it != listShirt.end(); it++){
        isiTabel[i][0] = it->get_idProduct();
        isiTabel[i][1] = it->get_name();
        isiTabel[i][2] = it->get_brand();
        isiTabel[i][3] = to_string(it->get_price());
        isiTabel[i][4] = it->get_size();
        isiTabel[i][5] = it->get_material();
        isiTabel[i][6] = it->get_gender();
        isiTabel[i][7] = it->get_color();
        isiTabel[i][8] = it->get_sleeve_type();
        i++;
    }

    //siapkan header
    string head[] = {"Id Product", "Nama", "Brand", "Harga", "Ukuran", "Material", "Gender", "Warna", "Jenis Lengan"};
    
    //tampilkan tabel
    cout << "\nList Shirt : ";
    Tabel tab;
    tab.buatTabel(listShirt.size(), 9, isiTabel, head);
    
    return 0;
}