

#include <iostream>
#include "libreria.h"
#include "in_out.h"
#include "calcoli.h"
using namespace std;

int main()
{
	int n,count;
	ordine ordi[NMAX],nuovo_ordi[NMAX];
	riempivettore(ordi, n);
	//stampa_ordini(ordi, n);
	ordinamento_vettore(ordi,n);
	stampa_ordini(ordi, n);
	count=ricerca_ordine(ordi,n,nuovo_ordi,NMAX);
	ordinamento_vettore(nuovo_ordi, count);
	stampa_ordini(nuovo_ordi, count);


	return 0;
}

