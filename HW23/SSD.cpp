#include "SSD.h"
#include <iostream>
using namespace std;

SSD::SSD(const char* Model, int Capacity):capacity(Capacity)
{
	this->model = new char[strlen(Model) + 1];
	strcpy_s(this->model, strlen(Model) + 1, Model);
	cout << "Constr w 2 param" << endl;
}

SSD::SSD(const SSD& obj):capacity(obj.capacity)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	cout << "Constr copy" << endl;
}

SSD& SSD::operator=(const SSD& obj) {
	if (this != &obj) {
		delete[] model;
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model, strlen(obj.model) + 1, obj.model);
		capacity = obj.capacity;
	}
	return *this;
}

SSD::~SSD()
{
	cout << "Destr start" << endl;
	delete[]model;
	cout << "Destr end" << endl;
}

void SSD::Print() {
	cout << "SSD: " << model << ", " << "Size: " << capacity << endl << endl;
}





