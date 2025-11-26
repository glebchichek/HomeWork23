#pragma once
class CPU
{
	char* model;
	int cores;
	double freq;
public:
	CPU(const char* Model, int core, double freq);
	CPU(const CPU& obj);
	CPU& operator=(const CPU& obj);
	~CPU();
	const char* GetModel() { return model; };
	int GetCores() { return cores; };
	double GetFreq() { return freq; };
	void Print();

};

