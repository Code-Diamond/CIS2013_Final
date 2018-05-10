#include <iostream>
#include <cstring>
#include "Motorcycle.h"

using namespace std;

string Motorcycle::getColor()
{
	return color;
}
string Motorcycle::getYear()
{
	return year;
}
string Motorcycle::getMake()
{
	return make;
}
string Motorcycle::getModel()
{
	return model;
}
void Motorcycle::setColor(string inputColor)
{
	color = inputColor;
}
void Motorcycle::setYear(string inputYear)
{
	year = inputYear;
}
void Motorcycle::setMake(string inputMake)
{
	make = inputMake;
}
void Motorcycle::setModel(string inputModel)
{
	model = inputModel;
}
void Motorcycle::getMotorcycleInfo()
{
	cout << endl << endl << "The information you provided into the motorcycle creation kit is as follows.." << endl << endl;
	cout << "Color: " << color << endl;
	cout << "Year: " << year << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
}