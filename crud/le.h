#ifndef le_H_INCLUDED
#define le_H_INCLUDED
typedef struct
{
     int jour, mois, annee ;
} Date ;
typedef struct {
     char nom_l[20], prenom_l[20], prof_l[20];
     int Id_l;
     char CIN_l[100];
     Date   Date_l ;
} l_elec ;

int ajouter( l_elec l, char *filename);
int modifier(int Id_l, l_elec l_nouv, char *filename);
/*int supprimer(char *filename, int  Id_l);*/
l_elec chercher(char *filename, int  Id_l);
#endif
