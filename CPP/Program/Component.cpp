#pragma once
#include <bits/stdc++.h>
using namespace std;

class Component {
protected:
    string brand, model;
public:
    Component() {}
    Component(string b, string m) : brand(b), model(m) {}

    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }

    string getBrand() { return brand; }
    string getModel() { return model; }
};
