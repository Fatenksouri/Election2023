#ifndef FONCTIONS_H_
#define FONCTIONS_H_
typedef struct
{
char idb[50];
char ida[50];
char salle[50];
int capacite;
int nbo;
int dispo;
} bureauv;

int ajouter(bureauv bv , char filename []);
int modifier(char id[], bureauv nouv, char * filename);
int supprimer(char id[], char * filename);
bureauv chercher(char id[], char * filename);

#endif
