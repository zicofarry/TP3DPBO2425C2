#pragma once
#include <bits/stdc++.h>
using namespace std;

class SoftWare {
protected:
    string name, version;
public:
    SoftWare() {}
    SoftWare(string n, string v) : name(n), version(v) {}

    void setName(string n) { name = n; }
    void setVersion(string v) { version = v; }

    string getName() { return name; }
    string getVersion() { return version; }
};
