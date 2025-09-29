public class HDD extends HardDrive {
    private int rpm;

    public HDD() {}

    public HDD(String brand, String model, int capacity, String type,
               String hwName, String hwBrand, double price, int warranty, int cache,
               int rpm) {
        super(brand, model, capacity, type, hwName, hwBrand, price, warranty, cache);
        this.rpm = rpm;
    }

    public void setRpm(int rpm) { this.rpm = rpm; }
    public int getRpm() { return rpm; }
}
