#ifndef FONCTIONS_H_
#define FONCTIONS_H_
typedef struct
{
char nom_ls[50];
char id_ls[50];
int cin1_ls;
int cin2_ls;
int cin3_ls;
int nb_cand_ls;
int j_ls;
int m_ls;
int a_ls;
} lse;

int ajouter(lse lv , char filename []);
int modifier(char id_ls[], lse nouv, char * filename);
int supprimer(char id_ls[], char * filename);
lse chercher(char id_ls[], char * filename);

#endif
