#include <iostream>
using namespace std;

int main(){
    int banyak_data, i, j;
    
    cout << "Pengurutan Data dengan Algoritma Bubble Sort" << endl;
    cout << "visit us hobingoding.com\n" << endl;
    // Input Banyak Data
    cout << "Input Banyak Data : ";
    cin >> banyak_data;
    int data[banyak_data];
    
    // Input Data
    cout << "Input Data : ";
    for(i = 0; i < banyak_data; i++) {
        cin >> data[i];
    }
    
    // Algoritma Bubble Sort
    for(i = 0; i < banyak_data; i++) {
        for(j = 0; j < banyak_data-i-1; j++) {
            if(data[j] > data[j+1]) {
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
    
    // Hasil Pengurutan Data
    cout << "Hasil Pengurutan Data : ";
    for(i = 0; i < banyak_data; i++) {
        cout << data[i] << " ";
    }
    cin.ignore();
    return 0;
}
