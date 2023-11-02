#include <iostream>

using namespace std;

int main(){


    int n;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> n;


    int a = 0;
    int b = 1;
    int c = 0;


    cout << "Deret Fibonacci: ";


    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    } cout << endl;


    return 0;
}
