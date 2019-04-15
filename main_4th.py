import RPi.GPIO as GPIO
import time
import threading
import pygame
r1 = -1
r2 = -1
r3 = -1
r4 = -1

R1 = -1
R2 = -1
R3 = -1
R4 = -1


GPIO.setmode(GPIO.BCM)

a_pin = 18
b_pin = 23

c_pin = 17
d_pin = 27

e_pin = 22
f_pin = 24

g_pin = 25
h_pin = 5

class Repository:
    a = '0'
    def setA(self, input):
        self.a = input
    def getA(self):
        return self.a

    b = '0'
    def setB(self, input):
        self.b = input
    def getB(self):
        return self.b
    
    c = '0'
    def setC(self, input):
        self.c = input
    def getC(self):
        return self.c

    d = '0'
    def setD(self, input):
        self.d = input
    def getD(self):
        return self.d

ins = Repository()



"""resistance for the for resistors"""
"""resistance for the for resistors"""
"""resistance for the for resistors"""


def resistor1():
    def discharge1():
        GPIO.setup(a_pin, GPIO.IN)
        GPIO.setup(b_pin, GPIO.OUT)
        GPIO.output(b_pin, False)
        time.sleep(0.005)

    def charge_time1():
        GPIO.setup(b_pin, GPIO.IN)
        GPIO.setup(a_pin, GPIO.OUT)
        count1 = 0
        GPIO.output(a_pin, True)
        while not GPIO.input(b_pin):
            count1 = count1 + 1
        return count1

    def analog_read1():
        discharge1()
        return charge_time1()

    while True:
        ins.setA(analog_read1())


def resistor2():
    def discharge2():
        GPIO.setup(c_pin, GPIO.IN)
        GPIO.setup(d_pin, GPIO.OUT)
        GPIO.output(d_pin, False)
        time.sleep(0.005)

    def charge_time2():
        GPIO.setup(d_pin, GPIO.IN)
        GPIO.setup(c_pin, GPIO.OUT)
        count2 = 0
        GPIO.output(c_pin, True)
        while not GPIO.input(d_pin):
            count2 = count2 + 1
        return count2

    def analog_read2():
        discharge2()
        return charge_time2()

    while True:
        ins.setB(analog_read2())
        
def resistor3():
            
    def discharge3():
        GPIO.setup(e_pin, GPIO.IN)
        GPIO.setup(f_pin, GPIO.OUT)
        GPIO.output(f_pin, False)
        time.sleep(0.005)

    def charge_time3():
        GPIO.setup(f_pin, GPIO.IN)
        GPIO.setup(e_pin, GPIO.OUT)
        count3 = 0
        GPIO.output(e_pin, True)
        while not GPIO.input(f_pin):
            count3 = count3 + 1
        return count3

    def analog_read3():
        discharge3()
        return charge_time3()

    while True:
        ins.setC(analog_read3())
        
def resistor4():        
       
    def discharge4():
        GPIO.setup(g_pin, GPIO.IN)
        GPIO.setup(h_pin, GPIO.OUT)
        GPIO.output(h_pin, False)
        time.sleep(0.005)

    def charge_time4():
        GPIO.setup(h_pin, GPIO.IN)
        GPIO.setup(g_pin, GPIO.OUT)
        count4 = 0
        GPIO.output(g_pin, True)
        while not GPIO.input(h_pin):
            count4 = count4 + 1
        return count4

    def analog_read4():
        discharge4()
        return charge_time4()

    while True:        
        ins.setD(analog_read4())
"""resistance for the for resistors"""
"""resistance for the for resistors"""
"""resistance for the for resistors"""
        
        
        
""" music play module"""
""" music play module"""
""" music play module"""  
       
 
def playMusic(filename, loops, start=0.0, value=0.5):
    """
    :param filename: file name
    :param loops: loop times
    :param start: when starts
    :param value: set volume, from 0 to 1
    :return:
    """
    pygame.mixer.init()  
    pygame.mixer.music.load(filename)
    pygame.mixer.music.play(loops=loops, start=start)
    pygame.mixer.music.set_volume(value)  
    
def stopMusic():
    pygame.mixer.init()  
    pygame.mixer.music.stop()

 
""" music play module"""
""" music play module"""
""" music play module"""


""" main function"""
""" main function"""
""" main function"""
 
 
def main():
    while True:
        
        global r1
        global r2
        global r3
        global r4
        
        global R1
        global R2
        global R3
        global R4
        
        """
        R1 = ins.getA()
        R2 = ins.getB()
        R3 = ins.getC()
        R4 = ins.getD()
        """
        
        if ins.getA() in range (0,280):
            r1 = 1
  
        elif ins.getA() in range (280,1000):
            r1 = 0
        
        
        
        if ins.getB() in range (0,460):
            r2 = 0
        elif ins.getB() in range (460,1000):
            r2 = 1
        

        
            
        if ins.getC() in range (0,440):
            r3 = 1
        elif ins.getC() in range (440,1000):
            r3 = 0
        
        
        
        if ins.getD() in range (0,500):
            r4 = 0
        elif ins.getD() in range (500,1000):
            r4 = 1
       
            
        print("R1 is *", ins.getA(), "module ", r1)
        print("R2 is *", ins.getB(), "module ", r2)
        print("R3 is *", ins.getC(), "module ", r3)
        print("R4 is *", ins.getD(), "module ", r4)
        print("-------------------------------------")
        time.sleep(1)
        
        
        if r1 != R1 or r2 != R2 or r3 != R3 or r4 != R4:
            
            R1 = r1
            R2 = r2
            R3 = r3
            R4 = r4
            """
            if r1 == 0 and r2 == 0 and r3 == 0 :
                stopMusic()
            elif r1 == 1 and r2 == 0 and r3 == 0 :
                playMusic('/home/pi/Desktop/DIP/2.mp3', 1000000, 0.0, 0.5)
            elif r1 == 0 and r2 == 0 and r3 == 1:
                playMusic('/home/pi/Desktop/DIP/3.mp3', 1000000, 0.0, 0.5)
            elif r1 == 1 and r2 == 0 and r3 == 1:
                playMusic('/home/pi/Desktop/DIP/4.mp3', 1000000, 0.0, 0.5)
            else:
                playMusic('/home/pi/Desktop/DIP/1.mp3', 1000000, 0.0, 0.5)
                
            """
            if r3 == 0 :
                stopMusic()
            elif r1 == 1 and r2 == 1 and r3 == 1 :
                playMusic('/home/pi/Desktop/DIP/killer.mp3', 1000000, 0.0, 0.5)
            else:
                playMusic('/home/pi/Desktop/DIP/noise.mp3', 1000000, 0.0, 0.5)
                
        
        
       
threading.Thread(target=resistor1).start()
threading.Thread(target=resistor2).start()
threading.Thread(target=resistor3).start()
threading.Thread(target=resistor4).start()
threading.Thread(target=main).start()

