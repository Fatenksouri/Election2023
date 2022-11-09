#include "lse.h"
#include<stdio.h>
#include<string.h>
int ajouter(lse ls , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d %d %d %d %d \n",ls.nom_ls,ls.id_ls,ls.cin1_ls,ls.cin2_ls,ls.cin3_ls,ls.nb_cand_ls,ls.j_ls,ls.m_ls,ls.a_ls);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char id_ls[], lse nouv, char * filename)
{
lse lv;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,&lv.cin1_ls,&lv.cin2_ls,&lv.cin3_ls,&lv.nb_cand_ls,&lv.j_ls,&lv.m_ls,&lv.a_ls) !=EOF)
{
if(strcmp(lv.id_ls,id_ls)!=0)
        fprintf(f2,"%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,lv.cin1_ls,lv.cin2_ls,lv.cin3_ls,lv.nb_cand_ls,lv.j_ls,lv.m_ls,lv.a_ls);
else

  fprintf(f2,"%s %s %d %d %d %d %d %d %d\n",nouv.nom_ls,nouv.id_ls,nouv.cin1_ls,nouv.cin2_ls,nouv.cin3_ls,nouv.nb_cand_ls,nouv.j_ls,nouv.m_ls,nouv.a_ls);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(char id_ls[], char * filename)
{
lse lv;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,&lv.cin1_ls,&lv.cin2_ls,&lv.cin3_ls,&lv.nb_cand_ls,&lv.j_ls,&lv.m_ls,&lv.a_ls)!=EOF)
{
if(strcmp(lv.id_ls,id)!=0)
        fprintf(f2,"%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,lv.cin1_ls,lv.cin2_ls,lv.cin3_ls,lv.nb_cand_ls,lv.j_ls,lv.m_ls,lv.a_ls);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

lse chercher(char id_ls[], char * filename)
{
lse lv; int tr=0;
char c[20] = "-1" ;
int x ;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d \n",lv.nom_ls,lv.id_ls,&lv.cin1_ls,&lv.cin2_ls,&lv.cin3_ls,&lv.nb_cand_ls,&lv.j_ls,&lv.m_ls,&lv.a_ls)!=EOF && tr==0)
{
x=strcmp(id_ls,lv.id_ls);
if(x==0)
tr=1;
}
}
if(tr==0)

strcpy (lv.id_ls,c);


return lv;

}
