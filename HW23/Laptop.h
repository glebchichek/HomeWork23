#pragma once
#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"

class Laptop
{
	char* model;
	double price;
	char* color;

	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;

	static int count;

public:
	Laptop(const char* Model, double Price, const char* Color, const CPU& Cpu, const SSD& Ssd, const GPU& Gpu, const RAM& Ram);
	Laptop(const Laptop& obj);
	Laptop& operator=(const Laptop& obj);
	~Laptop();
	static int GetCount();
	void Print();

};

