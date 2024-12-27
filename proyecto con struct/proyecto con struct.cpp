#include <iostream>
#include <fstream>
using namespace std;

struct perro {
protected:
    int id;
    string nombre;
    float peso;
    string color;
    string fecha_entrada;
    string fecha_salida;
    string estado;
    int id_adoptante;
public:
    void setDatos(int di, string name, float pes, string coulor, string fe, string fs, string status, int diadopta) {
        id = di;
        nombre = name;
        peso = pes;
        color = coulor;
        fecha_entrada = fe;
        fecha_salida = fs;
        estado = status;
        id_adoptante=diadopta;
    }

    void ingresodatos(perro array[], int tamanio) {
        int i;
       for(i=0;i<tamanio;i++){ 
       cout<<"ingrese datos de perro "<<i+1<<endl;
       cout<<"ingrese id: ";cin>>array[i].id;
       cin.ignore();
       cout<<"ingrese nombre: ";getline(cin,array[i].nombre);
       cout<<"ingrese peso: ";cin>>array[i].peso;
       cin.ignore();
       cout<<"ingrese color del perro: ";getline(cin,array[i].color);
       cout<<"ingrese fecha de entrada: ";getline(cin,array[i].fecha_entrada);
       cout<<"ingrese fecha de salida: ";getline(cin,array[i].fecha_salida);
       cout<<"ingrese estado de salud: ";getline(cin,array[i].estado);
       cout<<"ingrese id del adoptante: ";cin>>array[i].id_adoptante;
       cin.ignore();
       }
    }

void infodog(perro array[], int tamanio) {
int i;
for (i=0;i<tamanio;i++){
cout<<"dato de perro "<<i+1<<endl;
cout<<"ID:"<<array[i].id<<" nombre:"<<array[i].nombre<<" Peso:"<<array[i].peso<<" Color: "<<array[i].color<<endl;
cout<<" Ingreso: "<<array[i].fecha_entrada<<" salida: "<<array[i].fecha_salida<<" Estado: "<<array[i].estado<<endl;
cout<<"Id del adoptante: "<<array[i].id_adoptante<<endl;
}
}

void modificarperros(perro array[], int tamanio, int id , int nuevoid, string newname, float nuevo_peso, string newcolor, string entrada, string salida, string salud, int newid_adoptante){
 int i;
 for (i=0;i<tamanio;i++) {
        if (array[i].id == id) {
            array[i].id = nuevoid;
            array[i].nombre = newname;
            array[i].peso = nuevo_peso;
            array[i].color = newcolor;
            array[i].fecha_entrada = entrada;
            array[i].fecha_salida = salida;
            array[i].estado = salud;
            array[i].id_adoptante = newid_adoptante;
            break;
        }
    }
}
};


struct adoptante {
protected: 
    int ID;
    int edad;
    string NomBrecomplet;
    string telefono;
    string direccion;
    string correo;
    bool xp_mascotas;

public:
    void setdatosadopta(int ide, int dad, string namecomplet, string numberphone, string address, string mail, bool xp_dog) {
        ID = ide;
        edad = dad;
        NomBrecomplet = namecomplet;
        telefono = numberphone;
        direccion = address;
        correo = mail;
        xp_mascotas = xp_dog;
    }

    void ingresoDatosAdoptante(adoptante array[], int size) {
      int i;
       for(i=0;i<size;i++){ 
       cout<<"ingrese datos del adoptante: "<<i+1<<endl;
       cout<<"ingrese el id: ";cin>>array[i].ID;
       cout<<"ingrese la edad: ";cin>>array[i].edad;
       cin.ignore();
       cout<<"ingrese el nombre completo: ";getline(cin,array[i].NomBrecomplet);
       cout<<"ingrese el numero de celular: ";getline(cin,array[i].telefono);
       cout<<"ingrese la direccion de vivienda: ";getline(cin,array[i].direccion);
       cout<<"ingrese el correo electronico: ";getline(cin,array[i].correo);
       cout<<"tiene experiencia con mascotas (1=Si , 0=No): ";cin>>array[i].xp_mascotas;
       cin.ignore();
       }
    }

  void mostrarDatosAdoptante(adoptante array[], int size) {
    int i;
    for(i=0;i<size;i++){
     cout <<"datos de adoptante "<<i+1<<endl;
     cout << "ID:"<<array[i].ID <<" Edad:"<<array[i].edad<< " Nombre:"<<array[i].NomBrecomplet<<" celular:"<<array[i].telefono<<" direccion:"<<array[i].direccion<<" correo:"<<array[i].correo<<endl;
     cout << "Experiencia con mascotas: " << (array[i].xp_mascotas ? "Si" : "No") << endl;
    }
    }

  void modificaradoptantes(adoptante array[], int tamanio, int ID , int idnew, int newage, string newname, string newnumber, string newaddress, string newcorreo, bool newxp){
 int i;
 for (i=0;i<tamanio;i++) {
        if (array[i].ID == ID) {
            array[i].ID = idnew;
            array[i].edad = newage;
            array[i].NomBrecomplet = newname;
            array[i].telefono = newnumber;
            array[i].direccion = newaddress;
            array[i].correo = newcorreo;
            array[i].xp_mascotas= newxp;
            break;
        }
    }
}



};

int main() {
    int opcion,x;
    perro p1;
    adoptante a1;
    cout<<"ingrese tamaño de la lista de perros y adoptantes: ";cin>>x;
    if (x <= 0){
        cout << "El tamaño debe ser un número positivo." << endl;
        return 1;
    }
    perro array[x];
    adoptante arreglo[x];

    do {
        cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "<<<<            Menu de opciones              >>>>" << endl;
        cout << "<<<< 1. Ingresar datos de los perros          >>>>" << endl;
        cout << "<<<< 2. Mostrar datos de los perros           >>>>" << endl;
        cout << "<<<< 3. Ingresar datos de los adoptantes      >>>>" << endl;
        cout << "<<<< 4. Mostrar datos de los adoptantes       >>>>" << endl;
        cout << "<<<< 5. Modificar datos del perro o adoptante >>>>" << endl;
        cout << "<<<< 6. Salir                                 >>>>" << endl;
        cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Seleccione una opcion (1-5): "; cin >> opcion;

        switch (opcion) {
            case 1:
                p1.ingresodatos(array,x);
                break;
            case 2:
                p1.infodog(array,x);
                break;
            case 3:
                a1.ingresoDatosAdoptante(arreglo,x);
                break;
            case 4:
                a1.mostrarDatosAdoptante(arreglo,x);
                break;
            case 5:
              char letra;
               do{
                cout <<"************************************************"<< endl;
                cout <<"** elija de quien quiere modificar los datos **"<< endl;
                cout <<"** A. Perros                                 **"<< endl;
                cout <<"** B. Adoptantes                             **"<< endl;
                cout <<"** C. regresar al menu                       **"<< endl;
                cout <<"***********************************************"<< endl;
                cout<<"seleccione una opcion: ";cin>>letra;
                
                switch(letra) {

                case 'A':{
                int id;
                int nuevoid, newid_adoptante; 
                float nuevo_peso;
                string newname;
                string newcolor; 
                string entrada; 
                string salida;
                string salud;
                    
                     cout<<"ingrese el id del perro que quiera modificar sus datos: ";cin>>id;
                     cout<<"ingrese en este orden ( nuevo id, nuevo nombre, nuevo peso, nuevo color)"<<endl;
                     cin>>nuevoid;
                     cin.ignore();
                     getline(cin,newname);
                     cin>>nuevo_peso;
                     cin.ignore();
                     getline(cin,newcolor);
                     cout<<"ingrese los datos faltantes en este orden (nueva fecha de entrada /// nueva fecha de salida /// actualizacion de estado, id nuevo del adoptante)"<<endl;
                     getline(cin,entrada);
                     getline(cin,salida);
                     getline(cin,salud);
                     cin>>newid_adoptante;
                     cin.ignore();
                    p1.modificarperros(array, x, id, nuevoid,newname, nuevo_peso,newcolor, entrada, salida, salud, newid_adoptante);
                    cout<<"los datos fueron modificados exitosamente"<<endl;
                    break;
                }
                case 'B':{
                 int ID;
                 int idnew;
                 int newage;
                 string nuevoname;
                 string newnumber; 
                 string newaddress;
                 string newcorreo;
                 bool newxp;

                 cout<<"ingrese id del adoptante que quiera modificar sus datos: ";cin>>ID;
                 cout<<"ingrese los nuevos datos en este orden ( nuevo id, nueva edad ,nuevo nombre completo )"<<endl;
                 cin>>idnew>>newage;
                 cin.ignore();
                 getline(cin,nuevoname);
                 cout<<"ingrese los nuevos datos faltantes en este orden (nuevo numero de telefono, nuevo direccion , nuevo e-mail)"<<endl;
                 getline(cin,newnumber);
                 getline(cin,newaddress);
                 getline(cin,newcorreo);
                 cout<<"modifique si cree necesario que el adoptante tiene experiencia con mascotas --->(1:si , 0:no): "<<endl;
                 cin>>newxp;
                 cin.ignore();
                 a1.modificaradoptantes(arreglo,x, ID , idnew, newage, nuevoname, newnumber, newaddress,newcorreo,newxp);
                 cout<<"los datos fueron modificados exitosamente"<<endl;
                 break;
                }
                 case 'C':{
                 cout<<"volviendo al menu de opciones..."<<endl;
                 break;
                 }
                default:
                cout<<"seleccione una de las opciones"<<endl;
                break;
                }
                }while(letra!='C'); 
            break;

        case 6:
           cout<<"saliendo del programa"<<endl;
         break;
         default:
         cout << "Ingrese una opcion que esta en el menu" << endl;
         break;
    }
    } while (opcion != 6);
    
    return 0;
}
