#include <iostream>
using namespace std;

int main() {
    string kata;
    int i, j;
	bool palindrome = true;
	
    cout << "Program Mengecek Kata dan Kalimat Palindrom" << endl;
    cout << "visit us hobingoding.com\n" << endl;
    // Input Kata
    cout << "Input Kata : ";
    getline(cin, kata);
    j = kata.length();

    // Cek Palindrom
    for(i = 0; i < j; i++) {
		if(kata[i] != kata[j-i-1]) {
			palindrome = false;
			break;
		}
	}

    if(palindrome == true)
        cout << "Hasil : Palindrom";
    else
        cout << "Hasil : Bukan Palindrom";
    cin.ignore();
    return 0;
}
