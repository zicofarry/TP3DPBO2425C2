public class HardDrive extends Storage {
    private HardWare hardware;  // composition
    protected int cache;

    public HardDrive() {}

    public HardDrive(String brand, String model, int capacity, String type,
                     String hwName, String hwBrand, double price, int warranty, int cache) {
        super(brand, model, capacity, type);
        this.hardware = new HardWare(hwName, hwBrand, price, warranty);
        this.cache = cache;
    }

    public void setCache(int cache) { this.cache = cache; }
    public int getCache() { return cache; }

    public HardWare getHardware() { return hardware; }
    public void setHardware(HardWare hardware) { this.hardware = hardware; }
}
