
#include <iostream>
#include <functional> // needed for the function of c++11

using namespace std;

double multiple(double arg)
{
	return arg*1.1;
}


void main()
{
	function<double(double)> fptrnew;
	fptrnew = multiple;
	cout << "display of function pointer using c++11 " << endl;
	cout << fptrnew(1.1)<< endl;

	

	double(*fptrold)(double arg);
	fptrold = multiple;
	cout << "display of function pointer using c++ old ones " << endl;
	cout << fptrold(1.1) << endl;


	//using o\the object things
	class MyFunctionObject {
	public:
		double operator() (double arg) { return arg*4.4; }
	};

	MyFunctionObject myobj;

	cout << "display of function objects use c++ old ones " << endl;
	cout << myobj(1.1) << endl;

}

