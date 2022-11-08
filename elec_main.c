#include "ges_elec.h"
#include<stdio.h>
int main()
{
Election e1={"123456",{02,05,2022},"Ghazela","Ariana","52673",16};
Election e2={"789101",{03,05,2022},"Ariana Soghra","Ariana","12345",18};
Election e= chercher("12345678", * "ges_elec.txt");
if(e.identifiant==NULL)
printf("inexistant");
else
printf("%s %d %d %d %s %s %s %d\n",e.identifiant, e.dateElec.jour, e.dateElec.mois, e.dateElec.annee, e.adresse, e.municipalite, e.nb_hab, e.nb_cons);
}
