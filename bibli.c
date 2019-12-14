#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "bibli.h"





int empty(pile_s* mapile){
    if( mapile->lastItem == 0){
        printf("Lifo Was Empty");
        return 1; 
    }
    else{
        return 0;
    }

}
void add( pile_s* mapile, chemin_s* chemin){
    //Ajout d'un item dans la pile 
    mapile->lastItem++;
    mapile->route[mapile->lastItem] = chemin;


}
