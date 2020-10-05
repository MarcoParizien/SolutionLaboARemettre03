/* �nonc� - contraintes

Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
L�utilisateur a un maximum de 5 chances. Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
nombre.

PLAN TEST

reponse					r�sultat
101						Ceci n'est pas un nombre entre 1 et 100. Veuillez r�essayer, il vous reste (nbChance--) chances
-1						Ceci n'est pas un nombre entre 1 et 100. Veuillez r�essayer, il vous reste (nbChance--) chances
r�ponse = � iRandom		Bravo! Votre r�ponse est bien �gal au nombre al�atoire. 			




*/
// Auteur : Marc-Olivier Parisien
// Date : 2020-10-02

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// D�claration des variables
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	int reponse; // R�ponse de l'utilisateur. Je fais l'hypoth�se que la r�ponse sera -1

	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	int nbChance = 4; //Je met le nombre de chance � 4 puisqu'avant la boucle je demande � l'utilisateur d'entrer pour une premi�re fois un nombre entre 1 et 100

	// On demande � l'utilisateur de rentrer un nombre entre 1 et 100.
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
				cout << "D�sol� il ne vous reste plus de chances.";
			}
			
		}
	
		if (reponse == iRandom)
		{
			cout << "Bravo le nombre choisi est bien �gal au nombre al�atoire.";

			return 0;
		}
}
