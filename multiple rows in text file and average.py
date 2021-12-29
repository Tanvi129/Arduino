import serial
import time
ser=serial.Serial("COM4",baudrate=9600,timeout=1)
time.sleep(3)
f=open("datafile.txt","w")
numpoints=20
datalist=[0]*numpoints
numRowsCollected=50

def getvalue():
    ser.write(b"g")
    arduinoData=ser.readline().decode("ascii").split("\r\n")    
    
    return arduinoData[0]

def printToFile(data,index):
    f.write(data)
    if(index!= (numpoints-1)):
       f.write(",")
    else:
        f.write("\n")

def getAverage(dataSet,row):
    dataAverage=sum(dataSet)/len(dataSet)
    print("Average for " + str(row) + "is: " + str(dataAverage))


while(1):

    userInput=input("Get values ? Enter y for yes :")
    if userInput=="y" or userInput=="Y":
        for row in range(0,numRowsCollected):
            for i in range(numpoints):
                data=getvalue()
                printToFile(data,i)
                dataInt=int(data)
                datalist[i]=dataInt
            getAverage(datalist,row)
    f.close()
    break
            
            
        
        
    
