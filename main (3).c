#include "lse.h"
#include<stdio.h>
#include<string.h>
int main()
{

char id_ls[50];
int x;
char filename[50]="fich.txt";
int ajou,mod,sup;
char* filenam;

filenam="fich.txt";

lse lv1={"amin", "1232452",12707243,12707244,12707211,5,30,01,2001} ,lv2={"sousou", "1232652",12709243,12707544,12707211,5,21,01,2011}, lv3={"amin", "55555555",12700243,12707144,12707111,9,10,01,2001};

printf ("donner id \n");
scanf("%s",id_ls);

ajou = ajouter(lv1 , filename );
if (ajou==1)
printf("ajout avec succes\n");
else
printf("erreur\n");


sup=supprimer(id_ls, "fich.txt");

if (sup==1)
printf("supression avec succes\n");



mod=modifier(id_ls, lv3, "fich.txt");


if (mod==1)
printf("modif avec succes\n");


lse lv = chercher(id_ls,"fich.txt");
x=strcmp(lv.idb,"-1");
if(x==0)
printf("inexistant");
else
printf("%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,lv.cin1_ls,lv.cin2_ls,lv.cin3_ls,lv.nb_cand_ls,lv.j_ls,lv.m_ls,lv.a_ls);
}
