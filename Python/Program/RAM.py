from Component import Component

class RAM(Component):
    def __init__(self, brand="", model="", size=0, ddr="", frequency=0.0):
        super().__init__(brand, model)
        self.size = size
        self.ddr = ddr
        self.frequency = frequency

    def set_size(self, size):
        self.size = size

    def set_ddr(self, ddr):
        self.ddr = ddr

    def set_frequency(self, frequency):
        self.frequency = frequency

    def get_size(self):
        return self.size

    def get_ddr(self):
        return self.ddr

    def get_frequency(self):
        return self.frequency
