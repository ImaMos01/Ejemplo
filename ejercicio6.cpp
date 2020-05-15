#include <iostream>
#include <string.h>

using namespace std;

int tamcade(char a[]){
    int i=0;
    while(a[i]!='\0') 
        i++;
    return i;
}

void copiar(char a[], char b[]){
    int i=0;
    for (i=0; a[i]!='\0'; i++){
        b[i]=a[i];
    }
    if (tamcade(a)<tamcade(b));
        while(b[i]!='\0'){
            b[i]=' ';
            i++;
        }
    cout<<"cadena b: "<<b;
}

int main(){
    char A[100], B[100];
    cout<<"ingrese cadena A: ";
    cin>>A;
    cout<<"ingrese cadena B: ";
    cin>>B;

    copiar(A, B);

    return 0; 
}