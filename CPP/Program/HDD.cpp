#pragma once
#include <bits/stdc++.h>
#include "HardDrive.cpp" 
using namespace std;

class HDD : public HardDrive {
    int RPM;
public:
    HDD() {}

    HDD(string n, string hb, double p, int w,
        string sb, string sm, int c, string t,
        int cacheSize, int r)
        : HardDrive(n, hb, p, w, sb, sm, c, t, cacheSize), RPM(r) {}

    void setRPM(int r) { RPM = r; }
    int getRPM() { return RPM; }

    void printInfo() {
        cout << "=== HDD ===" << endl;
        HardDrive::printInfo();
        cout << "RPM          : " << RPM << endl;
    }
};
