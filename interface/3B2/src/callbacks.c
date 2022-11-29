#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "reclamation.h"


int ET=0;
int OU=0;

void
on_affi2_rec_clicked                   (GtkButton       *objet,
                                        gpointer         user_data)
{
reclamation rec;
GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
GtkWidget *treeview;

fenetre_ajout = lookup_widget(objet,"reclamation1");

gtk_widget_hide(fenetre_ajout);
fenetre_afficher=lookup_widget(objet,"reclamation");
fenetre_afficher=create_reclamation();

gtk_widget_show(fenetre_afficher);


}


void
on_aj2_rec_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget*id_rec;
GtkWidget*jour_rec;
GtkWidget*mois_rec;
GtkWidget*annee_rec;
GtkWidget*nle_rec;

GtkWidget*desc_rec;
GtkWidget*fenetre_ajout;
reclamation rec ;

fenetre_ajout=lookup_widget (objet,"reclamation1");
id_rec = lookup_widget (objet,"id2_rec" );
jour_rec = lookup_widget (objet,"jour_rec" );
mois_rec = lookup_widget (objet,"mois_rec" );
annee_rec = lookup_widget (objet,"annee_rec" );
nle_rec = lookup_widget (objet,"nle_rec" );
desc_rec = lookup_widget (objet,"desc_rec" );


strcpy(rec.id_rec,gtk_entry_get_text(GTK_ENTRY(id_rec)));
rec.date_rec.jour_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour_rec));
rec.date_rec.mois_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois_rec));
rec.date_rec.annee_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee_rec));
strcpy(rec.nle_rec,gtk_combo_box_get_active_text (GTK_COMBO_BOX(nle_rec)));
strcpy(rec.desc_rec,gtk_entry_get_text(GTK_ENTRY(desc_rec)));

ajouter (rec,ET,OU);
}


void
on_urg_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=1;
}


void
on_nbv_3_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=3;
}


void
on_nbv1_rec_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON (togglebutton)))
 OU=1;
}


void
on_nbv_2_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=2;
}


void
on_nbv_4_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=4;
}


void
on_tab_rec_row_activated               (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_rech_rec_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_aj_rec_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mod_rec_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_sup_rec_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_moy_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=2;
}


void
on_fai_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=3;
}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_tableau_rec_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
	gchar* id_rec;
	gint * jour_rec;
	gint * mois_rec;
	gint * annee_rec;
	gchar* nle_rec;
	gchar* nbv_rec;
	gchar* categ_rec;
	gchar* desc_rec;
	reclamation rec;
	
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
		gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id_rec,1,&jour_rec,2,&mois_rec,3,&annee_rec,4,&nle_rec,5,&nbv_rec,6,&categ_rec,7,&desc_rec,-1);
		strcpy(rec.id_rec,id_rec);
		rec.date_rec.jour_rec=jour_rec;
		rec.date_rec.mois_rec=mois_rec;
		rec.date_rec.annee_rec=annee_rec;
		strcpy(rec.nle_rec,nle_rec);
		strcpy(rec.nbv_rec,nbv_rec);
	        strcpy(rec.categ_rec,categ_rec);
		strcpy(rec.desc_rec,desc_rec);
		afficher_rec(treeview);
}
}


void
on_ajouter_rec_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_modifier_rec_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimer_rec_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_rechercher_rec_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}

