#include <iostream> //invertir

using namespace std;

int invertir_iteracion(int a[], int t){
    int c=0;
    for (int i=0; i<t/2; i++){
        c=a[i];
        a[i]=a[(t-1)-i];
        a[(t-1)-i]=c;
    }
    return a[t];
}

int invertir_recursiva(int a[], int t, int b){
    int c=0;
    if(t==t/2){
        c=a[t];
        a[t]=a[(b-1)-t];
        a[(b-1)-t]=c;
        return a[t];
    }
    else{
        return invertir_recursiva(a,t-1,b);
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
            b=t; //para conservar el tamaño original
            cout<<"\ncon recursividad: \n";
            invertir_recursiva(a,t,b);
            mostrar(a,t);
            cout<<"\n";
        }
    }while(d<2);
    return 0;
}

