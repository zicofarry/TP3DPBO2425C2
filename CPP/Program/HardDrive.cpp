#pragma once
#include <bits/stdc++.h>
#include "Storage.cpp"
#include "HardWare.cpp"
using namespace std;

class HardDrive : public HardWare, public Storage {
protected:
    int cache; // ukuran cache dalam MB
public:
    HardDrive() {}

    HardDrive(string n, string b, double p, int w,
              string sb, string sm, int c, string t,
              int cacheSize)
        : HardWare(n, b, p, w), Storage(sb, sm, c, t), cache(cacheSize) {}

    void setCache(int c) { cache = c; }
    int getCache() { return cache; }

    void printInfo() {
        cout << "=== Hard Drive ===" << endl;
        cout << "Hardware Name  : " << getName() << endl;
        cout << "Hardware Brand : " << HardWare::getBrand() << endl;
        cout << "Price          : $" << getPrice() << endl;
        cout << "Warranty       : " << getWarranty() << " years" << endl;

        cout << "Storage Brand  : " << Storage::getBrand() << endl;
        cout << "Storage Model  : " << getModel() << endl;
        cout << "Capacity       : " << getCapacity() << " GB" << endl;
        cout << "Type           : " << getType() << endl;

        cout << "Cache Size     : " << cache << " MB" << endl;
    }
};
