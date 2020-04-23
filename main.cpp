#include <iostream>

namespace zz{
    int Tambah(int a, int b){
        return a+b;
    }
    float Tambah(float a, float b){
        return a+b;
    }
} // namespace Tobat

int main(){
    int a,b;
    float A,B;

    std::cout << "Integer " << std::endl;
    std::cout << "Masukkan Angka 1 : ";
    std::cin >> a ;
    std::cout << "Masukkan Angka 2 : ";
    std::cin >> b ;
    std::cout << "float " << std::endl;
    std::cout << "Masukkan Angka 1 : ";
    std::cin >> A ;
    std::cout << "Masukkan Angka 2 : ";
    std::cin >> B ;

    //std:: punyanya iostream zz:: punyakuuuuu
    std::cout << std::endl;
    std::cout << "Hasil integer : " << zz::Tambah(a,b) << std::endl;
    std::cout << "Hasil float   : " << zz::Tambah(A,B) << std::endl;

    return 0;
}
