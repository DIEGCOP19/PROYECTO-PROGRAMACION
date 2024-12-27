#include <fstream>  // Para ofstream
#include <iostream> // Para cout
using namespace std;

void escribir(){
ofstream archivo;
string nombreArchivo,frase;

cout<<"ingrese el nombre del archivo: "<<endl;
getline(cin,nombreArchivo);



archivo.open(nombreArchivo.c_str(),ios::out); //abriendo el archivo


if(archivo.fail()){
  cout<<"NO SE PUDO ABRIR EL ARCHIVO"<<endl;
}

cout<<"escriba el texto del archivo: "<<endl;
getline(cin,frase);

archivo<<frase;

archivo.close();
}



int main()
{

escribir();

return 0;
}