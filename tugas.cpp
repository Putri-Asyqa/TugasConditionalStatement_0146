#include <iostream>
#include <iomanip>
using namespace std;

// Prosedur untuk memasukkan data
void inputData(double &berat, double &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan status berat badan
string statusBMI(double bmi) {
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main() {
    double berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
}