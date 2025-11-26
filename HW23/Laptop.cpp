#include "Laptop.h"
#include <iostream>
using namespace std;

int Laptop::count = 0;

Laptop::Laptop(const char* Model, double Price, const char* Color,
    const CPU& cpu, const SSD& ssd, const GPU& gpu, const RAM& ram)
    : model(nullptr), color(nullptr), price(Price),
    cpu(cpu), ssd(ssd), gpu(gpu), ram(ram)
{
    model = new char[strlen(Model) + 1];
    strcpy_s(model, strlen(Model)+1, Model);

    color = new char[strlen(Color) + 1];
    strcpy_s(color, strlen(Color)+1, Color);

    count++;
}

Laptop::Laptop(const Laptop& obj)
    : price(obj.price),
    cpu(obj.cpu), ssd(obj.ssd), gpu(obj.gpu), ram(obj.ram)
{
    model = new char[strlen(obj.model) + 1];
    strcpy_s(model, strlen(obj.model)+1, obj.model);

    color = new char[strlen(obj.color) + 1];
    strcpy_s(color, strlen(obj.color)+1, obj.color);

    count++;
}

Laptop& Laptop::operator=(const Laptop& obj) {
    if (this != &obj) {
        delete[] model;
        delete[] color;

        price = obj.price;

        model = new char[strlen(obj.model) + 1];
        strcpy_s(model, strlen(obj.model)+1, obj.model);

        color = new char[strlen(obj.color) + 1];
        strcpy_s(color, strlen(obj.color)+1,obj.color);

        cpu = obj.cpu;
        ssd = obj.ssd;
        gpu = obj.gpu;
        ram = obj.ram;
    }
    return *this;
}

Laptop::~Laptop() {
    delete[] model;
    delete[] color;
    count--;
}

int Laptop::GetCount() {
    return count;
}

void Laptop::Print(){
    cout << "--- Laptop ---\n";
    cout << "Name: " << model << "\n";
    cout << "Price: " << price << "$\n";
    cout << "Color: " << color << "\n\n";

    cpu.Print();
    ssd.Print();
    gpu.Print();
    ram.Print();

    cout << "Total laptops: " << count << "\n";
}
