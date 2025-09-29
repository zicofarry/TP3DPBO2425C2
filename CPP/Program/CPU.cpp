#pragma once
#include <bits/stdc++.h>
#include "Component.cpp"
using namespace std;

class CPU : public Component {
    int core, thread;
    double speed;
public:
    CPU() {}
    CPU(string b, string m, int c, int t, double s) : Component(b, m), core(c), thread(t), speed(s) {}

    void setCore(int c) { core = c; }
    void setThread(int t) { thread = t; }
    void setSpeed(double s) { speed = s; }

    int getCore() { return core; }
    int getThread() { return thread; }
    double getSpeed() { return speed; }
};
