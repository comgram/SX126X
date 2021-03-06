/*
******************************************************************************************************

Copyright of the author Stuart Robinson

These programs may be used free of charge for personal, recreational and educational purposes only.

This program, or parts of it, may not be used for or in connection with any commercial purpose without
the explicit permission of the author Stuart Robinson.

The programs are supplied as is, it is up to individual to decide if the programs are suitable for the
intended purpose and free from errors.

Changes:

To Do:

******************************************************************************************************
*/


//*******  Setup hardware pin definitions here ! ***************

//These are the pin definitions for one of my own boards, be sure to change them to match
//your own setup

#define NSS 10
#define RFBUSY A1
#define NRESET 9
#define LED1 8
#define DIO1 2
#define DIO2 -1                 //not used 
#define DIO3 -1                 //not used   
#define BUZZER 3                


//*******  Setup LoRa Test Parameters Here ! ***************

//LoRa Modem Parameters
const uint32_t Frequency = 434400000;           //frequency of transmissions
const uint32_t Offset = 0;                      //offset frequency for calibration purposes  

const uint8_t Bandwidth = LORA_BW_125;          //LoRa bandwidth
const uint8_t SpreadingFactor = LORA_SF7;       //LoRa spreading factor
const uint8_t CodeRate = LORA_CR_4_5;           //LoRa coding rate
const uint8_t Optimisation = LDRO_AUTO;         //low data rate optimisation setting

/*
Output powers are;
- 17dBm to +14dBm in steps of 1dBm if low power PA is selected as for SX1261
- 9dBm to +22dBm in steps of 1dBm if high power PA is selected as for SX1262
*/

#define start_power 14                          //link test program only - Start power for transmissions in dBm
#define end_power -9                            //link test program only - end power for transmissions in dBm
#define Batch 0x3939                            //link test program only - for future applications, not used here 
#define ThisNode 'L'                            //link test program only - identifies the trasnmitter node

#define packet_delay 1000                       //mS delay between packets
#define mode_delaymS 2000                       //link test program only - mS delay between test sequences

#define RXBUFFER_SIZE 32                        //RX buffer size  
#define TXBUFFER_SIZE 32                        //RX buffer size


