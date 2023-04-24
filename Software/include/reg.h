/// \file   reg.h
/// \author Gonçalo Marques
/// \date   2023-04

#ifndef __REG_H__
#define __REG_H__
#include <stdint.h>

void write_reg(uint16_t add, uint8_t val);
uint8_t read_reg(uint16_t add);

#endif // __REG_H__