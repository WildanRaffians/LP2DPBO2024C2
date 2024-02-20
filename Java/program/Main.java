/*Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-2
dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/

//import library yang dibutuhkan
import java.util.Scanner;
import java.util.ArrayList;

//Kelas Main
public class Main {
    public static void main(String[] args){

        //inisialisasi
        ArrayList<Shirt> listShirt = new ArrayList<>();     //list data shirt
        Scanner sc = new Scanner(System.in);                //scanner
        String id, nama, brand, size, material, gender, color, sleeve_type; //penampung untuk masukan user
        int price;      //penampung untuk masukan user
        int i = 1;      //iterator
        int n = 4;      //jumlah awal masukan
        int tambah = 0; //tampungan masukan user jika ingin menambha data

        //perulangan selama kurang dari n
        while(i < n){
            //meminta masukan user data shirt ke i
            System.out.println("\nMasukkan Data Shirt Ke - " + i + " :");
            System.out.print("Id       : ");
            id = sc.next();
            sc.nextLine();
            System.out.print("Nama     : ");
            nama = sc.nextLine();
            System.out.print("Brand    : ");
            brand = sc.nextLine();
            System.out.print("Harga    : ");
            price = sc.nextInt();
            System.out.println("\nUkuran   : (XS | S | M | L | XL | XXL | XXXL | XXXXL)");
            System.out.print("Ukuran   : ");
            size = sc.next();
            sc.nextLine();
            System.out.print("Material : ");
            material = sc.nextLine();
            System.out.println("\nGender   : (Pria | Wanita)");
            System.out.print("Gender   : ");
            gender = sc.nextLine();
            System.out.print("Warna    : ");
            color = sc.nextLine();
            System.out.print("Jenis Lengan : ");
            sleeve_type = sc.nextLine();
            
            //instansiasi lalu tambah ke list shirt
            if (i == 1){
                Shirt kemeja1 = new Shirt(id, nama, brand, price, size, material, gender, color, sleeve_type);
                listShirt.add(kemeja1);
            } else if (i == 2){
                Shirt kemeja2 = new Shirt(id, nama, brand, price, size, material, gender, color, sleeve_type);
                listShirt.add(kemeja2);
            } else if(i == 3){
                Shirt kemeja3 = new Shirt(id, nama, brand, price, size, material, gender, color, sleeve_type);
                listShirt.add(kemeja3);
            } else if(i>3){
                Shirt kemeja0 = new Shirt(id, nama, brand, price, size, material, gender, color, sleeve_type);
                listShirt.add(kemeja0);
            }
            
            if(i >= 3){
                //jika sudah 3 atau lebih
                //tanyakan apakah ingin menambah data lagi
                System.out.println("\n> Ingin menambah data?");
                System.out.println("  1. Ya");
                System.out.println("  2. Tidak");
                System.out.print("\n> ");
                tambah = sc.nextInt();    //minta masukan

                if(tambah == 1){
                    //jika iya maka n bertambah
                    n = n+1;
                }
            }
            i++;    //iterasi
        }

        sc.close(); //tutup scanner

        //tampilkan
        //siapkan isi tabel
        String[][] isiTabel = new String[listShirt.size()][9];
        for(i = 0; i < listShirt.size(); i++){
            isiTabel[i][0] = listShirt.get(i).getIdProduct();
            isiTabel[i][1] = listShirt.get(i).getName();
            isiTabel[i][2] = listShirt.get(i).getBrand();
            isiTabel[i][3] = String.valueOf(listShirt.get(i).getPrice());
            isiTabel[i][4] = listShirt.get(i).getSize();
            isiTabel[i][5] = listShirt.get(i).getMaterial();
            isiTabel[i][6] = listShirt.get(i).getGender();
            isiTabel[i][7] = listShirt.get(i).getColor();
            isiTabel[i][8] = listShirt.get(i).getSleeve_type();
        }
        
        //siapkan header
        String[] head = {"Id Product", "Nama", "Brand", "Harga", "Ukuran", "Material", "Gender", "Warna", "Jenis Lengan"};
        
        //tampilkan tabel
        System.out.println("\nList Shirt : ");
        Tabel tab = new Tabel();
        tab.buatTabel(listShirt.size(), 9, isiTabel, head);
    }
}
