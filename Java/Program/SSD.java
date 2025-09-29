public class SSD extends HardDrive {
    private double readSpeed;
    private double writeSpeed;

    public SSD() {}

    public SSD(String brand, String model, int capacity, String type,
               String hwName, String hwBrand, double price, int warranty, int cache,
               double readSpeed, double writeSpeed) {
        super(brand, model, capacity, type, hwName, hwBrand, price, warranty, cache);
        this.readSpeed = readSpeed;
        this.writeSpeed = writeSpeed;
    }

    public void setReadSpeed(double readSpeed) { this.readSpeed = readSpeed; }
    public void setWriteSpeed(double writeSpeed) { this.writeSpeed = writeSpeed; }

    public double getReadSpeed() { return readSpeed; }
    public double getWriteSpeed() { return writeSpeed; }
}
