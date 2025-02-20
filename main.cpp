#include <iostream>
using namespace std;

int main() {
float n, i, imin, min;
cout << "Quanti atleti ci sono in competizione?" << endl;
cin >> n;
string nomi[n], nazionali[n];
float tempo[n];
i=0;
while (i<n)
{
    cout << "Qual è il nome dell'atleta?" << endl;
    cin >> nomi[i];
    cout << "Qual è la nazione dell'atleta?" << endl;
    cin << nazionali[i];
    cout << "Qual è il tempo dell'atleta?" << endl;
    cin >>tempo[i];
    i=i+1;
}
i=0;
while (i<n)
{
   cout<<"Gli atleti sono: nome " << nomi[i] << " nazione " << nazionali[i] << " tempo " << tempo[i] << endl;
   i=i+1;
}
i=0;
while (i<n)
{
    if(i=0)
    {
        min=tempo[i];
        imin=i;
    }
    else 
    if (min>tempo[i])
    {
        min=tempo[i];
        imin=i;
    }
    i=i+1;
}
cout << "L'atleta vincitore è " << nomi[imin] << " della nazione " << nazionali[imin] << " con il tempo " << tempo[imin] << endl;



}


