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


