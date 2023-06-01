
//  PRIMER ESQUEMA

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//5x3
//repeticiones
//clases
//letras

int matriz[5][3];
int aleatorio (){
    int numero ;
    numero =1+(rand()%5);
    return numero;
}


void llenar_matriz(){
    int numero ;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        for (int j=0;j<3;j++){               
                numero=aleatorio();
                matriz[i][j]=numero;
        }
    }
}

void mostrar (){
    cout <<"MATRIZ"<<endl;
    for(int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }cout<<endl;
}}
void cambiar(int a){
    matriz[a-1][2]=a;
    mostrar();
}

int main()
{
    llenar_matriz();
    cout<<"    "<<endl;
    mostrar();
    cout<<"    "<<endl;
    int a=4;
    cambiar(a);

}