//convertir minusculas a mayusculas
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

void pedirDatos(char *nombre){
    cout<<"nombre: "<<"\n";
    cin.getline(nombre,30,'\n');

    strupr(nombre); //transforma a MAYUSCULAS 
}

int numVocales(char *nombre){
    int c=0;

    while(*nombre){  //mientras nombre no sea nulo '\0'
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': c++;
        }    
        nombre++;
    }
    return c;
}

int main(){
    char nombre[30];
    pedirDatos(nombre);
    cout<<"\nlos vocales son:\n"<<numVocales(nombre);
    getch();
    return 0;
}
