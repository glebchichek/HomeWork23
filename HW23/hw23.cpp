#include "Laptop.h"
#include <iostream>
using namespace std;


int main() {
    CPU cpu("Intel i7", 8, 3.5);
    SSD ssd("Samsung", 512);
    GPU gpu("RTX 3060", 6);
    RAM ram("Samsung",16, 3200);

    Laptop l1("Acer Nitro 5", 1200, "Black", cpu, ssd, gpu, ram);

    l1.Print();

    cout << "Laptops created: " << Laptop::GetCount() << "\n\n";
}