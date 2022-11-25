#ifndef t_H_INCLUDED
#define t_H_INCLUDED
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
int nbT (int nbT ,char * filename);
#endif
