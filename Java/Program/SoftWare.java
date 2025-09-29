public class SoftWare {
    protected String name;
    protected String version;

    public SoftWare() {}

    public SoftWare(String name, String version) {
        this.name = name;
        this.version = version;
    }

    public void setName(String name) { this.name = name; }
    public void setVersion(String version) { this.version = version; }

    public String getName() { return name; }
    public String getVersion() { return version; }
}
