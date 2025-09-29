class Component:
    def __init__(self, brand="", model=""):
        self.brand = brand
        self.model = model

    def set_brand(self, brand):
        self.brand = brand

    def set_model(self, model):
        self.model = model

    def get_brand(self):
        return self.brand

    def get_model(self):
        return self.model
