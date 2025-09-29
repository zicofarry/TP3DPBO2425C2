import java.util.ArrayList;

public class Computer {
    private CPU cpu;
    private RAM ram;
    private Storage storage;
    private OperatingSystem os;
    private ArrayList<Application> applications;

    public Computer() {
        applications = new ArrayList<>();
    }

    public void setCpu(CPU cpu) { this.cpu = cpu; }
    public void setRam(RAM ram) { this.ram = ram; }
    public void setStorage(Storage storage) { this.storage = storage; }
    public void setOs(OperatingSystem os) { this.os = os; }
    public void addApplication(Application app) { applications.add(app); }

    public CPU getCpu() { return cpu; }
    public RAM getRam() { return ram; }
    public Storage getStorage() { return storage; }
    public OperatingSystem getOs() { return os; }
    public ArrayList<Application> getApplications() { return applications; }

    public void printInfo() {
        System.out.println("CPU: " + cpu.getBrand() + " " + cpu.getModel() +
                " (" + cpu.getCores() + "C/" + cpu.getThreads() + "T, " + cpu.getBaseClock() + "GHz)");
        System.out.println("RAM: " + ram.getSize() + "GB " + ram.getDdr() + " " + ram.getFrequency() + "MHz");
        System.out.println("Storage: " + storage.getBrand() + " " + storage.getModel() +
                " " + storage.getCapacity() + "GB (" + storage.getType() + ")");
        System.out.println("OS: " + os.getName() + " " + os.getVersion() +
                " " + os.getArchitecture() + " (" + os.getKernel() + ")");
        System.out.println("Installed Apps:");
        for (Application app : applications) {
            System.out.println("- " + app.getName() + " (" + app.getCategory() + ")");
        }
    }
}
