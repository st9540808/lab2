#include <iostream>
#include <string>
using namespace std;

class BodyMassIndex
{
	public:
		void setBmi(int ,int);
		float getBmi();
		string getBmiCategory();
		
	private:
		float height, bmi; 
		int   weight;
};

