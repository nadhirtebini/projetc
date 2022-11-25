#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "t.h"
int nbT (int nbT, char * filename)
{
    utilisateur u;
   
   

    FILE * f=fopen(filename, "r");
    while((fscanf(f,"%s %d %s %d %d %d %s %d %d %s %s %s \n",u.nometprenom_user,&u.cin_user,u.role_user,&u.date.jour,&u.date.mois,&u.date.annee,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.profession_obs,u.appartenance_obs)!=EOF));
    {
       int x= strcmp(u.role_user,"electeur");
      if(x==0)
        nbT++;
    }
    
    fclose(f);
    return nbT ;
    }
