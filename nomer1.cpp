#include <iostream>

using namespace std;

int main(){

    cout <<"[ BILANGAN GANJIL, GENAP, DAN PRIMA ]"<< endl;


    int batas;
    int jumlahBilanganGanjil = 0;
    int jumlahBilanganGenap = 0;
    int jumlahBilanganPrima = 0;


    // Keterangan Variabel nya


    cout << "Masukkan batas bilangan positif : ";
    cin >> batas;

    // Bilangan Ganjil
    // Input batasan bilangan positif
    cout << "Bilangan Ganjil : ";
    // Output batasan bilangan ganjil


    // Mencari bilangan ganjil
    for (int i = 0; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; // Bilangan Ganjil
            jumlahBilanganGanjil += i;   // Operasi penjumlahan bilangan ganjil
        }
    } cout << endl;


    //Mencari Bilangan genap
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahBilanganGenap += i;
    } cout << endl;


    //Mencari Bilangan prima
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }

        if (j * j > i)
        {
            cout << i << " ";
            jumlahBilanganPrima += i;
        }
    } cout << endl;


    // Output dari Bilangan Bilangan tersebut
    cout << "Jumlah bilangan ganjil: " << jumlahBilanganGanjil << endl;
    cout << "Jumlah bilangan genap: " << jumlahBilanganGenap << endl;
    cout << "Jumlah bilangan Prima: " << jumlahBilanganPrima << endl;


    // Jumlah serta faktor dari bilangan Ganjil,Genap dan Prima yang ditampilkan


    // Bilangan Ganjil
    cout << "Faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= jumlahBilanganGanjil; i++) {
    if (jumlahBilanganGanjil % i == 0) {
        cout << i << " ";
    }
} cout << endl;


    // Bilangan Genap
    cout << "Faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= jumlahBilanganGenap; i++) {
    if (jumlahBilanganGenap % i == 0) {
        cout << i << " ";
    }
} cout << endl;


    // Bilangan rima
    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= jumlahBilanganPrima; i++) {
    if (jumlahBilanganPrima % i == 0) {
        cout << i << " ";
    }
} cout << endl;


    return 0;
}
