clear all;
device = serialport("COM7", 115200);
while(1)
  write(device, [1, 2], "uint8");    
  read(device, 8, "uint8")
  pause(0.5);
end