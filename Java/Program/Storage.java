public class Storage extends Component {
    protected int capacity;
    protected String type;

    public Storage() {}

    public Storage(String brand, String model, int capacity, String type) {
        super(brand, model);
        this.capacity = capacity;
        this.type = type;
    }

    public void setCapacity(int capacity) { this.capacity = capacity; }
    public void setType(String type) { this.type = type; }

    public int getCapacity() { return capacity; }
    public String getType() { return type; }
}
