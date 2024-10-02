//
// Created by xor on 2.10.24..
//

#ifndef LIBDOSBOX_UTILS_H
#define LIBDOSBOX_UTILS_H

#include "asm.h"

//void hexDump(void *addr, int len);
size_t countEqual(const db *addr1, const db *addr2, int len);
namespace m2c {
void cmpHexDump(void *addr1, void *addr2, int len);
}

#endif // LIBDOSBOX_UTILS_H
