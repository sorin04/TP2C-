#pragma once
#include "Article.h"
#include <vector>


class Gestion {
public:
	vector<Article>articles;

	void ajouterArticle(Article article);
	void afficherArticles();
	void modifierArticle(std::string nom, double prixHT, int stock);
	void supprimerArticle(std::string nom);
	double calculerTotalStockHT();

	
};