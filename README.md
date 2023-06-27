# GXUbase16
This algorithm just for some shower heater for GuangXi some tow one one, some Dormitory area, if this not work, emmmm.
I am already forget the encryption principle, I wrote this codes many years ago, if you want to challenge yourself, you can read it, it's not too long.
## get data:
1. download trnas.cpp
2. g++ -fexec-charset=GBK trans.cpp -o trans.exe && trans.exe

   21

   340800000000000000000000000000003C

## hack step:
1. make sure that your Android device can use NFC and install [MIFARE Classic Tool](https://github.com/ikarus23/MifareClassicTool)
2. use your phone swipe your campus card and tap "write tags"
3. sector: 12

   block:1

   data:340800000000000000000000000000003C

   write block

   sector: 12
   
   block:2
   
   data:340800000000000000000000000000003C
   
   write block
   
5. enjoy your shower time.
