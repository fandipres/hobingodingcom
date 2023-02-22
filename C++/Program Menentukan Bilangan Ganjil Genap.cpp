#include <iostream>
using namespace std;
//source code by hobingoding.com

int main(){
    int bilangan;
    
    cout << "Program Menentukan Bilangan Ganjil Genap" << endl;
    cout << "source code by hobingoding.com\n" << endl;
    
    //Penginputan Bilangan yang akan Dicek
    cout << "Input Bilangan : ";
    cin >> bilangan;
    
    //Penghitungan dan Pengecekan Hasil Modulo
    if(bilangan % 2 == 0)
        cout << "Hasil : Bilangan Genap" << endl;
    else
        cout << "Hasil : Bilangan Ganjil" << endl;

    cin.ignore();
    return 0;
}
