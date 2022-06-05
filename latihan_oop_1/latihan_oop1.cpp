/*
    Latihan OOP 1 : Pendahuluan
    1. Alasan kenapa harus belajar OOP :
        a.  karena untuk dasar kita baru belajar pemrograman dengan paradigma 
            prosedural
        b.  karena dengan OOP kita bisa membuat aplikasi yang kompleks dengan memanfaatkan konsep class dan object 
            didalamnya
        c.  Didalam class harus ditambahkan parameter public, private, protected
        d.  Didalam class bisa terdapat data member dan data function / method atau fungsi
*/

#include<iostream>

class Orang
{
public:
    std::string nama;
private:
    std::string alamat;
protected:
    std::string gender;
};

int main(int argc, char const *argv[])
{
    Orang orang1;

    orang1.nama = "wawan";
    // orang1.alamat = "jepara";
    // orang1.gender = "cwk";

    std::cout << "selesai" << std::endl;
    
    return 0;
}
