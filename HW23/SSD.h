#pragma once
class SSD
{
	char* model;
	int capacity;
public:
	SSD(const char* Model, int Capacity);
	SSD(const SSD& obj);
	SSD& operator=(const SSD& obj);
	~SSD();
	const char* GetModel() { return model; };
	int GetCapacity() { return capacity; };
	void Print();

};

