#pragma once
class RAM
{
	char* model;
	int size;
	int freq;
public:
	RAM(const char* Model, int Size, int Freq);
	RAM(const RAM& obj);
	~RAM();
	const char* GetModel() { return model; };
	int GetSize() { return size; };
	int GetFreq() { return freq; };
	void Print();
};

