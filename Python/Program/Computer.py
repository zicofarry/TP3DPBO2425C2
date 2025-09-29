class Computer:
    def __init__(self):
        self.OS = None
        self.cpu = None
        self.ram = None
        self.storage = None
        self.applications = []

    def set_os(self, os):
        self.OS = os

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_ram(self, ram):
        self.ram = ram

    def set_storage(self, storage):
        self.storage = storage

    def add_application(self, app):
        self.applications.append(app)

    def get_os(self):
        return self.OS

    def get_cpu(self):
        return self.cpu

    def get_ram(self):
        return self.ram

    def get_storage(self):
        return self.storage

    def get_applications(self):
        return self.applications

    def print_info(self):
        print(f"CPU: {self.cpu.get_brand()} {self.cpu.get_model()} - {self.cpu.get_core()} cores @ {self.cpu.get_speed()}GHz")
        print(f"RAM: {self.ram.get_size()}GB {self.ram.get_ddr()}")
        print(f"Storage: {self.storage.get_brand()} {self.storage.get_model()} {self.storage.get_capacity()}GB")
        print(f"OS: {self.OS.get_name()} {self.OS.get_version()}")
        print("Installed Apps:")
        for a in self.applications:
            print(f"- {a.get_name()} ({a.get_category()})")

