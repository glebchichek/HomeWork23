#include "CPU.h"
#include <iostream>
using namespace std;


CPU::CPU(const char* Model, int Core, double freq):cores(cores), freq(freq)
{
	this->model = new char[strlen(Model) + 1];
	strcpy_s(this->model, strlen(Model) + 1, Model);
	cout << "Constr w 3 param" << endl;
}

CPU::CPU(const CPU& obj):cores(obj.cores), freq(obj.freq)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	cout << "Constr copy" << endl;
}

CPU& CPU::operator=(const CPU& obj) {
	if (this != &obj) {
		delete[] model;
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model, strlen(obj.model) + 1, obj.model);

		cores = obj.cores;
		freq = obj.freq;
	}
	return *this;
}

CPU::~CPU()
{
	cout << "Destr start" << endl;
	delete[]model;
	cout << "Destr end" << endl;
}

void CPU::Print()
{
	cout << "CPU: " << model << ", " << "Cores: " << cores << ", " << "Frequency: " << freq<<endl<<endl;
}






