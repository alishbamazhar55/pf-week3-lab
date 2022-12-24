#include <iostream> 
using namespace std;
main()
{
string name;
int matric;
int intermediate;
int ecat;
int pmatric;
int pintermediate;
int pecat;
int wematric;
int weintermediate;
int weecat;
float aggregate;
cout << "enter name: " ;
cin >> name; 
cout << "enter matric: "; 
cin >> matric;
cout << "enter intermediate: ";
cin >> intermediate; 
cout << "enter ecat: ";
cin >> ecat;
pmatric=(matric/1100.0)*100;
pintermediate=(intermediate/1100.0)*100;
pecat=(ecat/400.0)*100;
wematric=pmatric*10/100;
weintermediate=pintermediate*40/100;
weecat=pecat*50/100;
aggregate=wematric+weintermediate+weecat;
cout << " aggregate is: " << aggregate;
}





