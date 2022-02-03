#include <iostream>
#include "Vecteur2d.h"
using namespace std;


int main(int argc, char** argv) {
	
	
	
	Vecteur2d v1, v2(3.14, 2.71), v3(6.86, 7.29), v4;
	cout<<"===== les objets: v1,v4, v2(3.14, 2.71), v3(9.8, 1.41) ======= \n";

	cout<<"------- Test << v2 et v2 -------\n";
	cout<<v2; 
	cout<<v1;
	cout<<"------- Test >> v1 -------\n";
	cin>>v1;
	cout<<v1;
	cout<<"------- Test v4 = somme(v2, v3) -------\n";
	v4 = somme(v2, v3);
	cout<<v4;
	cout<<"------- Test v1 == v4 -------\n";
	cout<<(v1==v4); // si egaux : 1 , et 0 sinon
	cout<<"\n------- Test * : 3*v4 -------\n";
	cout<<3*v4;
	
	///////////////////////////////// exercice 2 ///////////////////////
	Vecteur3d v5(3.1, 4.2, 5.3), v6(1.2, 2.2, 3.2), v7;
	v7 = somme(v5,v6);
	cout<<v7;
	// meme chose avec les autres fonctions ...
	return 0;
}

