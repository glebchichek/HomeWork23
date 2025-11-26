#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(const char* Model, int Size, int Freq):size(Size),freq(Freq)
{
	this->model = new char[strlen(Model) + 1];
	strcpy_s(this->model, strlen(Model) + 1, Model);
	cout << "Constr w 3 param" << endl;
}

RAM::RAM(const RAM& obj):size(obj.size), freq(obj.freq)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	cout << "Constr copy" << endl;
}

RAM::~RAM()
{
	cout << "Destr start" << endl;
	delete[]model;
	cout << "Destr end" << endl;

}

void RAM::Print() {
	cout << "RAM: " << model << ", " << "Size: " << size << ", " << "Fequency: " << freq << endl << endl;
}


