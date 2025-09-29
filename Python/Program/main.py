from CPU import CPU
from RAM import RAM
from SSD import SSD
from OperatingSystem import OperatingSystem
from Application import Application
from Computer import Computer

if __name__ == "__main__":
    # Computer 1
    cpu1 = CPU("Intel", "i7-12700H", 12, 20, 2.3)
    ram1 = RAM("Corsair", "Vengeance", 16, "DDR4", 3200)
    ssd1 = SSD("Storage1", "Samsung", 120.5, 5,
               "Samsung", "970 EVO", 1000, "NVMe", 512, 3500, 3300)
    os1 = OperatingSystem("Windows", "11", "64-bit", "NT Kernel")
    app1_1 = Application("Chrome", "118", "Browser", "Free")
    app1_2 = Application("VS Code", "1.80", "IDE", "Free")

    pc1 = Computer()
    pc1.set_cpu(cpu1)
    pc1.set_ram(ram1)
    pc1.set_storage(ssd1)
    pc1.set_os(os1)
    pc1.add_application(app1_1)
    pc1.add_application(app1_2)

    print("╔══════════════════════════════════════╗")
    print("║            COMPUTER 1 SPECS          ║")
    print("╚══════════════════════════════════════╝")
    pc1.print_info()

    # Computer 2
    cpu2 = CPU("AMD", "Ryzen 7 5800X", 8, 16, 3.8)
    ram2 = RAM("G.Skill", "TridentZ", 32, "DDR4", 3600)
    ssd2 = SSD("Storage2", "WD", 150.0, 3,
               "WD", "Black SN850", 2000, "NVMe", 1024, 7000, 5300)
    os2 = OperatingSystem("Ubuntu", "22.04", "64-bit", "Linux Kernel")
    app2_1 = Application("Firefox", "118", "Browser", "Free")
    app2_2 = Application("PyCharm", "2023.2", "IDE", "Paid")

    pc2 = Computer()
    pc2.set_cpu(cpu2)
    pc2.set_ram(ram2)
    pc2.set_storage(ssd2)
    pc2.set_os(os2)
    pc2.add_application(app2_1)
    pc2.add_application(app2_2)

    print("\n╔══════════════════════════════════════╗")
    print("║            COMPUTER 2 SPECS          ║")
    print("╚══════════════════════════════════════╝")
    pc2.print_info()

    # Computer 3
    cpu3 = CPU("Apple", "M1", 8, 8, 3.2)
    ram3 = RAM("Apple", "Unified", 16, "LPDDR5", 4266)
    ssd3 = SSD("Storage3", "Apple", 200.0, 4,
               "Apple", "Custom SSD", 512, "NVMe", 256, 2800, 2500)
    os3 = OperatingSystem("macOS", "Ventura", "ARM64", "XNU")
    app3_1 = Application("Safari", "16", "Browser", "Free")
    app3_2 = Application("Xcode", "14", "IDE", "Free")

    pc3 = Computer()
    pc3.set_cpu(cpu3)
    pc3.set_ram(ram3)
    pc3.set_storage(ssd3)
    pc3.set_os(os3)
    pc3.add_application(app3_1)
    pc3.add_application(app3_2)

    print("\n╔══════════════════════════════════════╗")
    print("║            COMPUTER 3 SPECS          ║")
    print("╚══════════════════════════════════════╝")
    pc3.print_info()
