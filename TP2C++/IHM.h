#pragma once
#include "Gestion.h"

class IHM {
private:
	Gestion gestion;
	void afficherMenu();



public:
void supprimerArticle();
	void afficherTotalStockHT();
	void mettreAJourArticle();
	void afficherArticles();
	void ajouterArticle();
	void gererMenu();

	


};