/// \file   io.h
/// \author Gonçalo Marques
/// \date   2023-04

#ifndef __IO_H__
#define __IO_H__

#include <stdint.h>
#include <stddef.h>

typedef struct OUT {
    uint8_t brake;
    uint8_t vout;
    uint8_t leds;
} output_t;

typedef struct IN {
    uint16_t vin;
    uint8_t vbat;
    uint8_t vout;
} input_t;

typedef enum LEDS {
    green = 0x20,
    yellow = 0x10,
    red = 0x08
} led_t;

void init_io(void);
void set_outputs(output_t* outputs);
void get_inputs(input_t* inputs);

#endif  // __IO_H__