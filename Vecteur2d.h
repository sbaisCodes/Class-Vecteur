#include<iostream>
using namespace std;

#ifndef VECTEUR2D_H
#define VECTEUR2D_H
class Vecteur2d{
	protected: 
		double x, y;
		
	public: 

		Vecteur2d(double xx =0, double yy=0){
			x = xx;
			y = yy;
		}
		friend Vecteur2d somme(Vecteur2d& v1, Vecteur2d& v2){
			Vecteur2d res_vecteur(v1.x + v2.x, v1.y + v2.y ); 
			return res_vecteur;
		}	
		
		friend Vecteur2d& operator*(int k, Vecteur2d v){
			Vecteur2d temp_v;
			temp_v.x = v.x * k;
			temp_v.y = v.y * k;
			return temp_v;
		}
		friend bool operator==(Vecteur2d v1, Vecteur2d v2){
			return(v1.x == v2.x && v1.y == v2.y );
		}
		
		friend ostream& operator<<(ostream& o,Vecteur2d& v );
		
		friend istream& operator>>(istream& i,Vecteur2d& v );
		
		Vecteur2d& operator=(const Vecteur2d& v){
			x = v.x ; 
			y = v.y;
		}
		
};
ostream&  operator<<(ostream& o,Vecteur2d& v ){
			o<<"( "<< v.x << ", "<< v.y << ")\n";
			return o;
		}
		
istream& operator>>(istream& i,Vecteur2d& v ){
			cout<< "Enter x : ";
			i>>v.x;
			cout<< "Enter y : ";
			i>>v.y;
			return i;
		}
		
		
class Vecteur3d : public Vecteur2d {
	private: 
		double z;
		// question 2: il faut mettre les donnees priver de la classe mere comme proteger (protected)
	public: 
		Vecteur3d(double xx=0, double yy=0, double zz = 0){
			// on peut appeler le constructeur de la classe mere mais il faut faire attention : x et y seront toujouts met a 0.
			x = xx;
			y = yy;
			z = zz;
		}
		friend Vecteur3d somme(Vecteur3d& v1, Vecteur3d& v2){
			Vecteur3d res_vecteur(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z); 
			return res_vecteur;
		}
		friend ostream& operator<<(ostream& o,Vecteur3d& v );
		friend istream& operator>>(istream& in,Vecteur3d& v );

		Vecteur3d& operator=(const Vecteur3d& v){
			x = v.x ; 
			y = v.y;
			z = v.z;
		}
		
};

ostream&  operator<<(ostream& o,Vecteur3d& v ){
			o<<"( "<< v.x << ", "<< v.y << ", "<<v.z<<" )\n";
			return o;
		}
istream&  operator>>(istream& in,Vecteur3d& v ){
			cout<< "Enter x : ";
			in>>v.x;
			cout<< "Enter y : ";
			in>>v.y;
			cout<< "Enter z : ";
			in>>v.z;
			return in;
			
			return o;
		}
	
#endif 
