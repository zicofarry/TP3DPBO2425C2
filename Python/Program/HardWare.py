class HardWare:
    def __init__(self, name="", brand="", price=0.0, warranty=0):
        self.name = name
        self.brand = brand
        self.price = price
        self.warranty = warranty

    def set_name(self, name):
        self.name = name

    def set_brand(self, brand):
        self.brand = brand

    def set_price(self, price):
        self.price = price

    def set_warranty(self, warranty):
        self.warranty = warranty

    def get_name(self):
        return self.name

    def get_brand(self):
        return self.brand

    def get_price(self):
        return self.price

    def get_warranty(self):
        return self.warranty
