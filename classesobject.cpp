#include <iostream>
using namespace std;

class Siswa {
public:
    string nama;
};

int main() {
    Siswa s1;
    s1.nama = "Faiq";

    cout << s1.nama;
    return 0;
}