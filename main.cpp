#include <iostream>
#include "Labirinto.h"
using namespace std;

int main(){
    char labirinto[5][5] ;

       
construirMapa(labirinto);
    Rato rato;
    
    procurarQueijo(labirinto, rato.posX, rato.posY,rato.deOndeVeio, rato.temQueijo);

}
