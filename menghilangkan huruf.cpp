#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
    char frase[50];
    int i, j,k;
    cout<<"Masukkan Kata    : ";
    cin>>frase;
    cout<<"--------------------------------------------------"<<endl;
    i=strlen(frase);
    i--;
    cout<<"keluaran    :"<<endl;
    for(j=i;j>=0;j--)
    {
    	for(k=0;k<=i;k++)
       	{cout<<frase[k];}
       	cout << endl;
       	i--;
    }
    getch();
    return 0;
}

