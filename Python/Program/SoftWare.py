class SoftWare:
    def __init__(self, name="", version=""):
        self.name = name
        self.version = version

    def set_name(self, name):
        self.name = name

    def set_version(self, version):
        self.version = version

    def get_name(self):
        return self.name

    def get_version(self):
        return self.version
