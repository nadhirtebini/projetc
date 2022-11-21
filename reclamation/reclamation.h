#ifndef reclamation_H_INCLUDED
#define reclamation_H_INCLUDED

typedef struct
{
int id_rec ;
int nle_rec;
int nbv_rec;
char categ_rec [20];
char desc_rec [1000];
}reclamation;

int ajouter (reclamation rec , char * filename);
int modifier (int id_rec, reclamation nouv, char * filename);
int supprimer(int id_rec, char * filename);
reclamation chercher(int id_rec, char * filename);

#endif // POINT_H_INCLUDED
