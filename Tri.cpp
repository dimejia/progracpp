#include <iostream>
using namespace std;
class Triangle
{
				private:
								int A,B;
				public:
								Triangle();
								Triangle(int,int);
								float CalcArea();
								void ImpAttrib();
								void UpdateAttrib(int,int);
};
Triangle::Triangle(){}
Triangle::Triangle(int A, int B)
{
				this->A = A;
				this->B = B;
}
float Triangle::CalcArea()
{
				return (this->A * this->B)/2;
}
void Triangle::ImpAttrib(){
				cout<<"High = "<<this->A<<endl;
				cout<<"Length = "<<this->B<<endl;
}
void Triangle::UpdateAttrib(int H, int L){
				this->A = H;
				this->B = L;
}
int main(){
				int H,L;
				Triangle Obj;
				cout<<"Introduce the High of the triangle: "<<endl;
				cin>>H;
				cout<<"Introduce the Length of the triangle: "<<endl;
				cin>>L;
				Obj.UpdateAttrib(H,L);
				Obj.ImpAttrib();
				cout<<"The area of the triangle is: "<<Obj.CalcArea()<<endl;
				cin.get();
				return 0;
}
