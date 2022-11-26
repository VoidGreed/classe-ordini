#include "libreria.h"
#include "calcoli.h"

void ordinamento_vettore(ordine ordi[],int n)
{
	bool swap;
	do{
		int i = 0, lastwap=0;
		swap = false;
		
		for (int j = n - 1; j > i; j--)
		{
			if (ordi[j].CF < ordi[j - 1].CF)
			{
				ordine temp = ordi[j - 1];
				ordi[j - 1] = ordi[j];
				ordi[j] = temp;
				swap = true;
				lastwap = j;
			}
		}
		
		i = lastwap;
	
	}while (swap);
}

int ricerca_ordine(ordine ordi[],int n,ordine nuovo_ordine[], int nmax)
{
	int k,count=0;
	string C, T; float S;
	cout << "Quante volte vuoi ricercare l'elemento?: ";
	cin >> k;
	cout << endl;

	for (int i = 0; i < k; i++)
	{
		cout<<"Codice Fiscale:";
		cin >> C;
		cout << "Tipo:";
		cin >> T;
		cout << "Costo:";
		cin >> S;

		for (int j = 0; j < n; j++)
		{
			if (ordi[j].CF == C)
			{
				if (ordi[j].tipo == T)
				{
					if(ordi[j].costo > S)
					{
						nuovo_ordine[count] = ordi[j];
						count++;
						cancella_ordine(ordi,j,n);
					}
				}
			}
		}

	}
	return count;
}
void cancella_ordine(ordine ordi[], int j, int n)
{
	for (j; j < n; j++)
	{
		ordi[j] = ordi[j+1];
	}
}
