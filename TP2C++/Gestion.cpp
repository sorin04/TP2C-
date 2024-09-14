#include "Gestion.h"
#include <iostream>


void Gestion::ajouterArticle(Article article) {
	articles.push_back(article);
	std::cout<< "Article ajouté.\n";

}
void Gestion::afficherArticles() {
	for (Article& article : articles) {
		std::cout << "Nom: " << article.nom << ", Prix HT: " << article.prixHT << ", Stock: " << article.stock << std::endl;
	}
}
void Gestion::modifierArticle(std::string nom, double prixHT, int stock) {
	for (Articles& article::articles) {
		if (article.nom == nom)
		{
			article.prixHT = prixHT;
			article.stock = stock;
			cout<<"Article mis a jour.\n";
			return;

		}
		

	}
	std::cout << "Article non trouvé.\n";

	void Gestion::supprimerArticle(std::string nom) {
		for (auto it = articles.begin(); it != articles.end(); ++it) {
			if (it->nom == nom) {
				articles.erase(it);
				std::cout << "Article supprimé.\n";
				return;
			}
		}
		std::cout << "Article non trouvé.\n";
	}
	double Gestion::calculerTotalStockHT() {
    double total = 0.0;
    for (Article& article : articles) {
        total += article.prixHT * article.stock;
    }
    return total;
}
}