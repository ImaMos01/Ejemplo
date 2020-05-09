#include <iostream>
#include <string.h>

using namespace std;

void copiar(char a[], char b[]){
    int i=0;
    for (i=0; a[i]!='\0'; i++){
        b[i]=a[i];
    }
    if (strlen(a)<strlen(b));
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