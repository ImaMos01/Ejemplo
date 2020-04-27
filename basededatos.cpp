#include <iostream>
#include <conio.h>

using namespace std;

void llenar_matriz(int **&A, int m, int n){    //ejercicio 3
    A=new int *[m];
    for(int i=0; i<m; i++)
        A[i]=new int [n]; 
}

void completar_matriz(int **A, int m, int n){   //ejercicio 3
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"posicion "<<i<<j<<": ";
            cin>>*(*(A+i)+j);
        }
    }
}

void print_array(int **A, int m, int n){   //ejercicio 1
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
            cout<<*(*(A+i)+j)<<"\t"; 
        cout<<"\n";  
    } 
}

void calculate_average(int **A, int **B, int m, int n){ //ejercicio 2 
    int **C;
    llenar_matriz(C,m,n);
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++)
            *(*(C+i)+j)=*(*(A+i)+j)+*(*(B+i)+j);
    }
    print_array(C,m,n);
}

int main(){
    int **A, **B, m, n, f, c;                                                
    cout<<"ingresar numero de filas y columnas para la matrizA: ";
    cin>>m>>n;
    llenar_matriz(A,m,n);                                               //ejercicio 3
    completar_matriz(A,m,n);
    cout<<"matriz A: ";
    cout<<"\n";
    print_array(A,m,n);                                               //ejercicio 1
    cout<<"\n";

    cout<<"ingresar numero de filas y columnas para la matrizB: ";
    cin>>f>>c;
    llenar_matriz(B,f,c);                                               //ejercicio 3
    completar_matriz(B,f,c);                                            
    cout<<"matriz B: ";
    cout<<"\n";
    print_array(B,m,n);                                               //ejercicio 1
    cout<<"\n";
    

    if(m==f and n==c){
        cout<<"ejercicio 2: ";
        cout<<"\n";
        calculate_average(A,B,m,n);                                 //ejercicio 2
    }                                                             
        
    
    getch();
    return 0;
}
