#include <iostream>
using namespace std;

struct Siswa {
    string nama;
    int umur;
};

int main() {
    Siswa s1;
    s1.nama = "Faiq";
    s1.umur = 16;

    cout << s1.nama << endl;
    cout << s1.umur;

    return 0;
}