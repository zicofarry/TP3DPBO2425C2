#pragma once
#include <bits/stdc++.h>
#include "SoftWare.cpp" 
using namespace std;

class OperatingSystem : public SoftWare {
    string architecture, kernel;
public:
    OperatingSystem() {}
    OperatingSystem(string n, string v, string a, string k) : SoftWare(n, v), architecture(a), kernel(k) {}

    void setArchitecture(string a) { architecture = a; }
    void setKernel(string k) { kernel = k; }

    string getArchitecture() { return architecture; }
    string getKernel() { return kernel; }
};
