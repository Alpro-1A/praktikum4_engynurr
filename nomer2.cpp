#include <iostream>

using namespace std;

int main(){


     int T;


    cout << "Input tinggi segitiga: ";
    cin >> T;


    // Proses Segitiga bintang
    for (int i = 1; i <= T; i++) {


        //Membuat Jarak
        for (int j = 1; j <= T - i; j++) {
            cout << " ";
        }


        //Membuat Bintang
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        } cout << endl;
    }


    return 0;
}
