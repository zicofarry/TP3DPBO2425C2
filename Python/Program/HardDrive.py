from Storage import Storage
from HardWare import HardWare

class HardDrive(HardWare, Storage):
    def __init__(self, name="", hbrand="", price=0.0, warranty=0,
                 sbrand="", smodel="", capacity=0, type_="",
                 cache=0):
        HardWare.__init__(self, name, hbrand, price, warranty)
        Storage.__init__(self, sbrand, smodel, capacity, type_)
        self.cache = cache

    def set_cache(self, cache):
        self.cache = cache

    def get_cache(self):
        return self.cache

    def print_info(self):
        print("=== Hard Drive ===")
        print(f"Hardware Name  : {self.get_name()}")
        print(f"Hardware Brand : {HardWare.get_brand(self)}")
        print(f"Price          : ${self.get_price()}")
        print(f"Warranty       : {self.get_warranty()} years")
        print(f"Storage Brand  : {Storage.get_brand(self)}")
        print(f"Storage Model  : {self.get_model()}")
        print(f"Capacity       : {self.get_capacity()} GB")
        print(f"Type           : {self.get_type()}")
        print(f"Cache Size     : {self.cache} MB")
