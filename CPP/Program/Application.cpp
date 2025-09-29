#pragma once
#include <bits/stdc++.h>
#include "SoftWare.cpp" 
using namespace std;

class Application : public SoftWare {
    string category, license;
public:
    Application() {}
    Application(string n, string v, string c, string l) : SoftWare(n, v), category(c), license(l) {}

    void setCategory(string c) { category = c; }
    void setLicense(string l) { license = l; }

    string getCategory() { return category; }
    string getLicense() { return license; }
};
