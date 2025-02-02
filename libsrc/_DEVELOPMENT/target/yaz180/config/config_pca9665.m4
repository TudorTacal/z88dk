divert(-1)

###############################################################
# PCA9665 CONFIGURATION
#

# PCA9665 I2C I/O Buffer Definitions

define(`__IO_I2C_RX_SIZE', 68)          # Size of the Rx Buffer, 68 Bytes
define(`__IO_I2C_TX_SIZE', 67)          # Size of the Tx Buffer, 67 Bytes (excl. write register address)
                                        # PCA9665 has 68 Byte Tx/Rx hardware buffer

# PCA9665 I2C I/O Register addressing

define(`__IO_I2C1_PORT_BASE', __IO_PCA9665_1_PORT_BASE) # distinguish the device address
define(`__IO_I2C2_PORT_BASE', __IO_PCA9665_2_PORT_BASE) # yaz180 - only 3 MSB bits are H/W decoded 0xE000

# PCA9665 I2C I/O Register MSB addressing

define(`__IO_I2C1_PORT_MSB', 0x`'eval((__IO_PCA9665_1_PORT_BASE/0x0100)&0xE0,16))   # distinguish the device address, with MSB
define(`__IO_I2C2_PORT_MSB', 0x`'eval((__IO_PCA9665_2_PORT_BASE/0x0100)&0xE0,16))   # yaz180 - only 3 MSB bits are H/W decoded %111xxxxx

# PCA9665 I2C I/O Register LSB Addressing

# PCA9665 direct registers
define(`__IO_I2C_PORT_STA',  0x00)      # STATUS            Read Only
define(`__IO_I2C_PORT_IPTR',  0x00)     # INDIRECT Pointer  Write Only
define(`__IO_I2C_PORT_DAT',  0x01)      # DATA              Read/Write
define(`__IO_I2C_PORT_IDATA',  0x02)    # INDIRECT Data     Read/Write
define(`__IO_I2C_PORT_CON',  0x03)      # CONTROL           Read/Write

# PCA9665 indirect registers
define(`__IO_I2C_PORT_ICOUNT',  0x00)   # Byte Count for buffered mode
define(`__IO_I2C_PORT_IADDR',  0x01)    # OWN Address
define(`__IO_I2C_PORT_ISCLL',  0x02)    # SCL LOW period
define(`__IO_I2C_PORT_ISCLH',  0x03)    # SCL HIGH period
define(`__IO_I2C_PORT_ITO',  0x04)      # TIMEOUT
define(`__IO_I2C_PORT_IPRESET',  0x05)  # Parallel bus reset
define(`__IO_I2C_PORT_IMODE',  0x06)    # I2C Bus mode

# I2C PCA9665 Control Bits

# Bits in I2C_STA

define(`__IO_I2C_STA_ILLEGAL_START_STOP',  0x00)
define(`__IO_I2C_STA_MASTER_START_TX',  0x08)
define(`__IO_I2C_STA_MASTER_RESTART_TX',  0x10)
define(`__IO_I2C_STA_MASTER_SLA_W_ACK',  0x18)
define(`__IO_I2C_STA_MASTER_SLA_W_NAK',  0x20)
define(`__IO_I2C_STA_MASTER_DATA_W_ACK',  0x28)
define(`__IO_I2C_STA_MASTER_DATA_W_NAK',  0x30)
define(`__IO_I2C_STA_MASTER_ARB_LOST',  0x38)
define(`__IO_I2C_STA_MASTER_SLA_R_ACK',  0x40)
define(`__IO_I2C_STA_MASTER_SLA_R_NAK',  0x48)
define(`__IO_I2C_STA_MASTER_DATA_R_ACK',  0x50)
define(`__IO_I2C_STA_MASTER_DATA_R_NAK',  0x58)
define(`__IO_I2C_STA_SLAVE_AD_W',  0x60)
define(`__IO_I2C_STA_SLAVE_AL_AD_W',  0x68)
define(`__IO_I2C_STA_SDA_STUCK',  0x70)
define(`__IO_I2C_STA_SCL_STUCK',  0x78)
define(`__IO_I2C_STA_SLAVE_DATA_RX_ACK',  0x80)
define(`__IO_I2C_STA_SLAVE_DATA_RX_NAK',  0x88)
define(`__IO_I2C_STA_SLAVE_STOP_OR_RESTART',  0xA0)
define(`__IO_I2C_STA_SLAVE_AD_R',  0xA8)
define(`__IO_I2C_STA_SLAVE_AL_AD_R',  0xB0)
define(`__IO_I2C_STA_SLAVE_DATA_TX_ACK',  0xB8)
define(`__IO_I2C_STA_SLAVE_DATA_TX_NAK',  0xC0)
define(`__IO_I2C_STA_SLAVE_LST_TX_ACK',  0xC8)
define(`__IO_I2C_STA_SLAVE_GC',  0xD0)
define(`__IO_I2C_STA_SLAVE_GC_AL',  0xD8)
define(`__IO_I2C_STA_SLAVE_GC_RX_ACK',  0xE0)
define(`__IO_I2C_STA_SLAVE_GC_RX_NAK',  0xE8)
define(`__IO_I2C_STA_IDLE',  0xF8)              # __IO_I2C_STA_IDLE generates no interrupt, so
define(`__IO_I2C_STA_ILLEGAL_ICOUNT',  0xFC)    # __IO_I2C_STA_ILLEGAL_ICOUNT can be $F8 case

# Bits in I2C_CON

define(`__IO_I2C_CON_AA',  0x80)                # Assert Acknowledge
define(`__IO_I2C_CON_ENSIO',  0x40)             # Enable, change only when I2C bus idle.
define(`__IO_I2C_CON_STA',  0x20)               # Start (Restart)
define(`__IO_I2C_CON_STO',  0x10)               # Stop
define(`__IO_I2C_CON_SI',  0x08)                # Serial Interrupt
define(`__IO_I2C_CON_MODE',  0x01)              # Mode, 1 = buffered, 0 = byte

# Bits in I2C_CON Echo, for CPU control

define(`__IO_I2C_CON_ECHO_BUS_STOPPED',  0x10)  # We are finished the sentence
define(`__IO_I2C_CON_ECHO_BUS_RESTART',  0x04)  # Bus Restart Requested
define(`__IO_I2C_CON_ECHO_BUS_ILLEGAL',  0x02)  # Unexpected Bus Response

# Bits in I2C_ICOUNT
     
define(`__IO_I2C_ICOUNT_LB',  0x80)             # Last Byte control bit
                                                # LB bit is only used for Receiver Buffered modes

# BITS in I2C_ITO

define(`__IO_I2C_ITO_TE',  0x80)                # Time-Out Enable control bit 

# Bits in I2C_IMODE

define(`__IO_I2C_IMODE_STD',  0x00)             # Standard mode
define(`__IO_I2C_IMODE_FAST',  0x01)            # Fast mode
define(`__IO_I2C_IMODE_FASTP',  0x02)           # Fast Plus mode
define(`__IO_I2C_IMODE_TURBO',  0x03)           # Turbo mode
define(`__IO_I2C_IMODE_MASK',  0x03)            # Clock Rate (MASK)

#
# END OF CONFIGURATION
###############################################################

divert(0)

dnl#
dnl# COMPILE TIME CONFIG EXPORT FOR ASSEMBLY LANGUAGE
dnl#

ifdef(`CFG_ASM_PUB',
`
PUBLIC `__IO_I2C_RX_SIZE'
PUBLIC `__IO_I2C_TX_SIZE'

PUBLIC `__IO_I2C1_PORT_BASE'
PUBLIC `__IO_I2C2_PORT_BASE'

PUBLIC `__IO_I2C1_PORT_MSB'
PUBLIC `__IO_I2C2_PORT_MSB'

PUBLIC `__IO_I2C_PORT_STA'
PUBLIC `__IO_I2C_PORT_IPTR'
PUBLIC `__IO_I2C_PORT_DAT'
PUBLIC `__IO_I2C_PORT_IDATA'
PUBLIC `__IO_I2C_PORT_CON'

PUBLIC `__IO_I2C_PORT_ICOUNT'
PUBLIC `__IO_I2C_PORT_IADDR'
PUBLIC `__IO_I2C_PORT_ISCLL'
PUBLIC `__IO_I2C_PORT_ISCLH'
PUBLIC `__IO_I2C_PORT_ITO'
PUBLIC `__IO_I2C_PORT_IPRESET'
PUBLIC `__IO_I2C_PORT_IMODE'

PUBLIC `__IO_I2C_STA_ILLEGAL_START_STOP'
PUBLIC `__IO_I2C_STA_MASTER_START_TX'
PUBLIC `__IO_I2C_STA_MASTER_RESTART_TX'
PUBLIC `__IO_I2C_STA_MASTER_SLA_W_ACK'
PUBLIC `__IO_I2C_STA_MASTER_SLA_W_NAK'
PUBLIC `__IO_I2C_STA_MASTER_DATA_W_ACK'
PUBLIC `__IO_I2C_STA_MASTER_DATA_W_NAK'
PUBLIC `__IO_I2C_STA_MASTER_ARB_LOST'
PUBLIC `__IO_I2C_STA_MASTER_SLA_R_ACK'
PUBLIC `__IO_I2C_STA_MASTER_SLA_R_NAK'
PUBLIC `__IO_I2C_STA_MASTER_DATA_R_ACK'
PUBLIC `__IO_I2C_STA_MASTER_DATA_R_NAK'
PUBLIC `__IO_I2C_STA_SLAVE_AD_W'
PUBLIC `__IO_I2C_STA_SLAVE_AL_AD_W'
PUBLIC `__IO_I2C_STA_SDA_STUCK'
PUBLIC `__IO_I2C_STA_SCL_STUCK'
PUBLIC `__IO_I2C_STA_SLAVE_DATA_RX_ACK'
PUBLIC `__IO_I2C_STA_SLAVE_DATA_RX_NAK'
PUBLIC `__IO_I2C_STA_SLAVE_STOP_OR_RESTART'
PUBLIC `__IO_I2C_STA_SLAVE_AD_R'
PUBLIC `__IO_I2C_STA_SLAVE_AL_AD_R'
PUBLIC `__IO_I2C_STA_SLAVE_DATA_TX_ACK'
PUBLIC `__IO_I2C_STA_SLAVE_DATA_TX_NAK'
PUBLIC `__IO_I2C_STA_SLAVE_LST_TX_ACK'
PUBLIC `__IO_I2C_STA_SLAVE_GC'
PUBLIC `__IO_I2C_STA_SLAVE_GC_AL'
PUBLIC `__IO_I2C_STA_SLAVE_GC_RX_ACK'
PUBLIC `__IO_I2C_STA_SLAVE_GC_RX_NAK'
PUBLIC `__IO_I2C_STA_IDLE'
PUBLIC `__IO_I2C_STA_ILLEGAL_ICOUNT'

PUBLIC `__IO_I2C_CON_AA'
PUBLIC `__IO_I2C_CON_ENSIO'
PUBLIC `__IO_I2C_CON_STA'
PUBLIC `__IO_I2C_CON_STO'
PUBLIC `__IO_I2C_CON_SI'
PUBLIC `__IO_I2C_CON_MODE'

PUBLIC `__IO_I2C_CON_ECHO_BUS_STOPPED'
PUBLIC `__IO_I2C_CON_ECHO_BUS_RESTART'
PUBLIC `__IO_I2C_CON_ECHO_BUS_ILLEGAL'

PUBLIC `__IO_I2C_ICOUNT_LB'

PUBLIC `__IO_I2C_ITO_TE'

PUBLIC `__IO_I2C_IMODE_STD'
PUBLIC `__IO_I2C_IMODE_FAST'
PUBLIC `__IO_I2C_IMODE_FASTP'
PUBLIC `__IO_I2C_IMODE_TURBO'
PUBLIC `__IO_I2C_IMODE_MASK'
')

dnl#
dnl# LIBRARY BUILD TIME CONFIG FOR ASSEMBLY LANGUAGE
dnl#

ifdef(`CFG_ASM_DEF',
`
defc `__IO_I2C_RX_SIZE' = __IO_I2C_RX_SIZE
defc `__IO_I2C_TX_SIZE' = __IO_I2C_TX_SIZE

defc `__IO_I2C1_PORT_BASE' = __IO_I2C1_PORT_BASE
defc `__IO_I2C2_PORT_BASE' = __IO_I2C2_PORT_BASE

defc `__IO_I2C1_PORT_MSB' = __IO_I2C1_PORT_MSB
defc `__IO_I2C2_PORT_MSB' = __IO_I2C2_PORT_MSB

defc `__IO_I2C_PORT_STA' = __IO_I2C_PORT_STA
defc `__IO_I2C_PORT_IPTR' = __IO_I2C_PORT_IPTR
defc `__IO_I2C_PORT_DAT' = __IO_I2C_PORT_DAT
defc `__IO_I2C_PORT_IDATA' = __IO_I2C_PORT_IDATA
defc `__IO_I2C_PORT_CON' = __IO_I2C_PORT_CON

defc `__IO_I2C_PORT_ICOUNT' = __IO_I2C_PORT_ICOUNT
defc `__IO_I2C_PORT_IADDR' = __IO_I2C_PORT_IADDR
defc `__IO_I2C_PORT_ISCLL' = __IO_I2C_PORT_ISCLL
defc `__IO_I2C_PORT_ISCLH' = __IO_I2C_PORT_ISCLH
defc `__IO_I2C_PORT_ITO' = __IO_I2C_PORT_ITO
defc `__IO_I2C_PORT_IPRESET' = __IO_I2C_PORT_IPRESET
defc `__IO_I2C_PORT_IMODE' = __IO_I2C_PORT_IMODE

defc `__IO_I2C_STA_ILLEGAL_START_STOP' = __IO_I2C_STA_ILLEGAL_START_STOP
defc `__IO_I2C_STA_MASTER_START_TX' = __IO_I2C_STA_MASTER_START_TX
defc `__IO_I2C_STA_MASTER_RESTART_TX' = __IO_I2C_STA_MASTER_RESTART_TX
defc `__IO_I2C_STA_MASTER_SLA_W_ACK' = __IO_I2C_STA_MASTER_SLA_W_ACK
defc `__IO_I2C_STA_MASTER_SLA_W_NAK' = __IO_I2C_STA_MASTER_SLA_W_NAK
defc `__IO_I2C_STA_MASTER_DATA_W_ACK' = __IO_I2C_STA_MASTER_DATA_W_ACK
defc `__IO_I2C_STA_MASTER_DATA_W_NAK' = __IO_I2C_STA_MASTER_DATA_W_NAK
defc `__IO_I2C_STA_MASTER_ARB_LOST' = __IO_I2C_STA_MASTER_ARB_LOST
defc `__IO_I2C_STA_MASTER_SLA_R_ACK' = __IO_I2C_STA_MASTER_SLA_R_ACK
defc `__IO_I2C_STA_MASTER_SLA_R_NAK' = __IO_I2C_STA_MASTER_SLA_R_NAK
defc `__IO_I2C_STA_MASTER_DATA_R_ACK' = __IO_I2C_STA_MASTER_DATA_R_ACK
defc `__IO_I2C_STA_MASTER_DATA_R_NAK' = __IO_I2C_STA_MASTER_DATA_R_NAK
defc `__IO_I2C_STA_SLAVE_AD_W' = __IO_I2C_STA_SLAVE_AD_W
defc `__IO_I2C_STA_SLAVE_AL_AD_W' = __IO_I2C_STA_SLAVE_AL_AD_W
defc `__IO_I2C_STA_SDA_STUCK' = __IO_I2C_STA_SDA_STUCK
defc `__IO_I2C_STA_SCL_STUCK' = __IO_I2C_STA_SCL_STUCK
defc `__IO_I2C_STA_SLAVE_DATA_RX_ACK' = __IO_I2C_STA_SLAVE_DATA_RX_ACK
defc `__IO_I2C_STA_SLAVE_DATA_RX_NAK' = __IO_I2C_STA_SLAVE_DATA_RX_NAK
defc `__IO_I2C_STA_SLAVE_STOP_OR_RESTART' = __IO_I2C_STA_SLAVE_STOP_OR_RESTART
defc `__IO_I2C_STA_SLAVE_AD_R' = __IO_I2C_STA_SLAVE_AD_R
defc `__IO_I2C_STA_SLAVE_AL_AD_R' = __IO_I2C_STA_SLAVE_AL_AD_R
defc `__IO_I2C_STA_SLAVE_DATA_TX_ACK' = __IO_I2C_STA_SLAVE_DATA_TX_ACK
defc `__IO_I2C_STA_SLAVE_DATA_TX_NAK' = __IO_I2C_STA_SLAVE_DATA_TX_NAK
defc `__IO_I2C_STA_SLAVE_LST_TX_ACK' = __IO_I2C_STA_SLAVE_LST_TX_ACK
defc `__IO_I2C_STA_SLAVE_GC' = __IO_I2C_STA_SLAVE_GC
defc `__IO_I2C_STA_SLAVE_GC_AL' = __IO_I2C_STA_SLAVE_GC_AL
defc `__IO_I2C_STA_SLAVE_GC_RX_ACK' = __IO_I2C_STA_SLAVE_GC_RX_ACK
defc `__IO_I2C_STA_SLAVE_GC_RX_NAK' = __IO_I2C_STA_SLAVE_GC_RX_NAK
defc `__IO_I2C_STA_IDLE' = __IO_I2C_STA_IDLE
defc `__IO_I2C_STA_ILLEGAL_ICOUNT' = __IO_I2C_STA_ILLEGAL_ICOUNT

defc `__IO_I2C_CON_AA' = __IO_I2C_CON_AA
defc `__IO_I2C_CON_ENSIO' = __IO_I2C_CON_ENSIO
defc `__IO_I2C_CON_STA' = __IO_I2C_CON_STA
defc `__IO_I2C_CON_STO' = __IO_I2C_CON_STO
defc `__IO_I2C_CON_SI' = __IO_I2C_CON_SI
defc `__IO_I2C_CON_MODE' = __IO_I2C_CON_MODE

defc `__IO_I2C_CON_ECHO_BUS_STOPPED' = __IO_I2C_CON_ECHO_BUS_STOPPED
defc `__IO_I2C_CON_ECHO_BUS_RESTART' = __IO_I2C_CON_ECHO_BUS_RESTART
defc `__IO_I2C_CON_ECHO_BUS_ILLEGAL' = __IO_I2C_CON_ECHO_BUS_ILLEGAL

defc `__IO_I2C_ICOUNT_LB' = __IO_I2C_ICOUNT_LB

defc `__IO_I2C_ITO_TE' = __IO_I2C_ITO_TE

defc `__IO_I2C_IMODE_STD' = __IO_I2C_IMODE_STD
defc `__IO_I2C_IMODE_FAST' = __IO_I2C_IMODE_FAST
defc `__IO_I2C_IMODE_FASTP' = __IO_I2C_IMODE_FASTP
defc `__IO_I2C_IMODE_TURBO' = __IO_I2C_IMODE_TURBO
defc `__IO_I2C_IMODE_MASK' = __IO_I2C_IMODE_MASK
')

dnl#
dnl# COMPILE TIME CONFIG EXPORT FOR C
dnl#

ifdef(`CFG_C_DEF',
`
`#define' `__IO_I2C_RX_SIZE'  __IO_I2C_RX_SIZE
`#define' `__IO_I2C_TX_SIZE'  __IO_I2C_TX_SIZE

`#define' `__IO_I2C1_PORT_BASE'  __IO_I2C1_PORT_BASE
`#define' `__IO_I2C2_PORT_BASE'  __IO_I2C2_PORT_BASE

`#define' `__IO_I2C1_PORT_MSB'  __IO_I2C1_PORT_MSB
`#define' `__IO_I2C2_PORT_MSB'  __IO_I2C2_PORT_MSB

`#define' `__IO_I2C_PORT_STA'  __IO_I2C_PORT_STA
`#define' `__IO_I2C_PORT_IPTR'  __IO_I2C_PORT_IPTR
`#define' `__IO_I2C_PORT_DAT'  __IO_I2C_PORT_DAT
`#define' `__IO_I2C_PORT_IDATA'  __IO_I2C_PORT_IDATA
`#define' `__IO_I2C_PORT_CON'  __IO_I2C_PORT_CON

`#define' `__IO_I2C_PORT_ICOUNT'  __IO_I2C_PORT_ICOUNT
`#define' `__IO_I2C_PORT_IADDR'  __IO_I2C_PORT_IADDR
`#define' `__IO_I2C_PORT_ISCLL'  __IO_I2C_PORT_ISCLL
`#define' `__IO_I2C_PORT_ISCLH'  __IO_I2C_PORT_ISCLH
`#define' `__IO_I2C_PORT_ITO'  __IO_I2C_PORT_ITO
`#define' `__IO_I2C_PORT_IPRESET'  __IO_I2C_PORT_IPRESET
`#define' `__IO_I2C_PORT_IMODE'  __IO_I2C_PORT_IMODE

`#define' `__IO_I2C_STA_ILLEGAL_START_STOP'  __IO_I2C_STA_ILLEGAL_START_STOP
`#define' `__IO_I2C_STA_MASTER_START_TX'  __IO_I2C_STA_MASTER_START_TX
`#define' `__IO_I2C_STA_MASTER_RESTART_TX'  __IO_I2C_STA_MASTER_RESTART_TX
`#define' `__IO_I2C_STA_MASTER_SLA_W_ACK'  __IO_I2C_STA_MASTER_SLA_W_ACK
`#define' `__IO_I2C_STA_MASTER_SLA_W_NAK'  __IO_I2C_STA_MASTER_SLA_W_NAK
`#define' `__IO_I2C_STA_MASTER_DATA_W_ACK'  __IO_I2C_STA_MASTER_DATA_W_ACK
`#define' `__IO_I2C_STA_MASTER_DATA_W_NAK'  __IO_I2C_STA_MASTER_DATA_W_NAK
`#define' `__IO_I2C_STA_MASTER_ARB_LOST'  __IO_I2C_STA_MASTER_ARB_LOST
`#define' `__IO_I2C_STA_MASTER_SLA_R_ACK'  __IO_I2C_STA_MASTER_SLA_R_ACK
`#define' `__IO_I2C_STA_MASTER_SLA_R_NAK'  __IO_I2C_STA_MASTER_SLA_R_NAK
`#define' `__IO_I2C_STA_MASTER_DATA_R_ACK'  __IO_I2C_STA_MASTER_DATA_R_ACK
`#define' `__IO_I2C_STA_MASTER_DATA_R_NAK'  __IO_I2C_STA_MASTER_DATA_R_NAK
`#define' `__IO_I2C_STA_SLAVE_AD_W'  __IO_I2C_STA_SLAVE_AD_W
`#define' `__IO_I2C_STA_SLAVE_AL_AD_W'  __IO_I2C_STA_SLAVE_AL_AD_W
`#define' `__IO_I2C_STA_SDA_STUCK'  __IO_I2C_STA_SDA_STUCK
`#define' `__IO_I2C_STA_SCL_STUCK'  __IO_I2C_STA_SCL_STUCK
`#define' `__IO_I2C_STA_SLAVE_DATA_RX_ACK'  __IO_I2C_STA_SLAVE_DATA_RX_ACK
`#define' `__IO_I2C_STA_SLAVE_DATA_RX_NAK'  __IO_I2C_STA_SLAVE_DATA_RX_NAK
`#define' `__IO_I2C_STA_SLAVE_STOP_OR_RESTART'  __IO_I2C_STA_SLAVE_STOP_OR_RESTART
`#define' `__IO_I2C_STA_SLAVE_AD_R'  __IO_I2C_STA_SLAVE_AD_R
`#define' `__IO_I2C_STA_SLAVE_AL_AD_R'  __IO_I2C_STA_SLAVE_AL_AD_R
`#define' `__IO_I2C_STA_SLAVE_DATA_TX_ACK'  __IO_I2C_STA_SLAVE_DATA_TX_ACK
`#define' `__IO_I2C_STA_SLAVE_DATA_TX_NAK'  __IO_I2C_STA_SLAVE_DATA_TX_NAK
`#define' `__IO_I2C_STA_SLAVE_LST_TX_ACK'  __IO_I2C_STA_SLAVE_LST_TX_ACK
`#define' `__IO_I2C_STA_SLAVE_GC'  __IO_I2C_STA_SLAVE_GC
`#define' `__IO_I2C_STA_SLAVE_GC_AL'  __IO_I2C_STA_SLAVE_GC_AL
`#define' `__IO_I2C_STA_SLAVE_GC_RX_ACK'  __IO_I2C_STA_SLAVE_GC_RX_ACK
`#define' `__IO_I2C_STA_SLAVE_GC_RX_NAK'  __IO_I2C_STA_SLAVE_GC_RX_NAK
`#define' `__IO_I2C_STA_IDLE'  __IO_I2C_STA_IDLE
`#define' `__IO_I2C_STA_ILLEGAL_ICOUNT'  __IO_I2C_STA_ILLEGAL_ICOUNT

`#define' `__IO_I2C_CON_AA'  __IO_I2C_CON_AA
`#define' `__IO_I2C_CON_ENSIO'  __IO_I2C_CON_ENSIO
`#define' `__IO_I2C_CON_STA'  __IO_I2C_CON_STA
`#define' `__IO_I2C_CON_STO'  __IO_I2C_CON_STO
`#define' `__IO_I2C_CON_SI'  __IO_I2C_CON_SI
`#define' `__IO_I2C_CON_MODE'  __IO_I2C_CON_MODE

`#define' `__IO_I2C_CON_ECHO_BUS_STOPPED'  __IO_I2C_CON_ECHO_BUS_STOPPED
`#define' `__IO_I2C_CON_ECHO_BUS_RESTART'  __IO_I2C_CON_ECHO_BUS_RESTART
`#define' `__IO_I2C_CON_ECHO_BUS_ILLEGAL'  __IO_I2C_CON_ECHO_BUS_ILLEGAL

`#define' `__IO_I2C_ICOUNT_LB'  __IO_I2C_ICOUNT_LB

`#define' `__IO_I2C_ITO_TE'  __IO_I2C_ITO_TE

`#define' `__IO_I2C_IMODE_STD'  __IO_I2C_IMODE_STD
`#define' `__IO_I2C_IMODE_FAST'  __IO_I2C_IMODE_FAST
`#define' `__IO_I2C_IMODE_FASTP'  __IO_I2C_IMODE_FASTP
`#define' `__IO_I2C_IMODE_TURBO'  __IO_I2C_IMODE_TURBO
`#define' `__IO_I2C_IMODE_MASK'  __IO_I2C_IMODE_MASK
')
