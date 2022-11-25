#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
#include "gag.h"
int  le_gagnant( LISTE le_gag [],  int nb_h, LISTE t [] )
{
int nb_C;
if(nb_h=5000) nb_C=10;
else if ((nb_h>=5001 ) && (nb_h<10000)) nb_C=12;
else if ((nb_h>=10001 ) && (nb_h<25000)) nb_C=16;
else if ((nb_h>=25001 ) && (nb_h<50000)) nb_C=22;
else if ((nb_h>=50001 ) && (nb_h<100000)) nb_C=30;
else if ((nb_h>=100001 ) && (nb_h<500000)) nb_C=40;


while(nb_C>0)
{
int i;
if(nb_C>= t[i].nb_C)
{
    nb_C = nb_C - t[i].nb_C;
    le_gag [i]=t[i];
    i++;
}
else
{
   le_gag [i]=t[i];

}
}
return nb_h ;
}
