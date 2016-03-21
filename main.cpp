#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "QuestionA.h"
using namespace std;

int main()
{
	int height, weight;

	ofstream outFile( "file.out", ios::out );
	ifstream inFile ( "file.in" , ios::in );
	if( !outFile || !inFile) 
	{
	 	cerr << "Failed opening" << endl;
		exit(1);
	}
	
	outFile << setprecision(2);
	outFile << fixed;

	while( inFile >> height >> weight && height != 0 )
	{
		BodyMassIndex bmi;

		bmi.setBmi(height, weight);
		float bmiValue = bmi.getBmi();
		string bmiCategory = bmi.getBmiCategory();

		outFile << bmiValue  << " " << bmiCategory << "\n";
	}
	
	return 0;
}
