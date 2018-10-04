#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int i, n;
	float angka[100], total;
	
	cout << " PROGRAM MENGHITUNG RATA-RATA DARI SEJUMLAH ANGKA YANG DIMASUKAN "<<endl;
	cout << " BERAPA JUMLAH ANGKA YANG AKAN ANDA MASUKAN: ";cin>>n;
	
	for (i=0; i<n; i++)
	{
		cout << " MASUKAN ANGKA KE - " << i+1 << " : ";cin>>angka[i];
		total = total+angka[i];
	}
	cout << " NILAI RATA-RATA DARI SEJUMLAH ANGKA YANG ANDA MASUKAN  = " << total/n << endl;
	return 0;
}

