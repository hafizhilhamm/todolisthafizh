#include <iostream>
#include <fstream>
std::ofstream fw("text.txt", std::ofstream::out);
class Agenda{
std::string hari;
char aktivitas[30];
public:
void Kegiatan();
void Print();
};

void Agenda::Kegiatan(){
    std::cout << "Hari :";
    std::cin >> hari;
    std::cout << "Masukan aktivitas : ";
    std::cin >> aktivitas;
}

void Agenda::Print(){
    if(fw.is_open());{
    fw << "hari : " << hari;
    fw << "|| Aktivitas : " << aktivitas<<std::endl; 
    }
}

int main(int argc, char const *argv[])
{
Agenda ab[30];
for(int i=0; i<7; i++){
    ab[i].Kegiatan();
}
std:: cout << "Agenda : " << std::endl;
    for(int i=0; i<7; i++){
    ab[i].Print();
    }
}
