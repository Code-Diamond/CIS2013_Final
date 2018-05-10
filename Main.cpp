#include <iostream>
#include <cstring>
#include "Motorcycle.h"

using namespace std;

void displayMenu()
{
	
	cout << "Set color (c):" << endl;
	cout << "Set year  (y):" << endl;
	cout << "Set make  (m):" << endl;
	cout << "Set model (o):" << endl;
	
}

int main()
{
	Motorcycle motorcycle;
	string inputColor;
	string inputYear;
	string inputMake;
	string inputModel;
	bool colorBool = false;
	bool yearBool = false;
	bool makeBool = false;
	bool modelBool = false;
	char decision;
	cout << "Hello welcome to the motorcycle creation kit.." << endl;
	
	while(!colorBool || !yearBool || !makeBool || !modelBool)
	{
		decision = 'a'; 
		displayMenu();
		cin >> decision;
		
		switch(decision)
		{
			case 'c':
				cout << "Enter the color you would like: ";
				cin >> inputColor;
				motorcycle.setColor(inputColor);
				colorBool = true;
				break;
			case 'y':
				cout << "Enter the year you would like: ";
				cin >> inputYear;
				motorcycle.setYear(inputYear);		
				yearBool = true;	
				break;
			case 'm':
				cout << "Enter the make you would like: ";		
				cin >> inputMake;
				motorcycle.setMake(inputMake);
				makeBool = true;
				break;
			case 'o':
				cout << "Enter the model you would like: ";
				cin >> inputModel;
				motorcycle.setModel(inputModel);
				modelBool = true;
				break;									
			default:
				cout << "Invalid selection." << endl;
		}
	}

	motorcycle.getMotorcycleInfo();

}