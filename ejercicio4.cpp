#include <iostream>
#include <string.h>

using namespace std;

int tamano_iterativo(string a){
    int i=0;
    while(a[i]!='\0'){//diferente al vacio
        i++;
    } 
    return i;
}

int tamano_recursivo(string a, int c){
    if(a[c]=='\0')
        return c;
    else 
        return tamano_recursivo(a,c+1);
}

int main(){
    int c=0;
    cout<<"ingrese una palabra: ";
    string palabra;
    getline(cin,palabra);
    cout<<"el tamano de la cadena es(iterativo): "<<tamano_iterativo(palabra)<<"\n";
    cout<<"el tamano de la cadena es(recursivo): "<<tamano_recursivo(palabra, c);
    return 0;
}