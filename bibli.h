#ifndef BIBLI_H
#define BIBLI_H
    
typedef struct chemin_t{
    int lp;
    //Je vais stocker le chemin là:
    int pos_x;
    int pos_y;
    
}chemin_s;

typedef struct pile_t{
    int lastItem;
    chemin* route[]; 
}pile_s;



int saveroad(chemin_s* route,int pos_x, int pos_y);
// return 1 or 0 for SUCESS OR FAIL
int empty(pile_s* mapile);
//return 1 or 0 for SUCESS OR FAIL
void add(pile_s* mapile, int pos_x, int pos_y );
chemin_s* backward(pile_s* mapile)


#endif



