#pragma once
using namespace std;
#include <string>;
class Article
{
public:
	string nom;
	double prixHT;
	int stock;

	Article(string n, double prix, int s);
		string getNom() const { return nom; }
		double getPrixHT() const { return prixHT; }
		int getStock() const { return stock; }


		void setPrixHT(double prix) { prixHT = prix; }
		void setStock(int stock) { stock = stock; }

	


};
