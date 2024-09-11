#include "IHM.h"
#include <iostream>
#include "Article.h"

using namespace std;


void IHM::afficherMenu() {
    cout << "1. Ajouter un article\n";
    cout << "2. Afficher les articles\n";
    cout << "3. Mettre à jour un article\n";
    cout << "4. Afficher le montant total HT du stock\n";
    cout << "5. Supprimer un article\n";
    cout << "6. Quitter le programme\n";
}


void IHM::gererMenu() {
    int choix;

    do {
        afficherMenu();
        cout << "Entrez votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            ajouterArticle();
            break;
        case 2:
            afficherArticles();
            break;
        case 3:
            mettreAJourArticle();
            break;
        case 4:
            afficherTotalStockHT();
            break;
        case 5:
            supprimerArticle();
            break;
        case 6:
            cout << "Quitter le programme.\n";
            break;
        default:
            cout << "Choix invalide.\n";
        }
    } while (choix != 6); 
}


void IHM::ajouterArticle() {
    string nom;
    double prixHT;
    int stock;

    cout << "Nom de l'article : ";
    cin >> nom;
    cout << "Prix HT : ";
    cin >> prixHT;
    cout << "Stock : ";
    cin >> stock;

    Article article(nom, prixHT, stock);
    gestion.ajouterArticle(article);
    cout << "Article ajouté.\n";
}


void IHM::afficherArticles() {
    gestion.afficherArticles();
}

void IHM::mettreAJourArticle() {
    string nom;
    double prixHT;
    int stock;

    cout << "Nom de l'article à mettre à jour : ";
    cin >> nom;
    cout << "Nouveau prix HT : ";
    cin >> prixHT;
    cout << "Nouveau stock : ";
    cin >> stock;

    gestion.modifierArticle(nom, prixHT, stock);
    cout << "Article mis à jour.\n";
}

void IHM::afficherTotalStockHT() {
    cout << "Total HT du stock : " << gestion.calculerTotalStockHT() << " EUR\n";
}


void IHM::supprimerArticle() {
    string nom;

    cout << "Nom de l'article à supprimer : ";
    cin >> nom;

    gestion.supprimerArticle(nom);
    cout << "Article supprimé.\n";
}
