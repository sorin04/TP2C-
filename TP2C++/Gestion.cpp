#include "Gestion.h"
#include "Article.h"
#include <iostream>
using namespace std;



void Gestion::ajouterArticle(Article article) {
	articles.push_back(article);
	cout<< "Article ajouté.\n";

}
void Gestion::afficherArticles() {
	for (Article& article : articles) {
		cout << "Nom: " << article.getNom() << ", Prix HT: " << article.getPrixHT() << ", Stock: " << article.getStock() << std::endl;
	}
}
void Gestion::modifierArticle(string nom, double prixHT, int stock) {
	for (Article& article:articles) {
		if (article.getNom() == nom)
		{
			article.setPrixHT(prixHT);
			article.setStock(stock);
			cout<<"Article mis a jour.\n";
			return;

		}
		
	}
	cout << "Article non trouvé.\n";
		
	
}
void Gestion::supprimerArticle(string nom) {
		vector<Article> articlesRestants;


	for (size_t i = 0; i < articles.size(); ++i) {
		if (articles[i].getNom() != nom) {
			articlesRestants.push_back(articles[i]);
		}
	}
	articles = articlesRestants;

	if (articles.size() < articlesRestants.size()) {
		cout << "Article supprimé.\n";
	}
	else {
		cout << "Article non trouvé.\n";
	}
}
	double Gestion::calculerTotalStockHT() {
    double total = 0.0;
    for (Article& article : articles) {
        total += article.prixHT * article.stock;
    }
    return total;
}
