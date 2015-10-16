//Louis Paul Romero
//October 15, 2015
//Homework

#include <iostream>
#include <cassert>
using namespace std;

//********************************************************
void sort(int& numA, int& numB, int& numC);
// Summary:  sort() will arrange three numbers in increasing order. 
// Precondition: The functions will receive 3 arguments of return type int and the sort.
// Postcondition:  The three arguments will be sorted in ascending order. ********************************************************

//********************************************************
void numDigits(int valA, int& n);
// Summary: For numbers [-10000, 10000] numDigits() will tell you how many number of digits the integer is.
// Precondition: A number  from -10000 through 10000 will be passed through the function.  
// Postcondition:  An integer will be return with the amount of digits in the number consists of. ********************************************************

//********************************************************
void computeSphere(double& a, double& v, double r);
// Summary: computeSphere() will calculate the area and volume of a sphere.
// Precondition:  Three arguments will be passed through the function computeSpere().  Two empty containers and the radius.
// Postcondition:  The area and volume of a sphere will be calculated depending on the entered radius. ********************************************************

//********************************************************
void swap(int& A, int& B);
// Summary:  swap() will take in two values and swap their values
// Precondition: Two arguments will be passed through the function.
// Postcondition:  Value A will equal value B and vise versa. ********************************************************

int main ()
{  
	int dummyValue =-10000, container;
	numDigits(2000, container);//container = 4
	numDigits(-103, container);//container = 3
	
	int x=1, y=2, ix = 3, kx = 7;
	swap(x,y);//y = 1 x = 1
	swap(ix, kx);//ix = 7 kx = 3

	double valX, valY, radius1 = 9, radius2 = 11;
	computeSphere(valX, valY, radius1);// valX = 1017.88 valY = 3053.63
	cout << "Area " << valX << endl;
	cout << "Volume " << valY << endl;
	computeSphere(valX, valY, radius2);// valX = 1520.53 valY = 5575.28
	cout << "Area " << valX << endl;
	cout << "Volume " << valY << endl;

	int valA = 3, valB = 1, valC = 2;
	int valIX = 100, valJX = 12, valKX = 32;

	sort(valA, valB, valC);// 1 2 3
	sort(valIX, valJX, valKX);//12 32 100

	return 0;
}

void sort(int& numA, int& numB, int& numC)
{
	assert(numA >= 0 && numA <= 100);
	assert(numB >= 0 && numB <= 100);
	assert(numC >= 0 && numC <= 100);
	
	if(numA > numB)
	{
		swap(numA, numB);
	}
	if(numA > numC)
	{
		swap(numA, numC);	
	}
	if(numB, numC)
	{
		swap(numB, numC);	
	}
	cout << numA << " " << numB << " " << numC << endl;
}

void numDigits(int valA, int& n)
{
	assert(valA >= -10000 && valA <= 10000);
	
	int counter = 0;   
	if(valA >= -10000 && valA <= 10000)
	{	
		for( int ix = 0; ix >= 0; ix ++)
	   	{
	        	valA = valA / 10;
	        	counter++;
	        	if(valA == 0)
	        	{
	        	    	break;
	        	}
	   	}   
	   	n = counter;
		cout << n << endl;
  	}
	else
	{
  		cout << "Invalid input!"; 
	}     
}

void computeSphere(double& a, double& v, double r)
{
	assert(r > 0);

	const double PI = 3.14159;
	a = 4 * PI * r * r;
	v = (4.0/3.0) * PI * r * r * r;
}

void swap(int& A, int& B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
}
