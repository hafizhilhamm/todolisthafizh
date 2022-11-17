#include <iostream>
#include "agenda.h"

int main()
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