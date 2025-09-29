public class CPU extends Component {
    private int cores;
    private int threads;
    private double baseClock;

    public CPU() {}

    public CPU(String brand, String model, int cores, int threads, double baseClock) {
        super(brand, model);
        this.cores = cores;
        this.threads = threads;
        this.baseClock = baseClock;
    }

    public void setCores(int cores) { this.cores = cores; }
    public void setThreads(int threads) { this.threads = threads; }
    public void setBaseClock(double baseClock) { this.baseClock = baseClock; }

    public int getCores() { return cores; }
    public int getThreads() { return threads; }
    public double getBaseClock() { return baseClock; }
}
