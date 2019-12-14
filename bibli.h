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
    chemin_s* route[1000]; 
}pile_s;


int saveroad(chemin_s* route,int pos_x, int pos_y);
// return 0 or 1 for SUCESS OR FAIL
int empty(pile_s* mapile);
//return 0 or 1 for SUCESS OR FAIL
void add(pile_s* mapile, chemin_s* chemin );
chemin_s* backward(pile_s* mapile);


#endif



