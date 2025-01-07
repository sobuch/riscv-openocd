/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef OPENOCD_TARGET_RISCV_OPENOCD_ENCODING
#define OPENOCD_TARGET_RISCV_OPENOCD_ENCODING

#ifdef DECLARE_CSR
#error Inlude this header once more before defining DECLARE_CSR to use updated CSR defines
#endif

#include "encoding.h"

#define DCSR_NDRESET    BIT(29)
#define DCSR_FULLRESET  BIT(28)
#define DCSR_EBREAKH    BIT(14)
#define DCSR_HALT       BIT(3)

#undef CSR_SINTSTATUS
#undef CSR_MINTSTATUS
#define CSR_SINTSTATUS 0xdb1
#define CSR_MINTSTATUS 0xfb1

#define CSR_USTATUS 0x0
#define CSR_UIE 0x4
#define CSR_UTVEC 0x5
#define CSR_USCRATCH 0x40
#define CSR_UEPC 0x41
#define CSR_UCAUSE 0x42
#define CSR_UTVAL 0x43
#define CSR_UIP 0x44
#define CSR_SINTTHRESH 0x147
#define CSR_MINTTHRESH 0x347

#endif // OPENOCD_TARGET_RISCV_OPENOCD_ENCODING

#include "encoding.h"

#ifdef DECLARE_CSR
DECLARE_CSR(ustatus, CSR_USTATUS)
DECLARE_CSR(uie, CSR_UIE)
DECLARE_CSR(utvec, CSR_UTVEC)
DECLARE_CSR(uscratch, CSR_USCRATCH)
DECLARE_CSR(uepc, CSR_UEPC)
DECLARE_CSR(ucause, CSR_UCAUSE)
DECLARE_CSR(utval, CSR_UTVAL)
DECLARE_CSR(uip, CSR_UIP)
DECLARE_CSR(sintthresh, CSR_SINTTHRESH)
DECLARE_CSR(mintthresh, CSR_MINTTHRESH)
#endif // DECLARE_CSR
