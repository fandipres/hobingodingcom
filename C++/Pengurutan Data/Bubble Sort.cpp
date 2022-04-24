#include <iostream>
using namespace std;
//visit us @hobingoding.com

int main(){
    int banyakData, i, j;
    
    cout << "Pengurutan Data dengan Algoritma Bubble Sort" << endl;
    
    cout << "Input Banyak Data       : ";
    cin >> banyakData;
    int data[banyakData];
    
    //Perulangan untuk menginput data sebanyak n
    cout << "Data yang Belum Berurut : ";
    for(i = 0; i < banyakData; i++)
    {
        cin >> data[i];
    }
    
    //Algoritma Bubble Sort
    for(i = 0; i < banyakData; i++)
    {
        for(j = 0; j < banyakData-i-1; j++)
        {
            if(data[j] > data[j+1])
            {
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
    
    //Pencetakan data yang sudah diurutkan
    cout << "Hasil Pengurutan Data   : ";
    for(i = 0; i < banyakData; i++)
    {
        cout << data[i] << " ";
    }
    
    cin.ignore();
    return 0;
}
