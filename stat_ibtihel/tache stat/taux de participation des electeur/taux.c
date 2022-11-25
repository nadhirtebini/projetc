#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "taux.h"
float TPE (char *fileuser)
{
    utilisateur u;
    int nbT=0;
    int nbv=0;
    float taux;
    
    
    FILE * f=fopen(fileuser, "r");
    if (f!=NULL)
    {
    while(fscanf(f,"%s %d %s %d %d %d %s %d %d %s %s %s \n",u.nometprenom_user,&u.cin_user,u.role_user,&u.date.jour,&u.date.mois,&u.date.annee,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.profession_obs,u.appartenance_obs)!=EOF)
    {
     int x;
     x=strcmp(u.role_user,"electeur");
      if(x==0)
      {
        nbT++;
        
      if(u.vote_user!=-1)
      
        nbv++;
        
    }
    }
    }
    
     taux=(float)nbv/nbT;

    fclose(f);
    return taux ;
}
