from SoftWare import SoftWare

class Application(SoftWare):
    def __init__(self, name="", version="", category="", license_=""):
        super().__init__(name, version)
        self.category = category
        self.license = license_

    def set_category(self, category):
        self.category = category

    def set_license(self, license_):
        self.license = license_

    def get_category(self):
        return self.category

    def get_license(self):
        return self.license
