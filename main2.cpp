#include <iostream>
#include <fstream>
std::string data[5];
int main(int argc, char const *argv[])
{
  for(int i=0; i<5; i++){
  std:: cout << "masukan data :";
  std:: cin >> data[i];
  }
  std::ofstream fw("text.txt", std::ofstream::out);
  if(fw.is_open());{
    for(int i=0; i<5; i++){
    fw << "data "<< i+1 << " : "<< data[i] <<std::endl;
  }
  }
  return 0;
}
