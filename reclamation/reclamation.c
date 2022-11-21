
#include "reclamation.h"
#include<stdio.h>
int ajouter (reclamation rec , char * filename)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f," %d %d %d %s %s\n",rec.id_rec,rec.nbv_rec,rec.nle_rec,rec.categ_rec,rec.desc_rec);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id_rec, reclamation nouv, char * filename)
{
reclamation rec ;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if((f==NULL) || (f2==NULL))
return 0;
else
    {
while(fscanf(f,"%d %d %d %s %s\n",&rec.id_rec,&rec.nbv_rec,&rec.nle_rec,rec.categ_rec,rec.desc_rec)!=EOF)
{
if(rec.id_rec !=id_rec)
        fprintf(f2,"%d %d %d %s %s\n",rec.id_rec,rec.nbv_rec,rec.nle_rec,rec.categ_rec,rec.desc_rec);
else

  fprintf(f2,"%d %d %d %s %s\n",nouv.id_rec,nouv.nbv_rec,nouv.nle_rec,nouv.categ_rec,nouv.desc_rec);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int supprimer (int id, char * filename)
{
reclamation rec ;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if((f==NULL) || (f2==NULL))
return 0;
else
    {
while(fscanf(f,"%d %d %d %s %s",&rec.id_rec,&rec.nbv_rec,&rec.nle_rec,rec.categ_rec,rec.desc_rec)!=EOF)
{
if(rec.id_rec !=id)
        fprintf(f2,"%d %d %d %s %s\n",rec.id_rec,rec.nbv_rec,rec.nle_rec,rec.categ_rec,rec.desc_rec);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

reclamation chercher(int id_rec, char * filename)
{
reclamation rec; 
int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while((fscanf(f,"%d %d %d %s %s\n",&rec.id_rec,&rec.nbv_rec,&rec.nle_rec,rec.categ_rec,rec.desc_rec)!=EOF) && (tr==0))
{if(id_rec==rec.id_rec)
tr=1;
}
fclose(f);
if(tr==0)
rec.id_rec=-1;
}

return rec;

}
