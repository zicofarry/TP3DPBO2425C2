from HardDrive import HardDrive

class HDD(HardDrive):
    def __init__(self, name="", hbrand="", price=0.0, warranty=0,
                 sbrand="", smodel="", capacity=0, type_="",
                 cache=0, rpm=0):
        super().__init__(name, hbrand, price, warranty, sbrand, smodel, capacity, type_, cache)
        self.rpm = rpm

    def set_rpm(self, rpm):
        self.rpm = rpm

    def get_rpm(self):
        return self.rpm

    def print_info(self):
        print("=== HDD ===")
        super().print_info()
        print(f"RPM           : {self.rpm}")
