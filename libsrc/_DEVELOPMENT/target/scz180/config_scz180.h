





#ifndef __CONFIG_Z88DK_H_
#define __CONFIG_Z88DK_H_

// Automatically Generated at Library Build Time














#undef  __Z88DK
#define __Z88DK  1992












#undef  __SCZ180
#define __SCZ180  1

#define __CPU_CLOCK  18432000

#define __CLOCKS_PER_SECOND 50

#define __BIOS_SP   0xFFDE
#define __BANK_SP   0xEFFE

#define __COMMON_AREA_1_BASE  0xF000
#define __COMMON_AREA_1_PHASE_DATA  0xf000
#define __COMMON_AREA_1_PHASE_DRIVER  0xf580

#define __ASCI0_RX_SIZE  0x100
#define __ASCI0_TX_SIZE  0x080

#define __ASCI1_RX_SIZE  0x100
#define __ASCI1_TX_SIZE  0x080

#define __IO_BASE_ADDRESS 0xc0

#define __IO_DIO_PORT  0x00

#define __IO_SYSTEM  0x0C
#define __IO_LED_OUTPUT  0x0D
#define __IO_LED_STATUS  0x0E

#define __IO_CF_PORT  0x10

#define __IO_PIO_PORT_BASE  0x20












#undef  __CPM
#define __CPM       22

#define __CPM_RCON  1
#define __CPM_WCON  2
#define __CPM_RRDR  3
#define __CPM_WPUN  4
#define __CPM_WLST  5
#define __CPM_DCIO  6
#define __CPM_GIOB  7
#define __CPM_SIOB  8
#define __CPM_PRST  9
#define __CPM_RCOB  10
#define __CPM_ICON  11
#define __CPM_VERS  12
#define __CPM_RDS   13
#define __CPM_LGIN  14
#define __CPM_OPN   15
#define __CPM_CLS   16
#define __CPM_FFST  17
#define __CPM_FNXT  18
#define __CPM_DEL   19
#define __CPM_READ  20
#define __CPM_WRIT  21
#define __CPM_MAKE  22
#define __CPM_REN   23
#define __CPM_ILOG  24
#define __CPM_IDRV  25
#define __CPM_SDMA  26
#define __CPM_SUID  32
#define __CPM_RRAN  33
#define __CPM_WRAN  34
#define __CPM_CFS   35
#define __CPM_DSEG  51












#undef  __Z180
#define __Z180  0x04

#define __Z180_Z80180  0x01
#define __Z180_Z8L180  0x02
#define __Z180_Z8S180  0x04

#define __CPU_INFO  0x00

#define __CPU_INFO_ENABLE_SLL  0x01

#define __CPU_TIMER_SCALE  20


   // Z8S180 / Z8L180 CLASS

   #define __IO_CNTLA0  0xc0
   #define __IO_CNTLA1  0xc1
   #define __IO_CNTLB0  0xc2
   #define __IO_CNTLB1  0xc3
   #define __IO_STAT0  0xc4
   #define __IO_STAT1  0xc5
   #define __IO_TDR0  0xc6
   #define __IO_TDR1  0xc7
   #define __IO_RDR0  0xc8
   #define __IO_RDR1  0xc9
   #define __IO_ASEXT0  0xd2
   #define __IO_ASEXT1  0xd3
   #define __IO_ASTC0L  0xda
   #define __IO_ASTC0H  0xdb
   #define __IO_ASTC1L  0xdc
   #define __IO_ASTC1H  0xdd

   #define __IO_CNTR  0xca
   #define __IO_TRDR  0xcb

   #define __IO_TMDR0L  0xcc
   #define __IO_TMDR0H  0xcd
   #define __IO_RLDR0L  0xce
   #define __IO_RLDR0H  0xcf
   #define __IO_TCR  0xd0
   #define __IO_TMDR1L  0xd4
   #define __IO_TMDR1H  0xd5
   #define __IO_RLDR1L  0xd6
   #define __IO_RLDR1H  0xd7

   #define __IO_FRC  0xd8
   #define __IO_CMR  0xde
   #define __IO_CCR  0xdf

   #define __IO_SAR0L  0xe0
   #define __IO_SAR0H  0xe1
   #define __IO_SAR0B  0xe2
   #define __IO_DAR0L  0xe3
   #define __IO_DAR0H  0xe4
   #define __IO_DAR0B  0xe5
   #define __IO_BCR0L  0xe6
   #define __IO_BCR0H  0xe7
   #define __IO_MAR1L  0xe8
   #define __IO_MAR1H  0xe9
   #define __IO_MAR1B  0xea
   #define __IO_IAR1L  0xeb
   #define __IO_IAR1H  0xec
   #define __IO_IAR1B  0xed
   #define __IO_BCR1L  0xee
   #define __IO_BCR1H  0xef
   #define __IO_DSTAT  0xf0
   #define __IO_DMODE  0xf1
   #define __IO_DCNTL  0xf2

   #define __IO_IL  0xf3
   #define __IO_ITC  0xf4

   #define __IO_RCR  0xf6

   #define __IO_CBR  0xf8
   #define __IO_BBR  0xf9
   #define __IO_CBAR  0xfa

   #define __IO_OMCR  0xfe
   #define __IO_ICR  0x3f

   // I/O REGISTER BIT FIELDS

   #define __IO_CNTLA0_MPE   0x80
   #define __IO_CNTLA0_RE   0x40
   #define __IO_CNTLA0_TE   0x20
   #define __IO_CNTLA0_RTS0   0x10
   #define __IO_CNTLA0_MPBR   0x08
   #define __IO_CNTLA0_EFR   0x08
   #define __IO_CNTLA0_MODE_MASK   0x07
   #define __IO_CNTLA0_MODE_8P2   0x07
   #define __IO_CNTLA0_MODE_8P1   0x06
   #define __IO_CNTLA0_MODE_8N2   0x05
   #define __IO_CNTLA0_MODE_8N1   0x04
   #define __IO_CNTLA0_MODE_7P2   0x03
   #define __IO_CNTLA0_MODE_7P1   0x02
   #define __IO_CNTLA0_MODE_7N2   0x01
   #define __IO_CNTLA0_MODE_7N1   0x00

   #define __IO_CNTLA1_MPE   0x80
   #define __IO_CNTLA1_RE   0x40
   #define __IO_CNTLA1_TE   0x20
   #define __IO_CNTLA1_CKA1D   0x10
   #define __IO_CNTLA1_MPBR   0x08
   #define __IO_CNTLA1_EFR   0x08
   #define __IO_CNTLA1_MODE_MASK   0x07
   #define __IO_CNTLA1_MODE_8P2   0x07
   #define __IO_CNTLA1_MODE_8P1   0x06
   #define __IO_CNTLA1_MODE_8N2   0x05
   #define __IO_CNTLA1_MODE_8N1   0x04
   #define __IO_CNTLA1_MODE_7P2   0x03
   #define __IO_CNTLA1_MODE_7P1   0x02
   #define __IO_CNTLA1_MODE_7N2   0x01
   #define __IO_CNTLA1_MODE_7N1   0x00

   #define __IO_CNTLB0_MPBT   0x80
   #define __IO_CNTLB0_MP   0x40
   #define __IO_CNTLB0_CTS   0x20
   #define __IO_CNTLB0_PS   0x20
   #define __IO_CNTLB0_PEO   0x10
   #define __IO_CNTLB0_DR   0x08
   #define __IO_CNTLB0_SS_MASK   0x07
   #define __IO_CNTLB0_SS_EXT   0x07
   #define __IO_CNTLB0_SS_DIV_64   0x06
   #define __IO_CNTLB0_SS_DIV_32   0x05
   #define __IO_CNTLB0_SS_DIV_16   0x04
   #define __IO_CNTLB0_SS_DIV_8   0x03
   #define __IO_CNTLB0_SS_DIV_4   0x02
   #define __IO_CNTLB0_SS_DIV_2   0x01
   #define __IO_CNTLB0_SS_DIV_1   0x00

   #define __IO_CNTLB1_MPBT   0x80
   #define __IO_CNTLB1_MP   0x40
   #define __IO_CNTLB1_CTS   0x20
   #define __IO_CNTLB1_PS   0x20
   #define __IO_CNTLB1_PEO   0x10
   #define __IO_CNTLB1_DR   0x08
   #define __IO_CNTLB1_SS_MASK   0x07
   #define __IO_CNTLB1_SS_EXT   0x07
   #define __IO_CNTLB1_SS_DIV_64   0x06
   #define __IO_CNTLB1_SS_DIV_32   0x05
   #define __IO_CNTLB1_SS_DIV_16   0x04
   #define __IO_CNTLB1_SS_DIV_8   0x03
   #define __IO_CNTLB1_SS_DIV_4   0x02
   #define __IO_CNTLB1_SS_DIV_2   0x01
   #define __IO_CNTLB1_SS_DIV_1   0x00

   #define __IO_STAT0_RDRF   0x80
   #define __IO_STAT0_OVRN   0x40
   #define __IO_STAT0_PE   0x20
   #define __IO_STAT0_FE   0x10
   #define __IO_STAT0_RIE   0x08
   #define __IO_STAT0_DCD0   0x04
   #define __IO_STAT0_TDRE   0x02
   #define __IO_STAT0_TIE   0x01

   #define __IO_STAT1_RDRF   0x80
   #define __IO_STAT1_OVRN   0x40
   #define __IO_STAT1_PE   0x20
   #define __IO_STAT1_FE   0x10
   #define __IO_STAT1_RIE   0x08
   #define __IO_STAT1_CTS1E   0x04
   #define __IO_STAT1_TDRE   0x02
   #define __IO_STAT1_TIE   0x01

   #define __IO_CNTR_EF   0x80
   #define __IO_CNTR_EIE   0x40
   #define __IO_CNTR_RE   0x20
   #define __IO_CNTR_TE   0x10
   #define __IO_CNTR_SS_MASK   0x07
   #define __IO_CNTR_SS_EXT   0x07
   #define __IO_CNTR_SS_DIV_1280   0x06
   #define __IO_CNTR_SS_DIV_640   0x05
   #define __IO_CNTR_SS_DIV_320   0x04
   #define __IO_CNTR_SS_DIV_160   0x03
   #define __IO_CNTR_SS_DIV_80   0x02
   #define __IO_CNTR_SS_DIV_40   0x01
   #define __IO_CNTR_SS_DIV_20   0x00

   // PRT REGISTER BIT FIELDS

   #define __IO_TCR_TIF1    0x80
   #define __IO_TCR_TIF0    0x40
   #define __IO_TCR_TIE1    0x20
   #define __IO_TCR_TIE0    0x10
   #define __IO_TCR_TOC1    0x08
   #define __IO_TCR_TOC0    0x04
   #define __IO_TCR_TDE1    0x02
   #define __IO_TCR_TDE0    0x01

   // DMA REGISTER BIT FIELDS

   #define __IO_DSTAT_DE1    0x80
   #define __IO_DSTAT_DE0    0x40
   #define __IO_DSTAT_DWE1   0x20
   #define __IO_DSTAT_DWE0   0x10
   #define __IO_DSTAT_DIE1   0x08
   #define __IO_DSTAT_DIE0   0x04
   #define __IO_DSTAT_DME    0x01

   #define __IO_DMODE_DM1    0x20
   #define __IO_DMODE_DM0    0x10
   #define __IO_DMODE_SM1    0x08
   #define __IO_DMODE_SM0    0x04
   #define __IO_DMODE_MMOD   0x02

   #define __IO_DCNTL_MWI1   0x80
   #define __IO_DCNTL_MWI0   0x40
   #define __IO_DCNTL_IWI1   0x20
   #define __IO_DCNTL_IWI0   0x10
   #define __IO_DCNTL_DMS1   0x08
   #define __IO_DCNTL_DMS0   0x04
   #define __IO_DCNTL_DIM1   0x02
   #define __IO_DCNTL_DIM0   0x01

   // INT/TRAP CONTROL REGISTER (ITC) BIT FIELDS

   #define __IO_ITC_TRAP   0x80
   #define __IO_ITC_UFO   0x40
   #define __IO_ITC_ITE2   0x04
   #define __IO_ITC_ITE1   0x02
   #define __IO_ITC_ITE0   0x01

   // Refresh CONTROL REGISTER (RCR) BIT FIELDS

   #define __IO_RCR_REFE   0x80
   #define __IO_RCR_REFW   0x40
   #define __IO_RCR_CYC1   0x02
   #define __IO_RCR_CYC0   0x01

   // Operation Mode CONTROL REGISTER (OMCR) BIT FIELDS

   #define __IO_OMCR_M1E   0x80
   #define __IO_OMCR_M1TE   0x40
   #define __IO_OMCR_IOC   0x20

   // CPU CLOCK MULTIPLIER REGISTER (CMR) BIT FIELDS (Z8S180 & higher Only)

   #define __IO_CMR_X2   0x80
   #define __IO_CMR_LN_XTAL   0x40

   // CPU CONTROL REGISTER (CCR) BIT FIELDS (Z8S180 & higher Only)

   #define __IO_CCR_XTAL_X2   0x80
   #define __IO_CCR_STANDBY   0x40
   #define __IO_CCR_BREXT   0x20
   #define __IO_CCR_LNPHI   0x10
   #define __IO_CCR_IDLE   0x08
   #define __IO_CCR_LNIO   0x04
   #define __IO_CCR_LNCPUCTL   0x02
   #define __IO_CCR_LNAD   0x01













#define __CLIB_OPT_MULTITHREAD  0x00

#define __CLIB_OPT_MULTITHREAD_LOCK_HEAPS  0x01
#define __CLIB_OPT_MULTITHREAD_LOCK_FILES  0x02
#define __CLIB_OPT_MULTITHREAD_LOCK_FLIST  0x04
#define __CLIB_OPT_MULTITHREAD_LOCK_FDTBL  0x08
#define __CLIB_OPT_MULTITHREAD_LOCK_FDSTR  0x10

#define __CLIB_OPT_IMATH  0

#define __CLIB_OPT_IMATH_FAST  0x0f

#define __CLIB_OPT_IMATH_FAST_DIV_UNROLL  0x01
#define __CLIB_OPT_IMATH_FAST_DIV_LZEROS  0x02
#define __CLIB_OPT_IMATH_FAST_MUL_UNROLL  0x04
#define __CLIB_OPT_IMATH_FAST_MUL_LZEROS  0x08
#define __CLIB_OPT_IMATH_FAST_LIA  0x80

#define __CLIB_OPT_IMATH_SELECT  0x00

#define __CLIB_OPT_IMATH_SELECT_FAST_ASR  0x01
#define __CLIB_OPT_IMATH_SELECT_FAST_LSR  0x02
#define __CLIB_OPT_IMATH_SELECT_FAST_LSL  0x04

#define __CLIB_OPT_TXT2NUM  0x04

#define __CLIB_OPT_TXT2NUM_INT_BIN  0x01
#define __CLIB_OPT_TXT2NUM_INT_OCT  0x02
#define __CLIB_OPT_TXT2NUM_INT_DEC  0x04
#define __CLIB_OPT_TXT2NUM_INT_HEX  0x08

#define __CLIB_OPT_TXT2NUM_LONG_BIN  0x10
#define __CLIB_OPT_TXT2NUM_LONG_OCT  0x20
#define __CLIB_OPT_TXT2NUM_LONG_DEC  0x40
#define __CLIB_OPT_TXT2NUM_LONG_HEX  0x80

#define __CLIB_OPT_TXT2NUM_SELECT  0x00

#define __CLIB_OPT_TXT2NUM_SELECT_FAST_BIN  0x01
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_OCT  0x02
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_DEC  0x04
#define __CLIB_OPT_TXT2NUM_SELECT_FAST_HEX  0x08

#define __CLIB_OPT_NUM2TXT  0x00

#define __CLIB_OPT_NUM2TXT_INT_BIN  0x01
#define __CLIB_OPT_NUM2TXT_INT_OCT  0x02
#define __CLIB_OPT_NUM2TXT_INT_DEC  0x04
#define __CLIB_OPT_NUM2TXT_INT_HEX  0x08

#define __CLIB_OPT_NUM2TXT_LONG_BIN  0x10
#define __CLIB_OPT_NUM2TXT_LONG_OCT  0x20
#define __CLIB_OPT_NUM2TXT_LONG_DEC  0x40
#define __CLIB_OPT_NUM2TXT_LONG_HEX  0x80

#define __CLIB_OPT_NUM2TXT_SELECT  0x00

#define __CLIB_OPT_NUM2TXT_SELECT_FAST_BIN  0x01
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_OCT  0x02
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_DEC  0x04
#define __CLIB_OPT_NUM2TXT_SELECT_FAST_HEX  0x08

#define __CLIB_OPT_STDIO  0x00

#define __CLIB_OPT_STDIO_VALID  0x01

#define CHAR_CR  13
#define CHAR_LF  10
#define CHAR_BS  8
#define CHAR_ESC  27
#define CHAR_CAPS  6
#define CHAR_BELL  7
#define CHAR_CTRL_C  3
#define CHAR_CTRL_D  4
#define CHAR_CTRL_Z  26
#define CHAR_CURSOR_UC  45
#define CHAR_CURSOR_LC  95
#define CHAR_PASSWORD  42

#define __CLIB_OPT_PRINTF  0x002ff6ff

#define __CLIB_OPT_PRINTF_d  0x00000001
#define __CLIB_OPT_PRINTF_u  0x00000002
#define __CLIB_OPT_PRINTF_x  0x00000004
#define __CLIB_OPT_PRINTF_X  0x00000008
#define __CLIB_OPT_PRINTF_o  0x00000010
#define __CLIB_OPT_PRINTF_n  0x00000020
#define __CLIB_OPT_PRINTF_i  0x00000040
#define __CLIB_OPT_PRINTF_p  0x00000080
#define __CLIB_OPT_PRINTF_B  0x00000100
#define __CLIB_OPT_PRINTF_s  0x00000200
#define __CLIB_OPT_PRINTF_c  0x00000400
#define __CLIB_OPT_PRINTF_I  0x00000800
#define __CLIB_OPT_PRINTF_ld  0x00001000
#define __CLIB_OPT_PRINTF_lu  0x00002000
#define __CLIB_OPT_PRINTF_lx  0x00004000
#define __CLIB_OPT_PRINTF_lX  0x00008000
#define __CLIB_OPT_PRINTF_lo  0x00010000
#define __CLIB_OPT_PRINTF_ln  0x00020000
#define __CLIB_OPT_PRINTF_li  0x00040000
#define __CLIB_OPT_PRINTF_lp  0x00080000
#define __CLIB_OPT_PRINTF_lB  0x00100000
#define __CLIB_OPT_PRINTF_a  0x00400000
#define __CLIB_OPT_PRINTF_A  0x00800000
#define __CLIB_OPT_PRINTF_e  0x01000000
#define __CLIB_OPT_PRINTF_E  0x02000000
#define __CLIB_OPT_PRINTF_f  0x04000000
#define __CLIB_OPT_PRINTF_F  0x08000000
#define __CLIB_OPT_PRINTF_g  0x10000000
#define __CLIB_OPT_PRINTF_G  0x20000000

#define __CLIB_OPT_PRINTF_2  0x00

#define __CLIB_OPT_PRINTF_2_lld  0x01
#define __CLIB_OPT_PRINTF_2_llu  0x02
#define __CLIB_OPT_PRINTF_2_llx  0x04
#define __CLIB_OPT_PRINTF_2_llX  0x08
#define __CLIB_OPT_PRINTF_2_llo  0x10
#define __CLIB_OPT_PRINTF_2_lli  0x40

#define __CLIB_OPT_SCANF  0x002ff6ff

#define __CLIB_OPT_SCANF_d  0x00000001
#define __CLIB_OPT_SCANF_u  0x00000002
#define __CLIB_OPT_SCANF_x  0x00000004
#define __CLIB_OPT_SCANF_X  0x00000008
#define __CLIB_OPT_SCANF_o  0x00000010
#define __CLIB_OPT_SCANF_n  0x00000020
#define __CLIB_OPT_SCANF_i  0x00000040
#define __CLIB_OPT_SCANF_p  0x00000080
#define __CLIB_OPT_SCANF_B  0x00000100
#define __CLIB_OPT_SCANF_s  0x00000200
#define __CLIB_OPT_SCANF_c  0x00000400
#define __CLIB_OPT_SCANF_I  0x00000800
#define __CLIB_OPT_SCANF_ld  0x00001000
#define __CLIB_OPT_SCANF_lu  0x00002000
#define __CLIB_OPT_SCANF_lx  0x00004000
#define __CLIB_OPT_SCANF_lX  0x00008000
#define __CLIB_OPT_SCANF_lo  0x00010000
#define __CLIB_OPT_SCANF_ln  0x00020000
#define __CLIB_OPT_SCANF_li  0x00040000
#define __CLIB_OPT_SCANF_lp  0x00080000
#define __CLIB_OPT_SCANF_lB  0x00100000
#define __CLIB_OPT_SCANF_BRACKET  0x00200000
#define __CLIB_OPT_SCANF_a  0x00400000
#define __CLIB_OPT_SCANF_A  0x00800000
#define __CLIB_OPT_SCANF_e  0x01000000
#define __CLIB_OPT_SCANF_E  0x02000000
#define __CLIB_OPT_SCANF_f  0x04000000
#define __CLIB_OPT_SCANF_F  0x08000000
#define __CLIB_OPT_SCANF_g  0x10000000
#define __CLIB_OPT_SCANF_G  0x20000000

#define __CLIB_OPT_SCANF_2  0x00

#define __CLIB_OPT_SCANF_2_lld  0x01
#define __CLIB_OPT_SCANF_2_llu  0x02
#define __CLIB_OPT_SCANF_2_llx  0x04
#define __CLIB_OPT_SCANF_2_llX  0x08
#define __CLIB_OPT_SCANF_2_llo  0x10
#define __CLIB_OPT_SCANF_2_lli  0x40

#define __CLIB_OPT_UNROLL  0x00

#define __CLIB_OPT_UNROLL_MEMCPY  0x01
#define __CLIB_OPT_UNROLL_MEMSET  0x02
#define __CLIB_OPT_UNROLL_OTIR  0x10
#define __CLIB_OPT_UNROLL_LDIR  0x20
#define __CLIB_OPT_UNROLL_USER_SMC  0x40
#define __CLIB_OPT_UNROLL_LIB_SMC  0x80

#define __CLIB_OPT_STRTOD  0x00

#define __CLIB_OPT_STRTOD_NAN  0x01
#define __CLIB_OPT_STRTOD_INF  0x01
#define __CLIB_OPT_STRTOD_HEX  0x02

#define __CLIB_OPT_SORT  1

#define __CLIB_OPT_SORT_INSERTION  0
#define __CLIB_OPT_SORT_SHELL  1
#define __CLIB_OPT_SORT_QUICK  2

#define __CLIB_OPT_SORT_QSORT  0x0c

#define __CLIB_OPT_SORT_QSORT_PIVOT  0x3
#define __CLIB_OPT_SORT_QSORT_PIVOT_MID  0x0
#define __CLIB_OPT_SORT_QSORT_PIVOT_RAN  0x1
#define __CLIB_OPT_SORT_QSORT_ENABLE_INSERTION  0x04
#define __CLIB_OPT_SORT_QSORT_ENABLE_EQUAL  0x08

#define __CLIB_OPT_ERROR  0x00

#define __CLIB_OPT_ERROR_ENABLED  0x01
#define __CLIB_OPT_ERROR_VERBOSE  0x02
















#define __EOK  0
#define __EACCES  1
#define __EBADF  2
#define __EBDFD  3
#define __EDOM  4
#define __EFBIG  5
#define __EINVAL  6
#define __EIO  7
#define __EMFILE  8
#define __ENFILE  9
#define __ENOLCK  10
#define __ENOMEM  11
#define __ENOTSUP  12
#define __EOVERFLOW  13
#define __ERANGE  14
#define __ESTAT  15
#define __EAGAIN  16
#define __EWOULDBLOCK  16

#define __ERROR_NEXT  50

#define STDIO_SEEK_SET  0
#define STDIO_SEEK_CUR  1
#define STDIO_SEEK_END  2

#define STDIO_MSG_PUTC  1
#define STDIO_MSG_WRIT  2
#define STDIO_MSG_GETC  3
#define STDIO_MSG_EATC  4
#define STDIO_MSG_READ  5
#define STDIO_MSG_SEEK  6
#define STDIO_MSG_ICTL  7
#define STDIO_MSG_FLSH  8
#define STDIO_MSG_CLOS  9

#define ITERM_MSG_GETC  15
#define ITERM_MSG_REJECT  16
#define ITERM_MSG_INTERRUPT  17
#define ITERM_MSG_PUTC  18
#define ITERM_MSG_PRINT_CURSOR  19
#define ITERM_MSG_ERASE_CURSOR  20
#define ITERM_MSG_ERASE_CURSOR_PWD  21
#define ITERM_MSG_BS  22
#define ITERM_MSG_BS_PWD  23
#define ITERM_MSG_READLINE_BEGIN  24
#define ITERM_MSG_READLINE_END  25
#define ITERM_MSG_READLINE_SCROLL_LIMIT  26
#define ITERM_MSG_BELL  27
      
#define __MESSAGE_ITERM_NEXT__  28

#define OTERM_MSG_PUTC  30
#define OTERM_MSG_TTY  31
#define OTERM_MSG_FZX_PUTC  32
#define OTERM_MSG_PRINTC  33
#define OTERM_MSG_SCROLL  34
#define OTERM_MSG_SCROLL_LIMIT  35
#define OTERM_MSG_CLS  36
#define OTERM_MSG_PAUSE  37
#define OTERM_MSG_BELL  38
#define OTERM_MSG_PSCROLL  39
#define OTERM_MSG_FZX_GET_XOR_DRAW  40
      
#define __MESSAGE_OTERM_NEXT__  41

#define ICHAR_MSG_GETC  15
#define OCHAR_MSG_PUTC_BIN  30
#define OCHAR_MSG_PUTC  33
  
#define __MESSAGE_NEXT__  45

#define mtx_plain  0x01
#define mtx_recursive  0x02
#define mtx_timed  0x04

#define thrd_success  0x00
#define thrd_error  0x01
#define thrd_nomem  0x02
#define thrd_busy  0x04
#define thrd_timedout  0x08

#define IOCTL_RESET  0x0000

#define IOCTL_ITERM_ECHO  0xc081
#define IOCTL_ITERM_PASS  0xc041
#define IOCTL_ITERM_LINE  0xc021
#define IOCTL_ITERM_COOK  0xc011
#define IOCTL_ITERM_CAPS  0xc009
#define IOCTL_ITERM_CRLF  0xc101
#define IOCTL_ITERM_CURS  0xc201
   
#define IOCTL_ITERM_TIE  0x0201
#define IOCTL_ITERM_GET_EDITBUF  0x0381
#define IOCTL_ITERM_SET_EDITBUF  0x0301

#define IOCTL_OTERM_PAGE  0xc082
#define IOCTL_OTERM_PAUSE  0xc042
#define IOCTL_OTERM_COOK  0xc022
#define IOCTL_OTERM_CRLF  0xc012
#define IOCTL_OTERM_CLEAR  0xe002
#define IOCTL_OTERM_SIGNAL  0xc202
#define IOCTL_OTERM_BELL  0xc102

#define IOCTL_OTERM_CLS  0x0102
#define IOCTL_OTERM_RESET_SCROLL  0x0202
#define IOCTL_OTERM_GET_WINDOW_COORD  0x0382
#define IOCTL_OTERM_SET_WINDOW_COORD  0x0302
#define IOCTL_OTERM_GET_WINDOW_RECT  0x0482
#define IOCTL_OTERM_SET_WINDOW_RECT  0x0402
#define IOCTL_OTERM_GET_CURSOR_COORD  0x0582
#define IOCTL_OTERM_SET_CURSOR_COORD  0x0502
#define IOCTL_OTERM_GET_OTERM  0x0602
#define IOCTL_OTERM_SCROLL  0x0702
#define IOCTL_OTERM_FONT  0x0802
#define IOCTL_OTERM_SCROLL_LIMIT  0x0902

#define IOCTL_OTERM_FZX_GET_PAPER_COORD  0x0a82
#define IOCTL_OTERM_FZX_SET_PAPER_COORD  0x0a02
#define IOCTL_OTERM_FZX_GET_PAPER_RECT  0x0b82
#define IOCTL_OTERM_FZX_SET_PAPER_RECT  0x0b02
#define IOCTL_OTERM_FZX_LEFT_MARGIN  0x0c02
#define IOCTL_OTERM_FZX_LINE_SPACING  0x0d02
#define IOCTL_OTERM_FZX_SPACE_EXPAND  0x0e02
#define IOCTL_OTERM_FZX_GET_FZX_STATE  0x0f82
#define IOCTL_OTERM_FZX_SET_FZX_STATE  0x0f02

#define IOCTL_ICHAR_CRLF  0xc103
   
#define IOCTL_OCHAR_CRLF  0xc014






























#define __IO_PIO_PORT_A  0x20
#define __IO_PIO_PORT_B  0x21
#define __IO_PIO_PORT_C  0x22
#define __IO_PIO_CONTROL  0x23

#define __IO_PIO_CNTL_00  0x80
#define __IO_PIO_CNTL_01  0x81
#define __IO_PIO_CNTL_02  0x82
#define __IO_PIO_CNTL_03  0x83

#define __IO_PIO_CNTL_04  0x88
#define __IO_PIO_CNTL_05  0x89
#define __IO_PIO_CNTL_06  0x8A
#define __IO_PIO_CNTL_07  0x8B

#define __IO_PIO_CNTL_08  0x90
#define __IO_PIO_CNTL_09  0x91
#define __IO_PIO_CNTL_10  0x92
#define __IO_PIO_CNTL_11  0x83

#define __IO_PIO_CNTL_12  0x98
#define __IO_PIO_CNTL_13  0x99
#define __IO_PIO_CNTL_14  0x9A
#define __IO_PIO_CNTL_15  0x9B













#define __IO_PIO_IDE_LSB  0x20
#define __IO_PIO_IDE_MSB  0x21
#define __IO_PIO_IDE_CTL  0x22
#define __IO_PIO_IDE_CONFIG  0x23
#define __IO_PIO_IDE_RD  0x92
#define __IO_PIO_IDE_WR  0x80

#define __IO_IDE_A0_LINE  0x01
#define __IO_IDE_A1_LINE  0x02
#define __IO_IDE_A2_LINE  0x04
#define __IO_IDE_CS0_LINE  0x08
#define __IO_IDE_CS1_LINE  0x10
#define __IO_IDE_WR_LINE  0x20
#define __IO_IDE_RD_LINE  0x40
#define __IO_IDE_RST_LINE  0x80

#define __IO_IDE_DATA  0x08
#define __IO_IDE_ERROR  0x9
#define __IO_IDE_SEC_CNT  0xa
#define __IO_IDE_SECTOR  0xb
#define __IO_IDE_CYL_LSB  0xc
#define __IO_IDE_CYL_MSB  0xd
#define __IO_IDE_HEAD  0xe
#define __IO_IDE_COMMAND  0xf
#define __IO_IDE_STATUS  0xf

#define __IO_IDE_CONTROL  0x16
#define __IO_IDE_ALT_STATUS  0x16

#define __IO_IDE_LBA0  0xb
#define __IO_IDE_LBA1  0xc
#define __IO_IDE_LBA2  0xd
#define __IO_IDE_LBA3  0xe

#define __IDE_CMD_READ  0x20
#define __IDE_CMD_WRITE  0x30

#define __IDE_CMD_STANDBY  0xE0
#define __IDE_CMD_IDLE  0xE1
#define __IDE_CMD_SLEEP  0xE6
#define __IDE_CMD_CACHE_FLUSH  0xE7
#define __IDE_CMD_ID  0xEC






#endif



