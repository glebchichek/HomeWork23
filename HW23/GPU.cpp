#include "GPU.h"
#include <iostream>
using namespace std;

GPU::GPU(const char* Model, int Memory) :memory(Memory)
{
	this->model = new char[strlen(Model) + 1];
	strcpy_s(this->model, strlen(Model) + 1, Model);
	cout << "Constr w 2 param" << endl;
}

GPU::GPU(const GPU& obj) :memory(obj.memory)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	cout << "Constr copy" << endl;
}

GPU& GPU::operator=(const GPU& obj) {
	if (this != &obj) {
		delete[] model;
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model, strlen(obj.model) + 1, obj.model);
		memory = obj.memory;
	}
	return *this;
}

GPU::~GPU()
{
	cout << "Destr start" << endl;
	delete[]model;
	cout << "Destr end" << endl;
}

void GPU::Print() {
	cout << "GPU: " << model << ", " << "Memory: " << memory << endl << endl;
}