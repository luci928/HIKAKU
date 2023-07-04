#include <iostream>
using namespace std;

int main(){
    int matriz[13][13];

    for(int i=0;i<13;i++){
        for(int j=0;j<5;j++){
            if(i==5 or i==6 or i==7 ){
                if(i==6 && j==2 ){
                    matriz[i][j]=2;
                }
                else{
                    matriz[i][j]=1;}
            }
            else{
                matriz[i][j]=0;}
        }
    }

    for(int i=0;i<13;i++){
        for(int j=0;j<5;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }



    return 0;
}