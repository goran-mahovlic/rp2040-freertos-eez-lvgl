#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[769] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0x98, 0x06, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0xF0, 0x00, 0x40, 0x01, 0x01, 0x28,
    0x00, 0x13, 0x01, 0x1C, 0x00, 0x00, 0x08, 0x00, 0xA6, 0x1C, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
    0x00, 0x94, 0x05, 0x2C, 0x00, 0x13, 0x0C, 0x08, 0x00, 0x93, 0x10, 0x00, 0x00, 0x00, 0x34, 0x00,
    0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 0x10, 0x00, 0x13, 0x30, 0x10, 0x00, 0xAE, 0x68, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x80, 0x05, 0x78, 0x00, 0xD0, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C,
    0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0x48, 0x10, 0x00, 0x00, 0x28, 0x00, 0xC1, 0x00, 0x00, 0x00,
    0x9C, 0x00, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 0xD4, 0x90, 0x00, 0xF6, 0x21, 0x00, 0x00, 0x0C,
    0x01, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x94,
    0x01, 0x00, 0x00, 0xB0, 0x01, 0x00, 0x00, 0xCC, 0x01, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x00, 0x0C,
    0x02, 0x00, 0x00, 0x2C, 0x02, 0x00, 0x00, 0x38, 0x02, 0x00, 0x00, 0x10, 0x27, 0x60, 0x00, 0x01,
    0x90, 0x00, 0x12, 0x02, 0xC0, 0x00, 0x00, 0x08, 0x00, 0x5B, 0xFF, 0xFF, 0x00, 0x00, 0x11, 0x20,
    0x00, 0x13, 0x20, 0x20, 0x00, 0x13, 0x20, 0x20, 0x00, 0x1B, 0x12, 0x20, 0x00, 0x13, 0x0C, 0x20,
    0x00, 0x1F, 0x0C, 0x20, 0x00, 0x04, 0x22, 0xF8, 0x01, 0x20, 0x00, 0x00, 0x08, 0x00, 0x2E, 0xFF,
    0xFF, 0x80, 0x00, 0x13, 0xE4, 0x20, 0x00, 0x1F, 0xE4, 0x20, 0x00, 0x04, 0x13, 0xD0, 0x20, 0x00,
    0x1F, 0xD0, 0x20, 0x00, 0x04, 0x13, 0xBC, 0x20, 0x00, 0x13, 0xBC, 0x20, 0x00, 0x2E, 0xEF, 0x03,
    0x48, 0x01, 0x00, 0x20, 0x00, 0x13, 0xA0, 0x20, 0x00, 0x00, 0x0C, 0x00, 0x2F, 0x98, 0x01, 0x28,
    0x00, 0x07, 0x17, 0x80, 0x28, 0x00, 0x5F, 0x78, 0x01, 0x00, 0x00, 0xE9, 0x28, 0x00, 0x04, 0x13,
    0x60, 0x28, 0x00, 0x22, 0x06, 0x04, 0x10, 0x00, 0x2A, 0x54, 0x01, 0x20, 0x00, 0x17, 0x48, 0x48,
    0x00, 0x62, 0x40, 0x01, 0x00, 0x00, 0xFA, 0x03, 0xB0, 0x00, 0x50, 0x38, 0x01, 0x00, 0x00, 0x04,
    0x70, 0x01, 0x12, 0x01, 0x10, 0x00, 0x13, 0x3C, 0x28, 0x00, 0x23, 0xF6, 0x03, 0x88, 0x01, 0x03,
    0xD0, 0x00, 0x13, 0x30, 0x08, 0x00, 0x1B, 0x2C, 0x68, 0x00, 0x1B, 0x20, 0x68, 0x00, 0x17, 0x14,
    0x68, 0x00, 0x00, 0x08, 0x02, 0x13, 0xF2, 0x48, 0x00, 0x13, 0x04, 0x40, 0x00, 0x00, 0x05, 0x00,
    0x00, 0xC3, 0x00, 0x2A, 0xFC, 0x00, 0x68, 0x00, 0x13, 0xF8, 0x40, 0x00, 0x13, 0xF4, 0x08, 0x00,
    0x13, 0xF0, 0x20, 0x00, 0x13, 0x00, 0x90, 0x02, 0x08, 0xF0, 0x00, 0x0C, 0x10, 0x00, 0x17, 0xC8,
    0x04, 0x00, 0x17, 0xD0, 0x04, 0x00, 0x17, 0xD8, 0x04, 0x00, 0x17, 0xE0, 0x04, 0x00, 0x17, 0xE8,
    0x04, 0x00, 0x17, 0xF0, 0x04, 0x00, 0x17, 0xF8, 0x04, 0x00, 0x00, 0x85, 0x00, 0x22, 0x08, 0x01,
    0xC4, 0x00, 0x00, 0xD4, 0x00, 0x13, 0x18, 0xC0, 0x00, 0x51, 0x1C, 0x01, 0x00, 0x00, 0x24, 0xC4,
    0x00, 0x11, 0x04, 0x1C, 0x01, 0x0C, 0x04, 0x00, 0x13, 0x3C, 0x48, 0x01, 0x22, 0x40, 0x01, 0x04,
    0x00, 0x00, 0x47, 0x03, 0x53, 0x44, 0x01, 0x00, 0x00, 0x4C, 0x28, 0x01, 0x22, 0x68, 0x01, 0x04,
    0x00, 0x00, 0x18, 0x03, 0x00, 0xD0, 0x01, 0x62, 0x06, 0x00, 0x00, 0x00, 0x7C, 0x01, 0x04, 0x00,
    0x05, 0xA1, 0x00, 0x08, 0xDD, 0x00, 0x0F, 0x14, 0x00, 0x65, 0x07, 0xD4, 0x01, 0x13, 0xEC, 0x04,
    0x00, 0x08, 0x14, 0x00, 0x13, 0xE4, 0x04, 0x00, 0x17, 0x01, 0x08, 0x00, 0x00, 0x04, 0x00, 0x13,
    0xDC, 0x08, 0x00, 0x13, 0x02, 0x08, 0x00, 0x51, 0x0D, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0x01, 0x02,
    0xCE, 0x01, 0xF0, 0x01, 0x01, 0x40, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xE0, 0x04, 0x00, 0x00, 0xE0,
    0x05, 0x00, 0x00, 0xE0, 0x24, 0x00, 0x17, 0xB0, 0x40, 0x00, 0x13, 0xA8, 0x64, 0x00, 0x13, 0x06,
    0x1C, 0x00, 0x17, 0x9C, 0x1C, 0x00, 0x17, 0x94, 0x0C, 0x00, 0x12, 0x01, 0x24, 0x00, 0x02, 0xD0,
    0x04, 0x12, 0x0E, 0x08, 0x00, 0x29, 0xE8, 0x03, 0x24, 0x02, 0x18, 0xE0, 0xB0, 0x00, 0x00, 0x04,
    0x00, 0x17, 0x58, 0x10, 0x00, 0x13, 0x50, 0x0C, 0x00, 0x13, 0x08, 0x68, 0x00, 0x13, 0x44, 0x18,
    0x00, 0xC4, 0x00, 0x40, 0x00, 0xE0, 0x00, 0x40, 0x02, 0x00, 0x00, 0xC0, 0x00, 0xE0, 0x0C, 0x00,
    0x93, 0x01, 0xC0, 0x00, 0xE0, 0x28, 0x00, 0x00, 0x00, 0x28, 0xC0, 0x00, 0x04, 0x98, 0x05, 0x0F,
    0x04, 0x00, 0x01, 0x11, 0x0E, 0x68, 0x05, 0xF1, 0x02, 0x02, 0x00, 0x0A, 0x00, 0x01, 0x00, 0x0B,
    0x00, 0x03, 0x00, 0x0B, 0x00, 0x04, 0x00, 0x0F, 0x00, 0x06, 0x0C, 0x00, 0x31, 0x0D, 0x00, 0x05,
    0x04, 0x00, 0x00, 0x6C, 0x05, 0x10, 0x3C, 0x94, 0x03, 0x00, 0xA8, 0x03, 0x00, 0xBC, 0x03, 0x40,
    0x00, 0x00, 0x00, 0x6C, 0xE0, 0x03, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x90,
    0x00, 0x00, 0x00, 0x03, 0x03, 0x01, 0x01, 0x01, 0x03, 0x01, 0x94, 0x01, 0x06, 0x0F, 0x10, 0x03,
    0x01, 0x2F, 0x01, 0x00, 0x30, 0x03, 0x0B, 0x2A, 0x10, 0x0E, 0x10, 0x00, 0x1B, 0x46, 0x20, 0x00,
    0x17, 0x32, 0xC8, 0x04, 0x0F, 0x40, 0x00, 0x01, 0x80, 0xB8, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};

