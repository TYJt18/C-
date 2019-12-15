#include<iostream>
using namespace std;
class Triangle
{
private:
	double a, b, c;
	double s;
public:
	Triangle(double x = 0, double y = 0, double z = 0);
	Triangle(const Triangle *t);
	friend Triangle area (Triangle A);
	friend double circulate(double C);
	Triangle operator+(Triangle A);
	Triangle operator  ==  (Triangle A);
	Triangle operator  <<(Triangle A);

};
Triangle::Triangle(double x, double y, double z)
{
	a = x;
	b = y;
	c = z;
}
Triangle::Triangle(const Triangle *t)
{
	a = t->a;
	b = t->b;
	c = t->c;
}
Triangle area(Triangle A)
{
	
	double S;
	int p = (A.a + A.b + A.c) / 2;
	S= sqrt(p*(p - A.a)*(p - A.b)*(p - A.c));
	cout << "a.s=====" << A.s;
	return A.s;
}
 double  circulate(double e)
	 
 { 
	 Triangle A;
	 e= A.a + A.b+A.c;
	 return e;
 }
 
 Triangle Triangle::operator+(Triangle B)
 {
	 Triangle C;
	 C.s = B.s +s;
	 return C.s;
 }
 Triangle Triangle:: operator ==  (Triangle A)
 {
	 Triangle B;
	 B.a = A.a; 
	 B.b = A.b; 
	 B.c = A.c;

	 return B;

 }
 Triangle Triangle::operator  <<(Triangle A)
 {
	 
	 cout << "s=" << A.s << "\n";
	 cout << "a=" << A.a << "  ";
	 cout << "b=" << A.b << "  ";
	 cout << "c=" << A.c << "\n";
	 return A;
 }
 int main()
 {
	 Triangle D(0, 2, 3);
	  Triangle T(2, 5, 6);
	 Triangle N;
	 D.operator+(T);
	 N= D + T;
	 D.operator  <<( D); 
	 T.operator  <<(T); 
	 N.operator  <<(N);
	 T = D;
	 T.operator  <<(T);
	 system("pause");
	 return 0;
	

 }