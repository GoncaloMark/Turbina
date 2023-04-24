/// \file   io.h
/// \author Gonçalo Marques
/// \date   2023-04

#include "include/io.h"
#include "include/reg.h"
#define LATC_ADD  (0x010E)
#define TRISC_ADD (0x008E)

// io.c

void init_io(void) {
    write_reg(LATC_ADD, 0x0);
    write_reg(TRISC_ADD, 0x7);
}

void set_outputs(output_t* outputs){
    if(outputs == NULL) return;

    uint8_t read_out = read_reg(LATC_ADD);
    read_out &= 0x7;
    read_out |= outputs->leds;
    write_reg(LATC_ADD, read_out);
}

void get_inputs(input_t* inputs){
    if(inputs == NULL) return;

    inputs->vin = 0;
    inputs->vbat = 0;
    inputs->vout = 0;
}
