#include <stdio.h>
#include <stdlib.h>
#include "bibli.h"
/*
 * #ifndef BIBLI_H
 * #define BIBLI_H
 * typedef struct chemin_t{
 *     int lp;
 *         //Je vais stocker le chemin là:
 *             int** way;
 *             }chemin;
 *             void saveroad(chemin* route,int pos_x, int pos_y);
 *
 *
 *             #endif
 */
/*    
void saveroad(chemin_s* route, int pos_x, int pos_y){
    Si j'arrive ici, je considère donc que j'ai eu le droit de bouger.
    Non on va s'amuser: On va empiler les etapes, au moins, on pourra faire demitour
    

}*/
int empty(pile_s* mapile){
    if( mapile.lastItem == 0){
        printf("Lifo Was Empty");
        return 1 
    }
    else{
        return 0
    }

}
void add( pile_s* mapile, int pos_x, int pos_y){
    //Ajout d'un item dans la pile 
    mapile.lastItem++;
    mapile.route[lastItem] = malloc( chemin_s);


}
