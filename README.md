# MCC Melody for PIC16 - CLB SPI RGB LED Control

Control 8 RGB LEDs via SPI using the Configurable Logic Block (CLB) 
on PIC16, configured via MCC Melody.

## 📹 Video Tutorial
https://youtu.be/07SLEMSCKpk

## 🛠️ Tools & Hardware
- MPLAB X IDE v6.25
- MCC Melody
- PIC16F13145 Curiosity Nano (EV06M52A)
- Curiosity Nano Explorer (EV58G97A)

## 📋 What it does
- Uses CLB Synthesizer to implement a 3-bit counter with reset via Lookup Table
- Controls 8 RGB LEDs over SPI1
- Each LED displays a different color (Green, Red, Blue, Orange, Cyan, Purple, White, Pink)
- Color data is sent as GRB format via SPI buffer exchange
