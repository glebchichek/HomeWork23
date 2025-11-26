#pragma once
class GPU
{
	char* model;
	int memory;
public:
	GPU(const char* Model, int Capacity);
	GPU(const GPU& obj);
	GPU& operator=(const GPU& obj);
	~GPU();
	const char* GetModel() { return model; };
	int GetMemory() { return memory; };
	void Print();
};

