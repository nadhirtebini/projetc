#ifndef reclamation_H_INCLUDED
#define reclamation_H_INCLUDED
#include <gtk/gtk.h>

typedef struct 
{
int jour_rec;
int mois_rec;
int annee_rec;
}date;
typedef struct
{
char id_rec [20] ;
date date_rec ;
char nle_rec [20];
char nbv_rec [20];
char categ_rec [20];
char desc_rec [1000];
}reclamation;

typedef struct
{
 int nb_reclamation ;
 int Id_lc;
}rec_liste;


typedef struct
{
char nom_l[20];
char prenom_l[20];
char prof_l[20];

int Id_lc;
char CIN_l[8];
date Date_l;
}l_elec;



void ajouter (reclamation rec , int ET,int OU);
void afficher_rec (GtkWidget *liste);
/*int modifier (int id_rec, reclamation nouv, char * filename);
int supprimer(int id_rec, char * filename);
reclamation chercher(int id_rec, char * filename);
int calculer (int Id_l,char * filename);*/


#endif // POINT_H_INCLUDED
