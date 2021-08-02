/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15376
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set TEXTLCD_D7 aliases
#define TEXTLCD_D7_TRIS                 TRISAbits.TRISA0
#define TEXTLCD_D7_LAT                  LATAbits.LATA0
#define TEXTLCD_D7_PORT                 PORTAbits.RA0
#define TEXTLCD_D7_WPU                  WPUAbits.WPUA0
#define TEXTLCD_D7_OD                   ODCONAbits.ODCA0
#define TEXTLCD_D7_ANS                  ANSELAbits.ANSA0
#define TEXTLCD_D7_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define TEXTLCD_D7_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define TEXTLCD_D7_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define TEXTLCD_D7_GetValue()           PORTAbits.RA0
#define TEXTLCD_D7_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define TEXTLCD_D7_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define TEXTLCD_D7_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define TEXTLCD_D7_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define TEXTLCD_D7_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define TEXTLCD_D7_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define TEXTLCD_D7_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define TEXTLCD_D7_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set TEXTLCD_D6 aliases
#define TEXTLCD_D6_TRIS                 TRISAbits.TRISA1
#define TEXTLCD_D6_LAT                  LATAbits.LATA1
#define TEXTLCD_D6_PORT                 PORTAbits.RA1
#define TEXTLCD_D6_WPU                  WPUAbits.WPUA1
#define TEXTLCD_D6_OD                   ODCONAbits.ODCA1
#define TEXTLCD_D6_ANS                  ANSELAbits.ANSA1
#define TEXTLCD_D6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define TEXTLCD_D6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define TEXTLCD_D6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define TEXTLCD_D6_GetValue()           PORTAbits.RA1
#define TEXTLCD_D6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define TEXTLCD_D6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define TEXTLCD_D6_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define TEXTLCD_D6_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define TEXTLCD_D6_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define TEXTLCD_D6_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define TEXTLCD_D6_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define TEXTLCD_D6_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set TEXTLCD_D5 aliases
#define TEXTLCD_D5_TRIS                 TRISAbits.TRISA3
#define TEXTLCD_D5_LAT                  LATAbits.LATA3
#define TEXTLCD_D5_PORT                 PORTAbits.RA3
#define TEXTLCD_D5_WPU                  WPUAbits.WPUA3
#define TEXTLCD_D5_OD                   ODCONAbits.ODCA3
#define TEXTLCD_D5_ANS                  ANSELAbits.ANSA3
#define TEXTLCD_D5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define TEXTLCD_D5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define TEXTLCD_D5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define TEXTLCD_D5_GetValue()           PORTAbits.RA3
#define TEXTLCD_D5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define TEXTLCD_D5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define TEXTLCD_D5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define TEXTLCD_D5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define TEXTLCD_D5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define TEXTLCD_D5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define TEXTLCD_D5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define TEXTLCD_D5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set TEXTLCD_D4 aliases
#define TEXTLCD_D4_TRIS                 TRISAbits.TRISA4
#define TEXTLCD_D4_LAT                  LATAbits.LATA4
#define TEXTLCD_D4_PORT                 PORTAbits.RA4
#define TEXTLCD_D4_WPU                  WPUAbits.WPUA4
#define TEXTLCD_D4_OD                   ODCONAbits.ODCA4
#define TEXTLCD_D4_ANS                  ANSELAbits.ANSA4
#define TEXTLCD_D4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define TEXTLCD_D4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define TEXTLCD_D4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define TEXTLCD_D4_GetValue()           PORTAbits.RA4
#define TEXTLCD_D4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define TEXTLCD_D4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define TEXTLCD_D4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define TEXTLCD_D4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define TEXTLCD_D4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define TEXTLCD_D4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define TEXTLCD_D4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define TEXTLCD_D4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set UNIBUS_RTS_IO aliases
#define UNIBUS_RTS_IO_TRIS                 TRISBbits.TRISB0
#define UNIBUS_RTS_IO_LAT                  LATBbits.LATB0
#define UNIBUS_RTS_IO_PORT                 PORTBbits.RB0
#define UNIBUS_RTS_IO_WPU                  WPUBbits.WPUB0
#define UNIBUS_RTS_IO_OD                   ODCONBbits.ODCB0
#define UNIBUS_RTS_IO_ANS                  ANSELBbits.ANSB0
#define UNIBUS_RTS_IO_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define UNIBUS_RTS_IO_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define UNIBUS_RTS_IO_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define UNIBUS_RTS_IO_GetValue()           PORTBbits.RB0
#define UNIBUS_RTS_IO_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define UNIBUS_RTS_IO_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define UNIBUS_RTS_IO_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define UNIBUS_RTS_IO_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define UNIBUS_RTS_IO_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define UNIBUS_RTS_IO_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define UNIBUS_RTS_IO_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define UNIBUS_RTS_IO_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set UNIBUS_CTS_IO aliases
#define UNIBUS_CTS_IO_TRIS                 TRISBbits.TRISB1
#define UNIBUS_CTS_IO_LAT                  LATBbits.LATB1
#define UNIBUS_CTS_IO_PORT                 PORTBbits.RB1
#define UNIBUS_CTS_IO_WPU                  WPUBbits.WPUB1
#define UNIBUS_CTS_IO_OD                   ODCONBbits.ODCB1
#define UNIBUS_CTS_IO_ANS                  ANSELBbits.ANSB1
#define UNIBUS_CTS_IO_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define UNIBUS_CTS_IO_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define UNIBUS_CTS_IO_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define UNIBUS_CTS_IO_GetValue()           PORTBbits.RB1
#define UNIBUS_CTS_IO_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define UNIBUS_CTS_IO_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define UNIBUS_CTS_IO_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define UNIBUS_CTS_IO_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define UNIBUS_CTS_IO_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define UNIBUS_CTS_IO_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define UNIBUS_CTS_IO_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define UNIBUS_CTS_IO_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set UNIBUS_SCK aliases
#define UNIBUS_SCK_TRIS                 TRISCbits.TRISC4
#define UNIBUS_SCK_LAT                  LATCbits.LATC4
#define UNIBUS_SCK_PORT                 PORTCbits.RC4
#define UNIBUS_SCK_WPU                  WPUCbits.WPUC4
#define UNIBUS_SCK_OD                   ODCONCbits.ODCC4
#define UNIBUS_SCK_ANS                  ANSELCbits.ANSC4
#define UNIBUS_SCK_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define UNIBUS_SCK_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define UNIBUS_SCK_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define UNIBUS_SCK_GetValue()           PORTCbits.RC4
#define UNIBUS_SCK_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define UNIBUS_SCK_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define UNIBUS_SCK_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define UNIBUS_SCK_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define UNIBUS_SCK_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define UNIBUS_SCK_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define UNIBUS_SCK_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define UNIBUS_SCK_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set UNIBUS_SS_IO aliases
#define UNIBUS_SS_IO_TRIS                 TRISDbits.TRISD7
#define UNIBUS_SS_IO_LAT                  LATDbits.LATD7
#define UNIBUS_SS_IO_PORT                 PORTDbits.RD7
#define UNIBUS_SS_IO_WPU                  WPUDbits.WPUD7
#define UNIBUS_SS_IO_OD                   ODCONDbits.ODCD7
#define UNIBUS_SS_IO_ANS                  ANSELDbits.ANSD7
#define UNIBUS_SS_IO_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define UNIBUS_SS_IO_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define UNIBUS_SS_IO_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define UNIBUS_SS_IO_GetValue()           PORTDbits.RD7
#define UNIBUS_SS_IO_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define UNIBUS_SS_IO_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define UNIBUS_SS_IO_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define UNIBUS_SS_IO_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define UNIBUS_SS_IO_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define UNIBUS_SS_IO_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define UNIBUS_SS_IO_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define UNIBUS_SS_IO_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set TEXTLCD_EN aliases
#define TEXTLCD_EN_TRIS                 TRISEbits.TRISE1
#define TEXTLCD_EN_LAT                  LATEbits.LATE1
#define TEXTLCD_EN_PORT                 PORTEbits.RE1
#define TEXTLCD_EN_WPU                  WPUEbits.WPUE1
#define TEXTLCD_EN_OD                   ODCONEbits.ODCE1
#define TEXTLCD_EN_ANS                  ANSELEbits.ANSE1
#define TEXTLCD_EN_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define TEXTLCD_EN_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define TEXTLCD_EN_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define TEXTLCD_EN_GetValue()           PORTEbits.RE1
#define TEXTLCD_EN_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define TEXTLCD_EN_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define TEXTLCD_EN_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define TEXTLCD_EN_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define TEXTLCD_EN_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define TEXTLCD_EN_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define TEXTLCD_EN_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define TEXTLCD_EN_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set TEXTLCD_RS aliases
#define TEXTLCD_RS_TRIS                 TRISEbits.TRISE2
#define TEXTLCD_RS_LAT                  LATEbits.LATE2
#define TEXTLCD_RS_PORT                 PORTEbits.RE2
#define TEXTLCD_RS_WPU                  WPUEbits.WPUE2
#define TEXTLCD_RS_OD                   ODCONEbits.ODCE2
#define TEXTLCD_RS_ANS                  ANSELEbits.ANSE2
#define TEXTLCD_RS_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define TEXTLCD_RS_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define TEXTLCD_RS_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define TEXTLCD_RS_GetValue()           PORTEbits.RE2
#define TEXTLCD_RS_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define TEXTLCD_RS_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define TEXTLCD_RS_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define TEXTLCD_RS_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define TEXTLCD_RS_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define TEXTLCD_RS_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define TEXTLCD_RS_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define TEXTLCD_RS_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/