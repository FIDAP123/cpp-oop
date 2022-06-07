/*
    Latihan OOP 2 : Constuctor
    1.  b
*/

#include<iostream>

class Manusia
{
public:
    Manusia(/* args */)
    {
        std::cout << "halo" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Manusia manusia1 = Manusia();// dengan adanya constructor kita bisa lebih mudah memanggil class dengan meng-inisialisasikan obeject jika constructor mempunyai parameter atau kita bisa hanya memanggil class tanpa meng-inisialisasikannya
    Manusia manusia2;//ini adalah contoh pemanggilan class dengan constructor yg tidak mempunyai parameter dengan hanya membuat objeknya saja
    
    std::cout << std::endl;
    std::cout << "selesai" << std::endl;
    return 0;
}
