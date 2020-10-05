/* Énoncé - contraintes

Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.

PLAN TEST

reponse					résultat
101						Ceci n'est pas un nombre entre 1 et 100. Veuillez réessayer, il vous reste (nbChance--) chances
-1						Ceci n'est pas un nombre entre 1 et 100. Veuillez réessayer, il vous reste (nbChance--) chances
réponse = à iRandom		Bravo! Votre réponse est bien égal au nombre aléatoire. 			




*/
// Auteur : Marc-Olivier Parisien
// Date : 2020-10-02

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// Déclaration des variables
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int reponse; // Réponse de l'utilisateur. Je fais l'hypothèse que la réponse sera -1

	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	int nbChance = 4; //Je met le nombre de chance à 4 puisqu'avant la boucle je demande à l'utilisateur d'entrer pour une première fois un nombre entre 1 et 100

	// On demande à l'utilisateur de rentrer un nombre entre 1 et 100.
	cout << "Veuillez entrer une nombre entre 1 et 100, vous avez 5 chances: ";
	cin >> reponse;

		while (nbChance >= 1 && reponse != iRandom )

		{
			if (reponse < 0 || reponse > 100)
			{
				cout << "Ceci n'est pas un combre entre 1 et 100. Veuiilez recommencer, il vous reste " << nbChance << " chance(s): ";
				cin >> reponse;
			}
			else
			{
				cout << "Veuillez entrer une nombre entre 1 et 100, il vous reste " << nbChance << " chance(s): ";
				cin >> reponse;
			}

			nbChance--;
			
				if (nbChance == 0)
			{
				cout << "Désolé il ne vous reste plus de chances.";
			}
			
		}
	
		if (reponse == iRandom)
		{
			cout << "Bravo le nombre choisi est bien égal au nombre aléatoire.";

			return 0;
		}
}
