#ifndef reclamation_H_INCLUDED
#define reclamation_H_INCLUDED

typedef struct 
{
int jour_rec;
int mois_rec;
int annee_rec;
}date;
typedef struct
{
int id_rec ;
date date_rec ;
int nle_rec;
int nbv_rec;
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
