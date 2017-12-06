#include <iostream>
const double pi = 3.14159265;
using namespace std;
class Oper
{
				private:
								double L,H;
				public:
								//Get values of Length and Hight
								double get_L(void){return this->L;}
								double get_H(void){return this->H;}
								//Set values of Length and Hight
								void set_L(double B){
												this->L = B;
								}
								void set_H(double A){
											 this->H = A;
								}
};
class Fig : public Oper
{
				private:
							 double S;
							 int F;
							 const char* FN;
				public:
							 //Get Area and Figure and Name
							 double get_S(void){return this->S;}
							 int get_F(void){return this->F;}
							 const char* get_FN(void){return this->FN;}
							 //Set Area, Figure and Name
							 void set_F(int f){this->F=f;}							 
							 void set_S_FN(double l,double h)
							 {
											 switch(this->get_F())
											 {
															 case 1:
																			 this->FN ="Triangle";
																			 this->S = 0.5*l*h; 
																			 break;
															 case 2:
																			 this->FN ="Rectangle";
																			 this->S = l*h;
																			 break;
															 case 3:
																			 this->FN ="Circle";
																			 this->S = pi*l*l;
																			 break;
															 default:
																			 this->FN ="Not an opcion";
																			 this->S =0;
											 } 
							 }
							 //Show area and figure
							 void Show(void);
};
void Fig::Show(void)
{
				cout<<"The length is: "<<this->get_L()<<endl;
				cout<<"The hight is: "<<this->get_H()<<endl;
				cout<<"The figure is: "<<this->get_FN()<<endl;
				cout<<"The area is: "<<this->get_S()<<endl;
				cout<<endl;
}
int main()
{
				Fig Figure1;
				Fig Figure2;
				Figure1.set_L(20);
				Figure1.set_H(40);
				Figure1.set_F(2);
				Figure1.set_S_FN(Figure1.get_L(),Figure1.get_H());
				Figure2.set_L(32);
				Figure2.set_H(14);
				Figure2.set_F(1);
				Figure2.set_S_FN(Figure2.get_L(),Figure2.get_H());
				Figure1.Show();
				Figure2.Show();
				return 0;

}
