#pragma once
#include <bits/stdc++.h>
#include "HardDrive.cpp" 
using namespace std;

class SSD : public HardDrive {
    double readSpeed, writeSpeed;
public:
    SSD() {}

    SSD(string n, string hb, double p, int w,
        string sb, string sm, int c, string t,
        int cacheSize, double r, double wSpeed)
        : HardDrive(n, hb, p, w, sb, sm, c, t, cacheSize),
          readSpeed(r), writeSpeed(wSpeed) {}

    void setReadSpeed(double r) { readSpeed = r; }
    void setWriteSpeed(double w) { writeSpeed = w; }

    double getReadSpeed() { return readSpeed; }
    double getWriteSpeed() { return writeSpeed; }

    void printInfo() {
        cout << "=== SSD ===" << endl;
        HardDrive::printInfo();
        cout << "Read Speed   : " << readSpeed << " MB/s" << endl;
        cout << "Write Speed  : " << writeSpeed << " MB/s" << endl;
    }
};
