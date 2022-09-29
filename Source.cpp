#include <iostream>
#include <fstream>
#include <string>
#include "./json.hpp"

using json = nlohmann::json;
/*Exercice 1
* a) 11
* b) 149
* c) 170
* d) 204
*/

/*Exercice 2
* a) 00100010
* b) 01110111
* c) 1000 0000
* d) 0011 1110 0111
* e) 1 octet ne vaut que 255 maximum donc on a besoin d'en utiliser plusieurs
*/

/*Exercice 3
* a) 18 863
* b) 2227
* c) 3759
* d) 244 183

*/

/* Exercice 5
* a)557
* b) 416
* c) 452
* d)504
* * Une base octale
*/

/*Exercice 6*/
int main()
{
	std::ifstream pnj("PNJ.json");
	json data = json::parse(pnj);
	std::string nom = data.value("nom", "oops");
	std::string prenom = data.value("prenom", "oops");
	std::cout << "Prenom: "<<prenom << std::endl;
	std::cout << "Nom: " << nom << std::endl;

}