#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
     int jour, mois, annee ;
} date ;
typedef struct {
     char nometprenom_user[20];
     int cin_user;
     char role_user [100];
     date   date ;
     char genre_user[10];
     int num_bv_user;
     int vote_user;
     char nationalite_obs[10];
     char profession_obs[10];
     char appartenance_obs[10];
} utilisateur ;
int nbT (char *filename);
main()
{
 int x;
 x= nbT ("fileuser.txt");
 printf("le nombre des electeur est :%d",x);
 return 0;
}
int nbT (char *filename)
    FILE * f=fopen(char *filename, "r");
    while((fscanf(f,"%s %d %s %d %d %d %s %d %d %s %s %s \n",u.nometprenom_user,&u.cin_user,u.role_user,&u.date.jour,&u.date.mois,&u.date.annee,u.genre_user,&u.num_bv_user,&u.vote_user,u.nationalite_obs,u.profession_obs,u.appartenance_obs)!=EOF));
    {
       int x= strcmp(u.role_user,"electeur");
       if(x==0)
        nbT++;
        return x;
    }

