#include <iostream>

using namespace std;


int suma_iteracion(int a[], int t){
    int suma=0;
    for (int i=0; i<t; suma+=a[i++]);
    return suma;
}

int suma_recursiva(int a[], int t){
    if (t==0){
        return a[t];
    }
    else
        return a[t-1] +suma_recursiva(a,t-2);
}

int main(){
    int t;
    cout<<"ingrese tamano del arreglo: ";
    cin>>t;
    cout<<"\n";
    int a[t];
    for (int i=0; i<t; i++)
        cin>>a[i];
    cout<<"la suma iterativa es: "<<suma_iteracion(a,t)<<"\n";
    cout<<"la suma recursiva es: "<<suma_recursiva(a,t);
    return 0;
}