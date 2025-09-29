#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class Storage : public Component {
protected:
    int capacity;
    string type;
public:
    Storage() {}
    Storage(string b, string m, int c, string t) : Component(b, m), capacity(c), type(t) {}

    void setCapacity(int c) { capacity = c; }
    void setType(string t) { type = t; }

    int getCapacity() { return capacity; }
    string getType() { return type; }
};
