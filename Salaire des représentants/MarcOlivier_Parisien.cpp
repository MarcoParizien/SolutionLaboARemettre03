/* Énoncé - contraintes

Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.

// But :Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.

PLAN TEST

		Ventes ($) par semaine	Salaire fixe	Commission	Salaire total
				5000$				250				375		625
				10 000$				250				750		1000
				-1				Vous avez quitté le programme

*/
// Auteur : Marc-Olivier Parisien
// Date : 2020-10-02

#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int venteBrute; // Valeur des ventes brutes réalisées par l'employé
	float montantCommission = 0; // Calcul de la commission selon le montant des ventes. Au début il n'a aucune commission de réalisée et on doit initialisé la variable
	float salaireTotal = 0; //Calcul du salaire total réalisé  par l'employé. salaireTotal= montantCommission + SALAIRE_HEBDO


	//Déclaration des constantes
	const int SALAIRE_HEBDO = 250; // le salaire hebdomadaire d'un employé est de 250 donc on met une constante au cas où il changerait
	const float TAUX_COMMISSION = 7.5; // Pourcentage de commission pour les ventes réalisées. Pour avoir à changer la valeur à une seule place
										//Le taux pourrait changer dans le futur donc on utilise une constante. Pour avoir à changer la valeur à une seule place

	//On demande le montant des ventes réalisé en une semaine
	cout << "Veuillez enter le montant des ventes réalisé cette semaine : ";
		cin >> venteBrute; // On stock la valeur dans la variable

		while (venteBrute != -1)
		{
			//On calcul le montant de la commission selon les ventes réalisées. montantCommission = ((venteBrute * TAUX_COMMISSION)/100)
			
			montantCommission = ((venteBrute * TAUX_COMMISSION) / 100);

			//Calcul du salaire total

			salaireTotal = montantCommission + SALAIRE_HEBDO;

			cout << "Votre montant en commission s'élève à : " << montantCommission << endl;

			cout << "Votre salaire hebdomadaire est de " << salaireTotal << endl;

			//On redemande le montant des ventes réalisé en une semaine pour réinitialisé la variable.
			cout << "Veuillez enter le montant des ventes réalisé cette semaine : ";
			cin >> venteBrute; // On stock la valeur dans la variable

		}

		cout << "Vous avez quitté le programme.";

	return 0;
}