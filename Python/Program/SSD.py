from HardDrive import HardDrive

class SSD(HardDrive):
    def __init__(self, name="", hbrand="", price=0.0, warranty=0,
                 sbrand="", smodel="", capacity=0, type_="",
                 cache=0, read_speed=0.0, write_speed=0.0):
        super().__init__(name, hbrand, price, warranty, sbrand, smodel, capacity, type_, cache)
        self.read_speed = read_speed
        self.write_speed = write_speed

    def set_read_speed(self, r):
        self.read_speed = r

    def set_write_speed(self, w):
        self.write_speed = w

    def get_read_speed(self):
        return self.read_speed

    def get_write_speed(self):
        return self.write_speed

    def print_info(self):
        print("=== SSD ===")
        super().print_info()
        print(f"Read Speed    : {self.read_speed} MB/s")
        print(f"Write Speed   : {self.write_speed} MB/s")
