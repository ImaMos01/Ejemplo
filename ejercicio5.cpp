#include <iostream>

using namespace std;

void concatenar(char A[], char B[]){
    int j=0;
    int i=0;
    for (i=0; B[i]!='\0'; i++);
    B[i++]=' '; //agregar espacio
    while(A[j]!='\0'){
        B[i]=A[j];
        j++;
        i++;
    }
    cout<<B;
}

int main(){
    char A[100], B[100];
    cout<<"ingrese cadena B: ";
    cin>>B;
    cout<<"ingrese cadena A: ";
    cin>>A;
    concatenar(A,B);
    return 0;
}