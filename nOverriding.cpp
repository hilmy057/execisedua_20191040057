#include <iostream>
using namespace std;

class Penerbit {
private:
    std::string namaPenerbit;

public:
    Penerbit(const std::string& nama) : namaPenerbit(nama) {}

    std::string getNamaPenerbit() const {
        return namaPenerbit;
    }
};

class Pengarang {
private:
    std::string namaPengarang;
    Penerbit* penerbit;

public:
    Pengarang(const std::string& nama, Penerbit* penerbit) : namaPengarang(nama), penerbit(penerbit) {}

    std::string getNamaPengarang() const {
        return namaPengarang;
    }

    Penerbit* getPenerbit() const {
        return penerbit;
    }
};

class Buku {
private:
    std::string judulBuku;
    Pengarang* pengarang;

public:
    Buku(const std::string& judul, Pengarang* pengarang) : judulBuku(judul), pengarang(pengarang) {}

    std::string getJudulBuku() const {
        return judulBuku;
    }

    Pengarang* getPengarang() const {
        return pengarang;
    }
};
int main() {
    
    Penerbit penerbit1(" joko ");
    Penerbit penerbit2(" Giga ");

    
    Pengarang pengarang1(" ahmad ", &penerbit1);
    Pengarang pengarang2(" dhani ", &penerbit2);

   
    Buku buku1("laut bercerita ", &pengarang1);
    Buku buku2(" pulang ", &pengarang1);
    Buku buku3("Buku 3", &pengarang2);

    
    std::cout << "Pengarang yang dinaungi oleh joko" << std::endl;
    if (pengarang1.getPenerbit() == &penerbit1) {
        std::cout << "- " << pengarang1.getNamaPengarang() << std::endl;
    }

    std::cout << std::endl;

    
    std::cout << "Penerbit yang diikuti oleh Pengarang giga:" << std::endl;
    std::cout << "- " << pengarang1.getPenerbit()->getNamaPenerbit() << std::endl;

    std::cout << std::endl;