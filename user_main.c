#include "user.h"
#include<stdio.h>
#include<string.h>
int main()
{

information inf1={"Ali","Beji",{15,8,1970},"0469782","M","Tunisienne","observateur","gauche",5,"BEJI_ALI","2654789"} ,inf2={"Mounia","Toumi",{25,3,1975},"0469147","F","Tunisienne","Electeur","milieu",9,"Toumi_Mounia","2654347"};

information inf= chercher("0469782","information.txt");
if(strcomp(inf.cin,"-1"==0))
printf("inexistant");
else
printf("%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,inf.dateu.jour,inf.dateu.mois,inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,inf.num,inf.loginu,inf.passe");

}

