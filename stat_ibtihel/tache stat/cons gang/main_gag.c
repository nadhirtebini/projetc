#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
#include "gag.h"
void main()
{
    int l;
    LISTE  t[100];
    LISTE  le_gag [100];
    int n,i,j,nb_h,nb_C;
    printf("Donner la liste :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("donnez le nombre des conseiller  a chaque liste  %d:\n",i+1);
       scanf("%d %d",&t[i].NUM_l,&t[i].nb_C);
    }
    printf("donner le nombre de habitant =%d \n",nb_h);
    scanf("%d",&nb_h);
     l =le_gagnant(  le_gag, nb_h , t );

}

