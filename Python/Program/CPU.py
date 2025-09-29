from Component import Component

class CPU(Component):
    def __init__(self, brand="", model="", core=0, thread=0, speed=0.0):
        super().__init__(brand, model)
        self.core = core
        self.thread = thread
        self.speed = speed

    def set_core(self, core):
        self.core = core

    def set_thread(self, thread):
        self.thread = thread

    def set_speed(self, speed):
        self.speed = speed

    def get_core(self):
        return self.core

    def get_thread(self):
        return self.thread

    def get_speed(self):
        return self.speed
