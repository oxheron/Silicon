#include "gdt.h"

__attribute__((aligned(0x1000)))
GDT defaultGDT = 
{
    {0, 0, 0, 0x00, 0x00, 0},
    {0, 0, 0, 0x9a, 0xa0, 0},
    {0, 0, 0, 0x92, 0xa0, 0},
};