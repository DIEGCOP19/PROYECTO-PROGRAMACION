#include <iostream>
#include <fstream>
using namespace std;

void lectura(){
ifstream archivo;
string texto;
archivo.open("prueba2.txt",ios::in);

if(archivo.fail()){
cout<<"No se pudo abrir el archivo"<<endl;
}

while(!archivo.eof()){
    getline(archivo,texto);
    cout<<texto<<endl;
}

archivo.close();
}

int main(){

lectura();


return 0;
}