# include <stdio.h>
# include <stdlib.h>
# include "bibli.h"

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
           printf("%d",map[i][y]);
            
        }
        printf("\n");
    }

    
}    
int** generate(int** map, int tab_x, int tab_y){
    for( int i=0; i< tab_x;i++){
        for( int y=0; y< tab_y;y++){
            map[i][y]=0;
            
        }
        
    }
return map;
}



int main(){
    int tab_x; //taille du tableau en x
    int tab_y; // taille du tableau en y
   
    
    tab_x = 40;
    tab_y = 40;
    

    int** map;
    map = malloc ( tab_x * sizeof( int*));

    for(int i= 0; i< tab_x;i++){
        map[i] = malloc (tab_y * sizeof( int ));
    }
    map = generate(map,tab_x, tab_y); 
    printmap(map, tab_x, tab_y);
   
    for (int i=0; i<tab_x; i++){
        free(map[i]);
    }
    free(map);

    return 0;

}
