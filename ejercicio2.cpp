#include <iostream> //invertir

using namespace std;

void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}

int invertir_recursiva(int a[], int t, int b){
    if(b==t/2){
        swap(a[b],a[(t-1)-b]);
        return a[b];
    }
    else{
        swap(a[b],a[(t-1)-b]);
        return invertir_recursiva(a,t,b+1);
    }
} 

int invertir_recursiva(int a[], int t, int b){
    if(b==(t-1)/2){
        swap(a[b],a[(t-1)-b]);
        return a[t];
    }
    else{
        return invertir_recursiva(a,t,b+1);
    }
}   

void mostrar(int a[], int t){
    for(int i=0; i<t; i++)
        cout<<a[i]<<"\t";
}

int main(){
    int t, b, d;
    cout<<"ingrese tamano del arreglo: ";
    cin>>t;
    cout<<"\n";
    int a[t];
    for (int i=0; i<t; i++) //lenar el arreglo
        cin>>a[i];

    cout<<"arreglo original: \n";
    mostrar(a,t);
    cout<<"\n";

    do{
        cout<<"(0)iteracion (1) recursivo: ";
        cin>>d;
        cout<<"\n";
        if(d==0){
            cout<<"con iteracion: \n";
            invertir_iteracion(a,t);
            mostrar(a,t);
            cout<<"\n";
        }
    
        else if(d==1){
            b=0;//para conservar el tamaño original
            cout<<"\ncon recursividad: \n";
            invertir_recursiva(a,t,b);
            mostrar(a,t);
            cout<<"\n";
        }
    }while(d<2);
    return 0;
}

