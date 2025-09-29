public class OperatingSystem extends SoftWare {
    private String architecture;
    private String kernel;

    public OperatingSystem() {}

    public OperatingSystem(String name, String version, String architecture, String kernel) {
        super(name, version); 
        this.architecture = architecture;
        this.kernel = kernel;
    }

    public void setArchitecture(String architecture) { this.architecture = architecture; }
    public void setKernel(String kernel) { this.kernel = kernel; }

    public String getArchitecture() { return architecture; }
    public String getKernel() { return kernel; }
}
