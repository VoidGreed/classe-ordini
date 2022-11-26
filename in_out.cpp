#include "libreria.h"
#include "in_out.h"

using namespace std;

void riempivettore(ordine ordi[], int& n_ordini)
{
	

	do {
		cout << "Quanti ordini vuoi inserire?" << endl;
		cin >> n_ordini;

		if (n_ordini > NMAX)
		{
			cout << "Inserire un numero di ordini inferiore a " << NMAX << endl;
		}

	} while ((n_ordini <= 0) || (n_ordini >= NMAX));

	for (int i = 0; i < n_ordini; i++)
	{
		ordi[i] = inserimentoordine();
	}
}

ordine inserimentoordine()
{
	ordine x;
	cout << "Inserisci cognome: " << endl;
	cin >> x.cognome;
	cout << "Inserisci il codice fiscale "<<endl;
	cin >> x.CF;
	cout << "Inserisci il tipo "<<endl;
	cin >> x.tipo;
	cout<<"Inserisci il costo dell'ordine"<<endl;
	cin >> x.costo;
	cout << "----------------------------------------------------------------" << endl;
	
	return x;
}

void stampa_ordini(ordine ordi[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cognome:" << endl;
		cout<< ordi[i].cognome << endl;
		cout << "Codice fiscale:" << endl;
		cout << ordi[i].CF << endl;
		cout << "Tipo:" << endl;
		cout << ordi[i].tipo << endl;
		cout << "Costo dell'ordine:" << endl;
		cout << ordi[i].costo << endl;
		cout << "----------------------------------------------------------------"<<endl;
	}
}
