public class RAM extends Component {
    private int size;
    private String ddr;
    private int frequency;

    public RAM() {}

    public RAM(String brand, String model, int size, String ddr, int frequency) {
        super(brand, model);
        this.size = size;
        this.ddr = ddr;
        this.frequency = frequency;
    }

    public void setSize(int size) { this.size = size; }
    public void setDdr(String ddr) { this.ddr = ddr; }
    public void setFrequency(int frequency) { this.frequency = frequency; }

    public int getSize() { return size; }
    public String getDdr() { return ddr; }
    public int getFrequency() { return frequency; }
}
