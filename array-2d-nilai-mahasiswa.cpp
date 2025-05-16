#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int i, j;
    int data_nil[4][3]; // Index dimulai dari 1 agar sesuai dengan gaya awal
    char ulang;
    string npm, nama;

    do {
        system("cls"); // Untuk Windows. Gunakan "clear" di Linux/Mac jika perlu
        cout << "Masukkan NPM : ";
        cin >> npm;
        cout << "Masukkan Nama : ";
        cin >> nama;

        for (i = 1; i <= 3; i++) {
            for (j = 1; j <= 2; j++) {
                cout << "\tData Ke - [" << i << "," << j << "]" << endl;
                cout << "\tNILAI ANDA = ";
                cin >> data_nil[i][j];
            }
            cout << endl;
        }

        cout << "\n\tDATA NILAI MAHASISWA\n";
        cout << "\tUNIVERSITAS BINA INSANI\n";
        cout << "\tNIM  : " << npm << endl;
        cout << "\tNAMA : " << nama << endl;
        cout << "\t------------------------\n";
        cout << "\tSMT  NIL.UTS  NIL.UAS\n";
        cout << "\t------------------------\n";

        for (i = 1; i <= 3; i++) {
            cout << setw(8) << i;
            for (j = 1; j <= 2; j++) {
                cout << setw(9) << data_nil[i][j];
            }
            cout << endl;
        }
        cout << "\t------------------------\n";

        cout << "\nMau nyoba lagi [Y/T] = ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
