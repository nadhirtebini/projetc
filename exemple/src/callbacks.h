#include <gtk/gtk.h>


void
on_tableau_row_activated               (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_rechercher_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_nbv_4_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_nbv_3_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_nbv_2_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_nbv_1_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_urg_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_moy_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_fai_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ajouter2_rec_clicked                (GtkButton       *objet,
                                        gpointer         user_data);

void
on_afficher_rec_clicked                (GtkButton       *objet,
                                        gpointer         user_data);
