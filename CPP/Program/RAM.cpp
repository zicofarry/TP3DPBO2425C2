#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class RAM : public Component {
    int size;
    string DDR;
    double frequency;
public:
    RAM() {}
    RAM(string b, string m, int s, string d, double f) : Component(b, m), size(s), DDR(d), frequency(f) {}

    void setSize(int s) { size = s; }
    void setDDR(string d) { DDR = d; }
    void setFrequency(double f) { frequency = f; }

    int getSize() { return size; }
    string getDDR() { return DDR; }
    double getFrequency() { return frequency; }
};
