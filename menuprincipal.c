#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE_TAB

int choixMode()
{
    int mode=0;

    printf("Mode de jeu: Taper 1 pour le mode NORMAL ou 2 pour le mode DEGRADE\n");


    while(mode!=1 && mode!=2)
    {
        printf("Choisir le mode de jeu : ");
        scanf("%d", &mode);
    }
    printf("MODE : %d\n", mode);

    if(mode==1)
        printf("Le jeu est en mode NORMAL \n");

    else if(mode==2)
        printf("Le jeu est en mode DEGRADE \n");

    return mode;
}
int choixNbJoueur()
{
    int nbJoueur=0;

    printf("Nombre de Joueurs: 2,3 ou 4 ?\n");

    while(nbJoueur!=2 && nbJoueur!=3 && nbJoueur!=4)
    {
        printf("Combien de Joueurs: ");
        scanf("%d", &nbJoueur);
    }
    return nbJoueur;
}


void main()
{
    int choix=1;
    while (choix !=5)
    {
        //MENU
        printf("\n~~~~CHOIX D'UNE OPTION~~~~\n");
        printf("1) Reprendre une partie sauvegardee\n");
        printf("2) Demarrer une nouvelle partie\n");
        printf("3) Consulter l'ensemble des scores de tous les joueurs a chaque partie\n");
        printf("4) Consulter les regles du jeu\n");
        printf("5) Quitter le jeu\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        fflush(stdin);

        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            //reprendre une partie sauvegardee
            break;
        case 2:
            //demarer la partie: faire la fonction demarage du jeu ( case(fonction_demarrage) )
        {

            int nbJoueur;
            int mode;
            char tabNom[4][50];
            int i;

            mode=choixMode();
            nbJoueur=choixNbJoueur();

            for(i=0; i<nbJoueur; i++)
            {
                printf("Choisir nom du Joueur %d: ", i+1);
                scanf("%49s", tabNom[i]);
            }

            printf("Nombre de joueur %d \n",nbJoueur);
            for(i=0; i<nbJoueur; i++)
            {
                printf("Nom du Joueur :  %s\n", tabNom[i]);
            }
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");

            { //PLATEAU
                int tab[27][12] = {{0}};
                int i;
                int j;

                printf("  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
                for (i = 0; i<12; i++)
                {
                    printf("%d", i);
                    for(j = 0; j<27; j++)
                    {
                        printf(" ");
                        //if
                        //else
                        //print(" ");

                    }
                    printf("\n");
                }
                return ;

            }
        }
            return ;

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
            return;
            break;


        }

    }
    }


