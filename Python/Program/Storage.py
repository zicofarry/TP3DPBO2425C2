from Component import Component

class Storage(Component):
    def __init__(self, brand="", model="", capacity=0, type_=""):
        super().__init__(brand, model)
        self.capacity = capacity
        self.type = type_

    def set_capacity(self, capacity):
        self.capacity = capacity

    def set_type(self, type_):
        self.type = type_

    def get_capacity(self):
        return self.capacity

    def get_type(self):
        return self.type
