#include <iostream>

using namespace std;

int bil1, bil2;
void banding (int a, int b) { //int a dan int b dibuat gunanya agar bisa dibandingkan
     if (a>b) {
        cout << a;
     } else if (a==b){
       cout << "tidak ada";
     } else {
       cout << b;
     }
}

int main () {
    cout << "Masukkan Bilangan 1 :";
    cin >> bil1;
    cout << "Masukkan Bilangan 2 :";
    cin >> bil2;
    cout << "Bilangan yang lebih besar adalah :";
    banding (bil1,bil2);

    return 0;
}
