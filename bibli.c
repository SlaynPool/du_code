#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "bibli.h"

int customrand(){
    static int i;
    i = 0;
    if (i == 0 ) {
        srand(time(NULL));
        i=1;
    }
    return (rand());

}



int empty(pile_s* mapile){
    if( mapile->lastItem == 0){
        printf("Lifo Was Empty");
        return 1; 
    }
    else{
        return 0;
    }

}
void add( pile_s* mapile, int pos_x, int pos_y){
    //Ajout d'un item dans la pile 
    mapile->lastItem++;
    mapile->route[mapile->lastItem] = malloc(sizeof (chemin_s));


}
