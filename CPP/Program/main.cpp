#include "CPU.cpp"
#include "RAM.cpp"
#include "SSD.cpp"
#include "OperatingSystem.cpp"
#include "Application.cpp"
#include "Computer.cpp"

int main() {
    // Computer 1
    CPU cpu1("Intel", "i7-12700H", 12, 20, 2.3);
    RAM ram1("Corsair", "Vengeance", 16, "DDR4", 3200);
    SSD ssd1("Storage1", "Samsung", 120.5, 5, 
             "Samsung", "970 EVO", 1000, "NVMe", 512, 3500, 3300);
    OperatingSystem os1("Windows", "11", "64-bit", "NT Kernel");
    Application app1_1("Chrome", "118", "Browser", "Free");
    Application app1_2("VS Code", "1.80", "IDE", "Free");

    Computer pc1;
    pc1.setCPU(cpu1);
    pc1.setRAM(ram1);
    pc1.setStorage(&ssd1);
    pc1.setOS(os1);
    pc1.addApplication(app1_1);
    pc1.addApplication(app1_2);

    cout << "╔══════════════════════════════════════╗\n";
    cout << "║            COMPUTER 1 SPECS          ║\n";
    cout << "╚══════════════════════════════════════╝\n";
    pc1.printInfo();


    // Computer 2
    CPU cpu2("AMD", "Ryzen 7 5800X", 8, 16, 3.8);
    RAM ram2("G.Skill", "TridentZ", 32, "DDR4", 3600);
    SSD ssd2("Storage2", "WD", 150.0, 3, 
             "WD", "Black SN850", 2000, "NVMe", 1024, 7000, 5300);
    OperatingSystem os2("Ubuntu", "22.04", "64-bit", "Linux Kernel");
    Application app2_1("Firefox", "118", "Browser", "Free");
    Application app2_2("PyCharm", "2023.2", "IDE", "Paid");

    Computer pc2;
    pc2.setCPU(cpu2);
    pc2.setRAM(ram2);
    pc2.setStorage(&ssd2);
    pc2.setOS(os2);
    pc2.addApplication(app2_1);
    pc2.addApplication(app2_2);

    cout << "\n╔══════════════════════════════════════╗\n";
    cout << "║            COMPUTER 2 SPECS          ║\n";
    cout << "╚══════════════════════════════════════╝\n";
    pc2.printInfo();


    // Computer 3
    CPU cpu3("Apple", "M1", 8, 8, 3.2);
    RAM ram3("Apple", "Unified", 16, "LPDDR5", 4266);
    SSD ssd3("Storage3", "Apple", 200.0, 4, 
             "Apple", "Custom SSD", 512, "NVMe", 256, 2800, 2500);
    OperatingSystem os3("macOS", "Ventura", "ARM64", "XNU");
    Application app3_1("Safari", "16", "Browser", "Free");
    Application app3_2("Xcode", "14", "IDE", "Free");

    Computer pc3;
    pc3.setCPU(cpu3);
    pc3.setRAM(ram3);
    pc3.setStorage(&ssd3);
    pc3.setOS(os3);
    pc3.addApplication(app3_1);
    pc3.addApplication(app3_2);

    cout << "\n╔══════════════════════════════════════╗\n";
    cout << "║            COMPUTER 3 SPECS          ║\n";
    cout << "╚══════════════════════════════════════╝\n";
    pc3.printInfo();

    return 0;
}
