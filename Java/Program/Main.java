public class Main {
    public static void main(String[] args) {
        // Computer 1
        CPU cpu1 = new CPU("Intel", "i7-12700H", 12, 20, 2.3);
        RAM ram1 = new RAM("Corsair", "Vengeance", 16, "DDR4", 3200);
        SSD ssd1 = new SSD("Samsung", "970 EVO", 1000, "NVMe", "SamsungHW", "Samsung", 150.0, 3, 512, 3500, 3300);
        OperatingSystem os1 = new OperatingSystem("Windows", "11", "64-bit", "NT Kernel");
        Application app1_1 = new Application("Chrome", "118", "Browser", "Free");
        Application app1_2 = new Application("VS Code", "1.80", "IDE", "Free");

        Computer pc1 = new Computer();
        pc1.setCpu(cpu1);
        pc1.setRam(ram1);
        pc1.setStorage(ssd1);
        pc1.setOs(os1);
        pc1.addApplication(app1_1);
        pc1.addApplication(app1_2);

        System.out.println("╔══════════════════════════════════════╗");
        System.out.println("║            COMPUTER 1 SPECS          ║");
        System.out.println("╚══════════════════════════════════════╝");
        pc1.printInfo();

        // Computer 2
        CPU cpu2 = new CPU("AMD", "Ryzen 7 5800X", 8, 16, 3.8);
        RAM ram2 = new RAM("G.Skill", "TridentZ", 32, "DDR4", 3600);
        SSD ssd2 = new SSD("WD", "Black SN850", 2000, "NVMe", "WDHW", "Western Digital", 250.0, 5, 1024, 7000, 5300);
        OperatingSystem os2 = new OperatingSystem("Ubuntu", "22.04", "64-bit", "Linux Kernel");
        Application app2_1 = new Application("Firefox", "118", "Browser", "Free");
        Application app2_2 = new Application("PyCharm", "2023.2", "IDE", "Paid");

        Computer pc2 = new Computer();
        pc2.setCpu(cpu2);
        pc2.setRam(ram2);
        pc2.setStorage(ssd2);
        pc2.setOs(os2);
        pc2.addApplication(app2_1);
        pc2.addApplication(app2_2);

        System.out.println("\n╔══════════════════════════════════════╗");
        System.out.println("║            COMPUTER 2 SPECS          ║");
        System.out.println("╚══════════════════════════════════════╝");
        pc2.printInfo();

        // Computer 3
        CPU cpu3 = new CPU("Apple", "M1", 8, 8, 3.2);
        RAM ram3 = new RAM("Apple", "Unified", 16, "LPDDR5", 4266);
        SSD ssd3 = new SSD("Apple", "Custom SSD", 512, "NVMe", "AppleHW", "Apple", 300.0, 2, 256, 2800, 2500);
        OperatingSystem os3 = new OperatingSystem("macOS", "Ventura", "ARM64", "XNU");
        Application app3_1 = new Application("Safari", "16", "Browser", "Free");
        Application app3_2 = new Application("Xcode", "14", "IDE", "Free");

        Computer pc3 = new Computer();
        pc3.setCpu(cpu3);
        pc3.setRam(ram3);
        pc3.setStorage(ssd3);
        pc3.setOs(os3);
        pc3.addApplication(app3_1);
        pc3.addApplication(app3_2);

        System.out.println("\n╔══════════════════════════════════════╗");
        System.out.println("║            COMPUTER 3 SPECS          ║");
        System.out.println("╚══════════════════════════════════════╝");
        pc3.printInfo();
    }
}
