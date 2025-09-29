from SoftWare import SoftWare

class OperatingSystem(SoftWare):
    def __init__(self, name="", version="", architecture="", kernel=""):
        super().__init__(name, version)
        self.architecture = architecture
        self.kernel = kernel

    def set_architecture(self, architecture):
        self.architecture = architecture

    def set_kernel(self, kernel):
        self.kernel = kernel

    def get_architecture(self):
        return self.architecture

    def get_kernel(self):
        return self.kernel
