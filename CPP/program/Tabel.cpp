#include <iostream>
#include <string>

using namespace std;

//Kelas Tabel
class Tabel{

    //Atribut
    private:
    int baris;
    int kolom;

    //Constructor
    public:
    
    Tabel(){
        this->baris = 0;
        this->kolom = 0;
    }
    
    //Constructor
    Tabel(int baris, int kolom){
        this->baris = baris;
        this->kolom = kolom;
    }

    //Setter dan Getter
    int getBaris(){
        return this->baris;
    }

    void setBaris(int baris) {
        this->baris = baris;
    }
    
    int getKolom(){
        return this->kolom;
    }
    
    void setKolom(int kolom) {
        this->kolom = kolom;
    }

    //method membuat tabel
    //pada parameter isitabel isi panjang kolom sebanyak kolom
    void buatTabel(int n_baris, int n_kolom, string isiTabel[][9], string headTabel[]){
        int kolom=0, baris=0;
        int maxPerKolom[n_kolom];   //array of int menampung max char per kolom nya

        //mencari maxperkolom
        for(kolom = 0; kolom < n_kolom; kolom++){
            maxPerKolom[kolom] = headTabel[kolom].length();
            for(baris = 0; baris < n_baris; baris++){
                if(isiTabel[baris][kolom].length() > maxPerKolom[kolom]){
                    maxPerKolom[kolom] = isiTabel[baris][kolom].length();
                }
            }
            maxPerKolom[kolom]+=1;
        }

        cout << '\n';
        //buat garis
        pemisahBaris(n_kolom, maxPerKolom, '-');
        
        //header tabel
        for(kolom = 0; kolom < n_kolom; kolom++){
            cout << "| " + headTabel[kolom];
            if(headTabel[kolom].length() < maxPerKolom[kolom]){
                for(int spasi = 0; spasi < maxPerKolom[kolom]-headTabel[kolom].length(); spasi++){
                    cout << " ";
                }
            }
        }
        cout << "|\n";

        //buat garis
        pemisahBaris(n_kolom, maxPerKolom, '=');
        
        //isi tabel
        for(baris = 0; baris < n_baris; baris++){
            for(kolom = 0; kolom < n_kolom; kolom++){
                cout << "| " + isiTabel[baris][kolom];
                
                if(headTabel[kolom].length() < maxPerKolom[kolom]){
                    for(int spasi = 0; spasi < maxPerKolom[kolom]-isiTabel[baris][kolom].length(); spasi++){
                        cout << " ";
                    }
                }
            }
            cout << "|\n";
            //buat garis
            pemisahBaris(n_kolom, maxPerKolom, '-');
        }
    }
    
    //method untuk garis pemisah baris
    void pemisahBaris(int n_kolom, int maxPerKolom[], char simbol){
        for(int kolom = 0; kolom < n_kolom; kolom++){
            for(int perKolom = 0; perKolom < maxPerKolom[kolom]; perKolom++){
                cout << simbol;
            }
            cout << simbol;
            cout << simbol;

        }
        cout << simbol << '\n';
    }

    ~Tabel(){
            
    }
    
};