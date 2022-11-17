#include "agenda.h"
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