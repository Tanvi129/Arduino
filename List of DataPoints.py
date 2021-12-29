import serial
import time
ser=serial.Serial("COM4",baudrate=9600,timeout=1)
time.sleep(3)

numpoints=5
datalist=[0]*numpoints
def getvalue():
    ser.write(b"g")
    arduinoData=ser.readline().decode("ascii").split("\r\n")    
    
    return arduinoData[0]

while True:
    userInput=input("Get values ? Enter y for yes :")
    if userInput=="y" or userInput=="Y":
        for i in range(numpoints):
            data=getvalue()
            datalist[i]=int(data)
        
        print(datalist)
        
   
