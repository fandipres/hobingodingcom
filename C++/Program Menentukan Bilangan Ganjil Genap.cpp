#include <iostream>
using namespace std;

int main() {
    int bilangan;
    
    cout << "Program Menentukan Bilangan Ganjil Genap" << endl;
    cout << "visit us hobingoding.com\n" << endl;
    // Input Bilangan
    cout << "Input Bilangan : ";
    cin >> bilangan;
    
    // Cek Ganjil Genap
    if(bilangan % 2 == 0)
        cout << "Hasil : Bilangan Genap" << endl;
    else
        cout << "Hasil : Bilangan Ganjil" << endl;
    cin.ignore();
    return 0;
}
