/******
*ohjelman nimi: harjoitus 17
*tekij� Markus Malm
*Lyhyt kuvaus:
Muokkaa edellistä ohjelmaa siten, että edellä määriteltyä tietuetyyppiä
käytetään myäs kahden muun "koululaisen" tietojen tallentamiseen.
Näiden kahden muun koululaisen tiedot alustetaan ao. muuttujien
määrittelyn yhteydessä. Ainoastaan yhden koululaisen tiedot kysytään
käyttäjältä edellisen tehtävän tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusjärjestyksessä (pienimmästä suurimpaan) näytälle

*versio 1.0
*pvm: 12.11.2014
*/
#include <iostream>
using namespace std;
struct HNKT
{
	int kenka; 
	int posti;
	double matka;
	char etu[100];
	char suku[100];
	char osoite[100];
	
};
int main()
{
	HNKT henkilo1 = { 40, 40330, 1.5, "Mikael", "Berg", "Delffiinikatu 12" };
	HNKT henkilo2 = { 38, 84100, 5.2, "Pentti", "Koulupoika", "Koulukatu 12" };
	HNKT henkilo;
	cout << "Etunimi? ";
	cin >> henkilo.etu;
	cout << "Sukunimi? ";
	cin >> henkilo.suku;
	cin.get();
	cout << "Osoite? ";
	cin.get(henkilo.osoite, 100);
	cout << "Postinumero? ";
	cin >> henkilo.posti;
	cout << "Koulumatka? ";
	cin >> henkilo.matka;
	cout << "Kengannumero? ";
	cin >> henkilo.kenka;
	if (henkilo.matka < henkilo1.matka)
	{
		system("CLS");
		cout << "Nimi: " << henkilo.etu << " " << henkilo.suku << endl;
		cout << "Osoite: " << henkilo.osoite << endl;
		cout << "Postinumero: " << henkilo.posti << endl;
		cout << "Koulumatka: " << henkilo.matka << endl;
		cout << "Kengannumero: " << henkilo.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo1.etu << " " << henkilo1.suku << endl;
		cout << "Osoite: " << henkilo1.osoite << endl;
		cout << "Postinumero: " << henkilo1.posti << endl;
		cout << "Koulumatka: " << henkilo1.matka << endl;
		cout << "Kengannumero: " << henkilo1.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo2.etu << " " << henkilo2.suku << endl;
		cout << "Osoite: " << henkilo2.osoite << endl;
		cout << "Postinumero: " << henkilo2.posti << endl;
		cout << "Koulumatka: " << henkilo2.matka << endl;
		cout << "Kengannumero: " << henkilo2.kenka << endl;
	}
	else if (henkilo1.matka < henkilo.matka, henkilo.matka < henkilo2.matka)
	{
		system("CLS");
		cout << "Nimi: " << henkilo1.etu << " " << henkilo1.suku << endl;
		cout << "Osoite: " << henkilo1.osoite << endl;
		cout << "Postinumero: " << henkilo1.posti << endl;
		cout << "Koulumatka: " << henkilo1.matka << endl;
		cout << "Kengannumero: " << henkilo1.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo.etu << " " << henkilo.suku << endl;
		cout << "Osoite: " << henkilo.osoite << endl;
		cout << "Postinumero: " << henkilo.posti << endl;
		cout << "Koulumatka: " << henkilo.matka << endl;
		cout << "Kengannumero: " << henkilo.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo2.etu << " " << henkilo2.suku << endl;
		cout << "Osoite: " << henkilo2.osoite << endl;
		cout << "Postinumero: " << henkilo2.posti << endl;
		cout << "Koulumatka: " << henkilo2.matka << endl;
		cout << "Kengannumero: " << henkilo2.kenka << endl;
	}
	else if (henkilo.matka > henkilo2.matka)
	{
		system("CLS");
		cout << "Nimi: " << henkilo1.etu << " " << henkilo1.suku << endl;
		cout << "Osoite: " << henkilo1.osoite << endl;
		cout << "Postinumero: " << henkilo1.posti << endl;
		cout << "Koulumatka: " << henkilo1.matka << endl;
		cout << "Kengannumero: " << henkilo1.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo2.etu << " " << henkilo2.suku << endl;
		cout << "Osoite: " << henkilo2.osoite << endl;
		cout << "Postinumero: " << henkilo2.posti << endl;
		cout << "Koulumatka: " << henkilo2.matka << endl;
		cout << "Kengannumero: " << henkilo2.kenka << endl;
		cout << endl;
		cout << "Nimi: " << henkilo.etu << " " << henkilo.suku << endl;
		cout << "Osoite: " << henkilo.osoite << endl;
		cout << "Postinumero: " << henkilo.posti << endl;
		cout << "Koulumatka: " << henkilo.matka << endl;
		cout << "Kengannumero: " << henkilo.kenka << endl;
	}
	return 0;
}