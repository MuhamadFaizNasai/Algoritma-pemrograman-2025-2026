#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;  // Konstanta PI
    float r;                   // Variabel jari-jari

    cout << "Masukkan jari-jari: ";
    cin >> r;

    float luas = PI * r * r;   // Rumus luas lingkaran
    cout << "Luas lingkaran = " << luas;

    return 0;
}