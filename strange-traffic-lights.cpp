#include <iostream>
using namespace std;

int main()
{
    cout << "=== Strange Traffic Lights ===" << endl;
    int waktu, waktu_subs, waktu_sisa;
    cin >> waktu;
    waktu_subs = waktu - 25;
    waktu_sisa = waktu_subs % 103;
    cout << "Masukkan waktu dalam detik: ";

    if (waktu_sisa >= 0 && waktu_sisa < 20)
    {
        cout << "Lampu Hijau" << endl;
    }
    else if (waktu_sisa >= 20 && waktu_sisa < 23)
    {
        cout << "Lampu Kuning" << endl;
    }
    else
    {
        cout << "Lampu Merah" << endl;
    }
    return 0;
}