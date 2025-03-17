#include <iostream>
using namespace std;

float LuasPersegiPanjang(float a, float b){
    return a*b;
}

 float LuasLingkaran (float a){
    return 3.14*a*a;
}

int main (){
    int pilihan;
    float Panjang, lebar;
    float jejari;

    do {
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
             cout << "Hitung luas persegi panjang " << endl;
             cout << "Masukkan panjang = ";
            cin >> Panjang;
            cout << "Masukan lebar = ";
            cin >> lebar;
            cout << "Luas Persegi Panjang = " << LuasPersegiPanjang(Panjang, lebar) << endl;
            break;
            case 2:
            cout << "Hitung luas lingkaran " << endl;
            cout << "Masukan jari-jari = ";
            cin >> jejari;
            cout << "Luas lingkaran = " << LuasLingkaran(jejari) <<endl;
            break;
            case 3:
            break;
            default:
            cout << "Pilihan salah, pilihlah harus di antara 1-3.";
            break;
        }
    }while (pilihan !=3);
}