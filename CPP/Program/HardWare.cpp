#pragma once
#include <bits/stdc++.h>
using namespace std;

class HardWare {
protected:
    string name, brand;
    double price;
    int warranty;
public:
    HardWare() {}
    HardWare(string n, string b, double p, int w) : name(n), brand(b), price(p), warranty(w) {}

    void setName(string n) { name = n; }
    void setBrand(string b) { brand = b; }
    void setPrice(double p) { price = p; }
    void setWarranty(int w) { warranty = w; }

    string getName() { return name; }
    string getBrand() { return brand; }
    double getPrice() { return price; }
    int getWarranty() { return warranty; }
};
