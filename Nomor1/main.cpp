#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai Anda:";
    cin >> nilai;

    if (nilai >=90) {
    cout << "Selamat! Anda mendapatkan nilai A." << endl; // Yang mendapat nilai 90 atau lebih

    } else if (nilai >=80) {
    cout << "Anda mendapatkan nilai B." << endl; // Yang mendapat nilai 80 hingga 89

    } else if (nilai >=70) {
    cout << "Anda mendapatkan nilai C." << endl; // Yang mendapat nilai 70 hingga 79

    } else if (nilai >=60) {
    cout << "Anda mendapatkan nilai D." << endl; // Yang mendapat nilai 60 hingga 69

    } else if (nilai <60) {
    cout << "Anda mendapatkan niai E." << endl; // yang mendatkan nilai dibawah 60
    }
    return 0;
}

