#include <stdio.h>
#include <stdlib.h>
#include "parcoure.h"
#include "bibli.h"


// on veut pouvoir bouger
int move(pile_s* mapile, int** map){
    if ( empty(mapile)==1){
        chemin_s chemin;
        chemin->lp =0;
        chemin->pos_x=1;
        chemin-> pos_y=1;
        add( mapile , chemin );
    }
    else {
        chemin_s* chemin;
        chemin =  mapile->route[mapile->lastItem];
        if(map[chemin->pos_x+1][chemin-> pos_y ] == 0 ){
            

        }
        


}
