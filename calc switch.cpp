#include <iostream>
using namespace std;

int main() {
    float a, b, hasil;
    char operasi;

    cout << "Selamat datang di kalkulator sederhana!" << endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Pilih operasi yang ingin dilakukan (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    switch(operasi) {
        case '+' :
            hasil = a + b;
            cout << "Hasil dari " << a << " + "  << b << " = " << hasil << endl;
            break;
        case '-' :
            hasil = a - b;
            cout << "Hasil dari " << a << " - "  << b << " = " << hasil << endl;
            break;
        case '*' :
            hasil = a * b;
            cout << "Hasil dari " << a << " * "  << b << " = " << hasil << endl;
            break;
        case '/' :
            if (b != 0) {
                hasil = a / b;
                cout << "Hasil dari " << a << " / "  << b << " = " << hasil << endl; 
            } else {
            cout << "Pembagian 0 tidak diperbolehkan" << endl;
            }
            break;
        default :
            cout << "Operator tidak diperbolehkan" << endl;
            break;
        }
    return 0;
}