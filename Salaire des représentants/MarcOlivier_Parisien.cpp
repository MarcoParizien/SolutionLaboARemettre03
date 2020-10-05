/* �nonc� - contraintes

Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.

// But :D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.

PLAN TEST

		Ventes ($) par semaine	Salaire fixe	Commission	Salaire total
				5000$				250				375		625
				10 000$				250				750		1000
				-1				Vous avez quitt� le programme

*/
// Auteur : Marc-Olivier Parisien
// Date : 2020-10-02

#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int venteBrute; // Valeur des ventes brutes r�alis�es par l'employ�
	float montantCommission = 0; // Calcul de la commission selon le montant des ventes. Au d�but il n'a aucune commission de r�alis�e et on doit initialis� la variable
	float salaireTotal = 0; //Calcul du salaire total r�alis�  par l'employ�. salaireTotal= montantCommission + SALAIRE_HEBDO


	//D�claration des constantes
	const int SALAIRE_HEBDO = 250; // le salaire hebdomadaire d'un employ� est de 250 donc on met une constante au cas o� il changerait
	const float TAUX_COMMISSION = 7.5; // Pourcentage de commission pour les ventes r�alis�es. Pour avoir � changer la valeur � une seule place
										//Le taux pourrait changer dans le futur donc on utilise une constante. Pour avoir � changer la valeur � une seule place

	//On demande le montant des ventes r�alis� en une semaine
	cout << "Veuillez enter le montant des ventes r�alis� cette semaine : ";
		cin >> venteBrute; // On stock la valeur dans la variable

		while (venteBrute != -1)
		{
			//On calcul le montant de la commission selon les ventes r�alis�es. montantCommission = ((venteBrute * TAUX_COMMISSION)/100)
			
			montantCommission = ((venteBrute * TAUX_COMMISSION) / 100);

			//Calcul du salaire total

			salaireTotal = montantCommission + SALAIRE_HEBDO;

			cout << "Votre montant en commission s'�l�ve � : " << montantCommission << endl;

			cout << "Votre salaire hebdomadaire est de " << salaireTotal << endl;

			//On redemande le montant des ventes r�alis� en une semaine pour r�initialis� la variable.
			cout << "Veuillez enter le montant des ventes r�alis� cette semaine : ";
			cin >> venteBrute; // On stock la valeur dans la variable

		}

		cout << "Vous avez quitt� le programme.";

	return 0;
}