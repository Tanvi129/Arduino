import serial.tools.list_ports as sp,serial

def get_ports():
    ports=sp.comports()
    return ports

def findArduino(portFound):
    comport="None"
    numConnection=len(portFound)

    for i in range(numConnection):
        port=portFound[i]
        strport=str(port)
        if "Arduino" in strport:
            splitPort=strport.split(" ")
            comport=splitPort[0]

    return comport

foundPort=get_ports()
connectPort=findArduino(foundPort)

if connectPort!='None':
    ser=serial.Serial(connectPort,baudrate=9600,timeout=1)
    print("Connected to " + connectPort)



else:
    print("Connection Issue")
print("Done")
    
    
