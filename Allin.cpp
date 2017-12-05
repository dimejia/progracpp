#include <iostream>
using namespace std;
class Pareja{
				private:
								int a,b;
				public:
								//Constructores Base
								Pareja() : a(0) , b(0){}
								//Constructor Parametros
								Pareja(const int a, const int b){
												this->a = a;
												this->b = b;
								}
								//Constructor Copia
								Pareja(const Pareja&);
								//Operadores
								Pareja& operator + (const Pareja &p);
								Pareja& operator - (const Pareja &p);
								Pareja& operator * (const Pareja &p);
								Pareja& operator / (const Pareja &p);
								Pareja& operator = (const Pareja &p);
								Pareja& operator ++();
								bool operator ==(const Pareja &p) const;

								//Operadores 2
								friend ostream& operator << (ostream &o, const Pareja &p);
								friend istream& operator >> (istream &o, Pareja &p);
	
};
//Implemanetar clase
Pareja::Pareja(const Pareja &p)
{
				*this=p;
}
Pareja& Pareja::operator + (const Pareja &p)
{
				this->a += p.a;
				this->b += p.b;
				return *this;
}
Pareja& Pareja::operator - (const Pareja &p)
{
				this->a -= p.a;
				this->b -= p.b;
				return *this;
}
Pareja& Pareja::operator * (const Pareja &p)
{
				this->a *= p.a;
				this->b *= p.b;
				return *this;
}
Pareja& Pareja::operator / (const Pareja &p)
{
				if (p.a != 0) this-> a /= p.a;
				if (p.b != 0) this-> b /= p.b;
				return *this;
}
Pareja& Pareja::operator = (const Pareja &p)
{
				if(this!=&p)
				{
								if(p.a!=0) this->a = p.a;
								if(p.b!=0) this->b = p.b;
				}
				return *this;
}
Pareja& Pareja::operator ++()
{
				this->a ++;
				this->b ++;
				return *this;
}
bool Pareja::operator == (const Pareja &p) const
{
				return this->a == p.a && this->b == p.b;
}
ostream& operator << (ostream &o, const Pareja &p)
{
				o << "(" << p.a << "," << p.b << ")";
				return o;
}
istream& operator >> (istream &i, Pareja &p)
{
				cout<<"Introducir valores para (a,b) :";
				i >> p.a >> p.b;
				i.ignore();
				return i;
}
int main()
{
				Pareja A(30,5);
				Pareja B(15,90);
				Pareja C;

				cout<<"A= "<<A<<endl;
				cout<<"B= "<<B<<endl;
				cout<<"____________"<<endl;
				C = A*B;
				cout<<"C= "<<C<<endl;
				cout<<"____________"<<endl;

				++C;
				cout<<"C= "<<C<<endl;
				cout<<"A==B"<< ((A==B) ? "YES" : "NO");
				cin.get();
				return 0;
}
