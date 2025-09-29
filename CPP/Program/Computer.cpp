#pragma once
#include <bits/stdc++.h>
#include "CPU.cpp"
#include "RAM.cpp"
#include "SSD.cpp"
#include "OperatingSystem.cpp"
#include "Application.cpp"
using namespace std;

class Computer {
    OperatingSystem OS;
    CPU cpu;
    RAM ram;
    Storage* storage;
    vector<Application> applications;
public:
    Computer() {}

    void setOS(OperatingSystem o) { OS = o; }
    void setCPU(CPU c) { cpu = c; }
    void setRAM(RAM r) { ram = r; }
    void setStorage(Storage* s) { storage = s; }
    void addApplication(Application a) { applications.push_back(a); }

    OperatingSystem getOS() { return OS; }
    CPU getCPU() { return cpu; }
    RAM getRAM() { return ram; }
    Storage* getStorage() { return storage; }
    vector<Application> getApplications() { return applications; }

        void printInfo() {
        cout << "CPU: " << cpu.getBrand() << " " << cpu.getModel()
            << " - " << cpu.getCore() << " cores @ " 
            << cpu.getSpeed() << "GHz" << endl;
        cout << "RAM: " << ram.getSize() << "GB " << ram.getDDR() << endl;
        cout << "Storage: " << storage->getBrand() << " " 
             << storage->getModel() << " " 
             << storage->getCapacity() << "GB" << endl;
        cout << "OS: " << OS.getName() << " " << OS.getVersion() << endl;
        cout << "Installed Apps:\n";
        for (auto a : applications) {
            cout << "- " << a.getName() << " (" << a.getCategory() << ")\n";
        }
    }
}; 
