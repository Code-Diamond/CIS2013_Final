#include <iostream>
#include <cstring>
using namespace std;


class Motorcycle
{
	public:	
		string color;
		string year;
		string make;
		string model;

		string getColor();
		string getYear();
		string getMake();
		string getModel();
		void setColor(string inputColor);
		void setYear(string inputYear);
		void setMake(string inputMake);
		void setModel(string inputModel);
		void getMotorcycleInfo();
};