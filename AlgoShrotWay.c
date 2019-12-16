# include <stdio.h>
# include <stdlib.h>
# include "bibli.h"
# include "parcoure.h"
# include <time.h>

/*T[X][Y] 	 Signification 
 	-1 		 "case bloquée par un obstacle" 
 	0 		 "case libre non encore traversée" 
 	r>0 		 "case libre traversée au pas "r" 
 	-2 		 "case du segment de chemin déjà tracée.
 *
 */



void printmap( int** map, int tab_x , int  tab_y){
    for( int i=0; i< tab_x;i++){
        for( int y=0; y< tab_y;y++){
           if( map[i][y] == -1 ){
                printf("|");
           }
           else {
                printf("%d",map[i][y]);
           }
        }
        printf("\n");
    }

    
}    
int** generate(int** map, int tab_x, int tab_y){
    for( int i=0; i< tab_x;i++){
        for( int y=0; y< tab_y;y++){

            // pour me simplifier la vie les bordures du labyrinthe seront en faite des obstacles 
            if ( i == 0 || i== tab_x-1 ) {
                map [i][y] = -1;
            }
            else if (y==0 || y == tab_y-1){
                    map[i][y] = -1;
            }
            else{ 
                if( rand()%10 <= 8 ){ // generation d'obstacle 30 % de chance d'avoir une case à obstacle
                map[i][y]=0;
                }
                else{
                    map[i][y]=-1;
                }
            }
        }
    }     
return map;
}
// on fera juste bougé la fourmi ici
// elle aura donc besoin de la map  vc



int main(){
    int tab_x; //taille du tableau en x
    int tab_y; // taille du tableau en y
    
    tab_x = 60;
    tab_y = 60;
    
    srand(time(NULL));

    int** map;
    map = malloc ( tab_x * sizeof( int*));

    for(int i= 0; i< tab_x;i++){
        map[i] = malloc (tab_y * sizeof( int ));
    }
    map = generate(map,tab_x, tab_y); 
    printmap(map, tab_x, tab_y);
    //Pour parcourrir le tableau on considère le point de depart en 1,1 
    //et le point d'arriver tab_x-1 tab_y-1 soit l'exact opposé 
    






    for (int i=0; i<tab_x; i++){
        free(map[i]);
    }
    free(map);

    printf( "rand %d ", rand());

    printf( "1: rand %d ", rand());

    return 0;

}
