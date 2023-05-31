#include <iostream>
#include <vector>
#include "ficha.h"
#ifndef TABLERO_H_
#define TABLERO_H_



class tablero{
    private: 
       char matriz[5][8];
    public: 
       tablero(){
        for(int i=0;i<5;i++){
            for(int j=0;j<8;j++){
                if(j==3){
                    matriz[i][j]=0;}
                if(i==2 && j==3){
                    matriz[i][j]='?';}          
                else{
                    if((i==0 && j==0)||(i==0 && j==1)||(i==0 && j==2)){
                        matriz[i][j] ='a';
                    }else if((i==0 && j==4)||(i==0 && j==5)||(i==0 && j==6)){
                        matriz[i][j]= '1';
                    }else if ((i==1 && j==0)||(i==1 && j==1)||(i==1 && j==2)){
                        matriz[i][j] ='b';
                    }else if((i==1 && j==4)||(i==1 && j==5)||(i==1 && j==6)){
                        matriz[i][j]= '2';
                    }else if ((i==2 && j==0)||(i==2 && j==1)||(i==2 && j==2)){
                        matriz[i][j] ='c';  
                    }else if((i==2 && j==4)||(i==2 && j==5)||(i==2 && j==6)){
                        matriz[i][j]= '3';
                    }else if ((i==3 && j==0)||(i==3 && j==1)||(i==3 && j==2)){
                        matriz[i][j] = 'd';
                    }else if((i==3 && j==4)||(i==3 && j==5)||(i==3 && j==6)){
                        matriz[i][j]= '4';
                    }else if ((i==4 && j==0)||(i==4 && j==1)||(i==4 && j==2)){
                        matriz[i][j] ='e'; 
                    }else if((i==4 && j==4)||(i==4 && j==5)||(i==4 && j==6)){
                        matriz[i][j]= '5';
                    }
            } 
        }
        }
        
            for(int i=0;i<5;i++){
                for(int j=0;j<8;j++){
                    std::cout<<matriz[i][j]<<"\t";
                }
                std::cout<<std::endl;
            }
        
       }
    };
    #endif