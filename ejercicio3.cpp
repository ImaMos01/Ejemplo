#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}

int buble_sort(int a[], int b){ //usamoes el ordenamiento burbuja 
    for (int i = 0; i < b-1; i++)
        for (int j = 0; j < b-i-1; j++) 
            if (a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
            }
    return a[b];
}

void mostrar(int a[], int t){
    for(int i=0; i<t; i++)
        cout<<a[i]<<"\t";
}

int main(){
    int t, b;
    cout<<"ingrese tamano del arreglo: ";
    cin>>t;
    cout<<"\n";

    int a[t];
    for (int i=0; i<t; i++) //lenar el arreglo
        cin>>a[i];
    cout<<"arreglo: \n";
    mostrar(a,t);
    cout<<"\n";

    buble_sort(a,t);
    cout<<"ascendente: \n";
    mostrar(a,t);
    return 0;
}