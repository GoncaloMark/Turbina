/// \file   io.h
/// \author Gonçalo Marques
/// \date   2023-04

#include "include/reg.h"

void write_reg(uint16_t add, uint8_t val) { 
    (*((uint8_t*) ((void*)add))) = val; 
}

uint8_t read_reg(uint16_t add) { 
    return (*((uint8_t*) ((void*)add))); 
}

