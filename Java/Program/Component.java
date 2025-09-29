public class Component {
    protected String brand;
    protected String model;

    public Component() {}

    public Component(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }

    public void setBrand(String brand) { this.brand = brand; }
    public void setModel(String model) { this.model = model; }

    public String getBrand() { return brand; }
    public String getModel() { return model; }
}
