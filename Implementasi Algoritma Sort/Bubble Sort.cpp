#include <iostream>
#include <conio.h>

using namespace std;

int data[14];
int tmp;
int n;
	
void tukar (int a, int b)
{
	int h;
	h = data [b];
	data [b] = data [a];
	data [a] = h; 
}
	
void input ()
{
	cout << "Banyak Data Angka yang Ingin Diurutkan : ";
	cin >> n;
	cout << "--------------------------------------------------------------" << endl;
	for (int i=0; i<n; i++)
	{
		cout << "Data Angka ke-" << (i+1) << " : ";
		cin >> data [i];
		tmp = data [i];
	}
	cout << endl;
}
	
void tampil ()
{
	for (int i=0; i<n; i++)
	{
		cout << data [i] << " ";
	}
	cout << endl;
}
	
void bubble_sort ()
{
	for (int i=1; i<n; i++)
	{
		for (int j=n-1; j>=1; j--)
		{
			if (data[j]<data[j-1]) tukar (j, j-1);
		}
		tampil ();
	}
	cout << endl;
}
	
main ()
{
	cout << "--------------------------------------------------------------" << endl;
	cout << "========================= Data Angka =========================" << endl;
	cout << "--------------------------------------------------------------" << endl;
	input ();
	cout << "--------------------------------------------------------------" << endl;4
	cout << "                Proses Mengurutkan Data Angka                 " << endl;
	cout << "--------------------------------------------------------------" << endl;
	tampil ();
	bubble_sort ();
	cout << "--------------------------------------------------------------" << endl;
	
	getch ();
}
