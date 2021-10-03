/* 
 * File:   RPR0521RS.h
 * Author: HoangKhanhToan
 *
 * Created on Sep 28, 2021, 9:00 AM
 */


#ifndef RPR0521RS_H
#define RPR0521RS_H
//
#include "mcc.h"



#define I2C_TIMEOUT 5

//I2C1_MESSAGE_STATUS I2C_Write(uint8_t Dev_add, uint8_t Reg_add, uint8_t data);   

//I2C1_MESSAGE_STATUS I2C_Read(uint8_t Dev_add, uint8_t Reg_add, uint8_t *data, uint8_t len);


#define RPR0521RS_SYMTEM_CONTROL 0X40
#define RPR0521RS_MODE_CONTROL 0X41
#define RPR0521RS_ALS_PS_CONTROL 0X42
#define RPR0521RS_PS_CONTROL 0X43
#define RPR0521RS_PS_DATA_LSBs 0X44
#define RPR0521RS_PS_DATA_MSBs 0X45
#define RPR0521RS_ALS_DATA0_LSBs 0X46
#define RPR0521RS_ALS_DATA0_MSBs 0X47
#define RPR0521RS_ALS_DATA1_LSBs 0X48
#define RPR0521RS_ALS_DATA1_MSBs 0X49
#define RPR0521RS_INTERRUPT 0X4A
#define RPR0521RS_PS_TH_LSBs 0X4B
#define RPR0521RS_PS_TH_MSBs 0X4C
#define RPR0521RS_PS_TL_LSBs 0X4D
#define RPR0521RS_PS_TL_MSBs 0X4E
#define RPR0521RS_ALS_DATA0_TH_LSBs 0X4F
#define RPR0521RS_ALS_DATA0_TH_MSBs 0X50
#define RPR0521RS_ALS_DATA0_TL_LSBs 0X51
#define RPR0521RS_ALS_DATA0_TL_MSBs 0X52
#define RPR0521RS_PS_OFFSET_LSBs 0X53
#define RPR0521RS_PS_OFFSET_MSBs 0X54
#define RPR0521RS_MANUFACT_ID 0X92



#define RPR0521RS_DEVICE_ADDRESS                   0x38    // 7bit Addrss
#define RPR0521RS_PART_ID_VAL                      0x0A
#define RPR0521RS_MANUFACT_ID_VAL                  0xE0

#define RPR0521RS_MODE_CONTROL_MEASTIME_100_100MS  (6 << 0)
#define RPR0521RS_MODE_CONTROL_PS_EN               (1 << 6)
#define RPR0521RS_MODE_CONTROL_ALS_EN              (1 << 7)

#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_100MA (2 << 0)
#define RPR0521RS_ALS_PS_CONTROL_DATA1_GAIN_X1     (0 << 2)
#define RPR0521RS_ALS_PS_CONTROL_DATA0_GAIN_X1     (0 << 4)

#define RPR0521RS_PS_CONTROL_PS_GAINX1             (0 << 4)

#define RPR0521RS_MODE_CONTROL_VAL                 (RPR0521RS_MODE_CONTROL_MEASTIME_100_100MS | RPR0521RS_MODE_CONTROL_PS_EN | RPR0521RS_MODE_CONTROL_ALS_EN)
#define RPR0521RS_ALS_PS_CONTROL_VAL               (RPR0521RS_ALS_PS_CONTROL_DATA0_GAIN_X1 | RPR0521RS_ALS_PS_CONTROL_DATA1_GAIN_X1 | RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_100MA)
#define RPR0521RS_PS_CONTROL_VAL                   (RPR0521RS_PS_CONTROL_PS_GAINX1)

#define RPR0521RS_NEAR_THRESH                      (1000) // example value
#define RPR0521RS_FAR_VAL                          (0)
#define RPR0521RS_NEAR_VAL                         (1)

#define RPR0521RS_ERROR                            (-1)


    
    uint8_t RPR0521RS_init(void);
    uint8_t RPR0521RS_get_rawpsalsval(uint8_t *data);
    uint8_t RPR0521RS_get_psalsval(uint16_t *ps, float *als);
    int RPR0521RS_convert_lx(uint16_t *data);
    uint16_t RPR0521RS_check_near_far(uint16_t data);
    uint8_t _als_data0_gain;
    uint8_t _als_data1_gain;
    uint8_t _als_measure_time;


#endif