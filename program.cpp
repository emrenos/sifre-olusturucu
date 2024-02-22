#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <clocale>

using namespace std;

string sifreOlustur(int uzunluk) {
    const string karakterler = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+{}|:<>?-=[];',./";
    string sifre;
    srand(time(NULL));
    for (int i = 0; i < uzunluk; i++) {
        sifre += karakterler[rand() % karakterler.length()];
    }
    return sifre;
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int uzunluk;
    cout << "\033[1;32mŞifrenizin karakter sayısını girin: \033[0m";
    cin >> uzunluk;
    if (uzunluk == 0) {
        cout << "\033[1;31mSıfırdan farklı bir sayı giriniz.\033[0m" << endl;
    }
    else {
        string sifre = sifreOlustur(uzunluk);
        cout << "\033[1;36mOluşturulan şifreniz: \033[0m" << sifre << endl;
    }
    return 0;
}
