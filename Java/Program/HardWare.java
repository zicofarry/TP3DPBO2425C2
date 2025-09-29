public class HardWare {
    protected String name;
    protected String brand;
    protected double price;
    protected int warranty;

    public HardWare() {}

    public HardWare(String name, String brand, double price, int warranty) {
        this.name = name;
        this.brand = brand;
        this.price = price;
        this.warranty = warranty;
    }

    public void setName(String name) { this.name = name; }
    public void setBrand(String brand) { this.brand = brand; }
    public void setPrice(double price) { this.price = price; }
    public void setWarranty(int warranty) { this.warranty = warranty; }

    public String getName() { return name; }
    public String getBrand() { return brand; }
    public double getPrice() { return price; }
    public int getWarranty() { return warranty; }
}
