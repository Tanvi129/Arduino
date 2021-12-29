import serial
import time
ser=serial.Serial("COM4",baudrate=9600,timeout=1)
time.sleep(3)


def getvalue():
    ser.write(b"g")
    arduinoData=ser.readline().decode("ascii")
    return arduinoData
while 1:
    userInput=input("Get values ? Enter y for yes :")
    if userInput=="y" or userInput=="Y":
        print(getvalue())
   
