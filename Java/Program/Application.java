public class Application extends SoftWare {
    private String category;
    private String license;

    public Application() {}

    public Application(String name, String version, String category, String license) {
        super(name, version);
        this.category = category;
        this.license = license;
    }

    public void setCategory(String category) { this.category = category; }
    public void setLicense(String license) { this.license = license; }

    public String getCategory() { return category; }
    public String getLicense() { return license; }
}
