#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string kata[4] = {"merah", "kuning", "hijau", "biru"};
    int jumlah_huruf = 0;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Tebak kata warna berikut: " << endl;

    int temp1 = (rand() % 4);


    string tamp = kata[temp1];
    jumlah_huruf = tamp.size();
    cout << "jumlah huruf : " << jumlah_huruf << endl;
    cout << "Huruf Awal   : " << tamp[0] << endl;

    string acak = tamp;

    for (int i = 0; i < jumlah_huruf; ++i) {
            int huruf1 = (rand() % jumlah_huruf);
            int huruf2 = (rand() % jumlah_huruf);
            char temp = acak[huruf1];
            acak[huruf1] = acak[huruf2];
            acak[huruf2] = temp;
        }

    string tebakan = "";
    cout << "Kata Acak    : " << acak << endl;
    cout << "[Cheat] " << kata[temp1] << endl;
    cout << "Tebakan anda : "; cin >> tebakan;
    if(tebakan == tamp){
        cout << "Jawaban anda: " << "[" << tebakan << "]" << " sama yang di tebak: " << tamp << endl;
    }else{
        cout << "Jawaban anda: " << "[" << tebakan << "]" << " tidak sama dengan yang ditebak: " << tamp << endl;
    }

    return 0;
}
