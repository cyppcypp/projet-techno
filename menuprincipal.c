#include <stdio.h>
#include <stdlib.h>

void main()
{
    int choix;
    while (1)
    {

        printf("\n~~~~CHOIX D'UNE OPTION~~~~\n");
        printf("1) Reprendre une partie sauvegardee\n");
        printf("2) Demarrer une nouvelle partie\n");
        printf("3) Consulter l'ensemble des scores de tous les joueurs a chaque partie\n");
        printf("4) Consulter les regles du jeu\n");
        printf("5) Quitter le jeu\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            //reprendre une partie sauvegardee
            break;
        case 2:
            //demarer la partie: faire la fonction demarage du jeu ( case(fonction_demarrage) )
            break;
        case 3:
            //Points
            break;
        case 4:
            printf("1- Chacun des joueurs commence avec une main de 6 tuiles choisies aleatoirement. Les joueurs placent ensuite des tuiles pour marquer des points.\n");
            printf("\n2- Les tuiles peuvent etre placees soit horizontalement ou verticalement, mais elles doivent toujours etre en contact avec au moins une autre tuile.\n");
            printf("\n3- Les tuiles doivent etre placees de maniere a former des lignes de tuiles de la meme forme ou de la meme couleur. Par exemple, une ligne de tuiles rouges toutes en forme de carree, ou une ligne de tuiles en forme de triangle toutes de couleur bleue.\n");
            printf("\n4- Les joueurs marquent des points en creant des lignes de tuiles. Chaque tuile placee dans une ligne vaut un point, et chaque ligne complete de 6 tuiles vaut un bonus de 6 points supplementaires.\n");
            printf("\n5- Si un joueur ne peut pas placer de tuiles, il doit passer son tour. Le jeu se termine lorsqu'un joueur a pose toutes ses tuiles, ou lorsque la pioche est vide et qu'aucun joueur ne peut plus poser de tuile. Le joueur avec le plus de points gagne la partie.\n");
            printf("\n6- Il est important de noter que les points sont comptes a la fin de la partie, donc il est important de planifier ses coups pour marquer des points supplementaires.\n");
            printf("\n7- Enfin, il est possible de remplacer une tuile par une autre de sa main a tout moment, mais il faut la retirer.\n");
            break;
        case 5:
            printf("Vous avez quittez :(\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            return 0;
            break;


        }

    }

}
