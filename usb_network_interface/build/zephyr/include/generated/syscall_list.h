/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_CLOCK_GETTIME 0
#define K_SYSCALL_DEVICE_GET_BINDING 1
#define K_SYSCALL_DEVICE_IS_READY 2
#define K_SYSCALL_ENTROPY_GET_ENTROPY 3
#define K_SYSCALL_GPIO_GET_PENDING_INT 4
#define K_SYSCALL_GPIO_PIN_CONFIGURE 5
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 6
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 7
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 8
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 9
#define K_SYSCALL_GPIO_PORT_GET_RAW 10
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 11
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 12
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 13
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 14
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 15
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 16
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 17
#define K_SYSCALL_I2C_CONFIGURE 18
#define K_SYSCALL_I2C_GET_CONFIG 19
#define K_SYSCALL_I2C_RECOVER_BUS 20
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 21
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 22
#define K_SYSCALL_I2C_TRANSFER 23
#define K_SYSCALL_K_BUSY_WAIT 24
#define K_SYSCALL_K_CONDVAR_BROADCAST 25
#define K_SYSCALL_K_CONDVAR_INIT 26
#define K_SYSCALL_K_CONDVAR_SIGNAL 27
#define K_SYSCALL_K_CONDVAR_WAIT 28
#define K_SYSCALL_K_EVENT_CLEAR 29
#define K_SYSCALL_K_EVENT_INIT 30
#define K_SYSCALL_K_EVENT_POST 31
#define K_SYSCALL_K_EVENT_SET 32
#define K_SYSCALL_K_EVENT_SET_MASKED 33
#define K_SYSCALL_K_EVENT_WAIT 34
#define K_SYSCALL_K_EVENT_WAIT_ALL 35
#define K_SYSCALL_K_FLOAT_DISABLE 36
#define K_SYSCALL_K_FLOAT_ENABLE 37
#define K_SYSCALL_K_FUTEX_WAIT 38
#define K_SYSCALL_K_FUTEX_WAKE 39
#define K_SYSCALL_K_IS_PREEMPT_THREAD 40
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 41
#define K_SYSCALL_K_MSGQ_GET 42
#define K_SYSCALL_K_MSGQ_GET_ATTRS 43
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 44
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 45
#define K_SYSCALL_K_MSGQ_PEEK 46
#define K_SYSCALL_K_MSGQ_PEEK_AT 47
#define K_SYSCALL_K_MSGQ_PURGE 48
#define K_SYSCALL_K_MSGQ_PUT 49
#define K_SYSCALL_K_MUTEX_INIT 50
#define K_SYSCALL_K_MUTEX_LOCK 51
#define K_SYSCALL_K_MUTEX_UNLOCK 52
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 53
#define K_SYSCALL_K_OBJECT_ALLOC 54
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 55
#define K_SYSCALL_K_OBJECT_RELEASE 56
#define K_SYSCALL_K_PIPE_ALLOC_INIT 57
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 58
#define K_SYSCALL_K_PIPE_FLUSH 59
#define K_SYSCALL_K_PIPE_GET 60
#define K_SYSCALL_K_PIPE_PUT 61
#define K_SYSCALL_K_PIPE_READ_AVAIL 62
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 63
#define K_SYSCALL_K_POLL 64
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 65
#define K_SYSCALL_K_POLL_SIGNAL_INIT 66
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 67
#define K_SYSCALL_K_POLL_SIGNAL_RESET 68
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 69
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 70
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 71
#define K_SYSCALL_K_QUEUE_GET 72
#define K_SYSCALL_K_QUEUE_INIT 73
#define K_SYSCALL_K_QUEUE_IS_EMPTY 74
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 75
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 76
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 77
#define K_SYSCALL_K_SEM_COUNT_GET 78
#define K_SYSCALL_K_SEM_GIVE 79
#define K_SYSCALL_K_SEM_INIT 80
#define K_SYSCALL_K_SEM_RESET 81
#define K_SYSCALL_K_SEM_TAKE 82
#define K_SYSCALL_K_SLEEP 83
#define K_SYSCALL_K_STACK_ALLOC_INIT 84
#define K_SYSCALL_K_STACK_POP 85
#define K_SYSCALL_K_STACK_PUSH 86
#define K_SYSCALL_K_STR_OUT 87
#define K_SYSCALL_K_THREAD_ABORT 88
#define K_SYSCALL_K_THREAD_CREATE 89
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 90
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 91
#define K_SYSCALL_K_THREAD_DEADLINE_SET 92
#define K_SYSCALL_K_THREAD_JOIN 93
#define K_SYSCALL_K_THREAD_NAME_COPY 94
#define K_SYSCALL_K_THREAD_NAME_SET 95
#define K_SYSCALL_K_THREAD_PRIORITY_GET 96
#define K_SYSCALL_K_THREAD_PRIORITY_SET 97
#define K_SYSCALL_K_THREAD_RESUME 98
#define K_SYSCALL_K_THREAD_STACK_ALLOC 99
#define K_SYSCALL_K_THREAD_STACK_FREE 100
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 101
#define K_SYSCALL_K_THREAD_START 102
#define K_SYSCALL_K_THREAD_SUSPEND 103
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 104
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 105
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 106
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 107
#define K_SYSCALL_K_TIMER_START 108
#define K_SYSCALL_K_TIMER_STATUS_GET 109
#define K_SYSCALL_K_TIMER_STATUS_SYNC 110
#define K_SYSCALL_K_TIMER_STOP 111
#define K_SYSCALL_K_TIMER_USER_DATA_GET 112
#define K_SYSCALL_K_TIMER_USER_DATA_SET 113
#define K_SYSCALL_K_UPTIME_TICKS 114
#define K_SYSCALL_K_USLEEP 115
#define K_SYSCALL_K_WAKEUP 116
#define K_SYSCALL_K_YIELD 117
#define K_SYSCALL_LOG_BUFFERED_CNT 118
#define K_SYSCALL_LOG_FILTER_SET 119
#define K_SYSCALL_LOG_PANIC 120
#define K_SYSCALL_LOG_PROCESS 121
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 122
#define K_SYSCALL_MBOX_MTU_GET 123
#define K_SYSCALL_MBOX_SEND 124
#define K_SYSCALL_MBOX_SET_ENABLED 125
#define K_SYSCALL_NET_ADDR_NTOP 126
#define K_SYSCALL_NET_ADDR_PTON 127
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 128
#define K_SYSCALL_NET_IF_GET_BY_INDEX 129
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 130
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 131
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 132
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 133
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 134
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 135
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 136
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 137
#define K_SYSCALL_SPI_RELEASE 138
#define K_SYSCALL_SPI_TRANSCEIVE 139
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 140
#define K_SYSCALL_SYS_CSRAND_GET 141
#define K_SYSCALL_SYS_RAND32_GET 142
#define K_SYSCALL_SYS_RAND_GET 143
#define K_SYSCALL_UART_CONFIGURE 144
#define K_SYSCALL_UART_CONFIG_GET 145
#define K_SYSCALL_UART_DRV_CMD 146
#define K_SYSCALL_UART_ERR_CHECK 147
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 148
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 149
#define K_SYSCALL_UART_IRQ_IS_PENDING 150
#define K_SYSCALL_UART_IRQ_RX_DISABLE 151
#define K_SYSCALL_UART_IRQ_RX_ENABLE 152
#define K_SYSCALL_UART_IRQ_TX_DISABLE 153
#define K_SYSCALL_UART_IRQ_TX_ENABLE 154
#define K_SYSCALL_UART_IRQ_UPDATE 155
#define K_SYSCALL_UART_LINE_CTRL_GET 156
#define K_SYSCALL_UART_LINE_CTRL_SET 157
#define K_SYSCALL_UART_POLL_IN 158
#define K_SYSCALL_UART_POLL_IN_U16 159
#define K_SYSCALL_UART_POLL_OUT 160
#define K_SYSCALL_UART_POLL_OUT_U16 161
#define K_SYSCALL_UART_RX_DISABLE 162
#define K_SYSCALL_UART_RX_ENABLE 163
#define K_SYSCALL_UART_RX_ENABLE_U16 164
#define K_SYSCALL_UART_TX 165
#define K_SYSCALL_UART_TX_ABORT 166
#define K_SYSCALL_UART_TX_U16 167
#define K_SYSCALL_ZEPHYR_FPUTC 168
#define K_SYSCALL_ZEPHYR_FWRITE 169
#define K_SYSCALL_ZEPHYR_READ_STDIN 170
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 171
#define K_SYSCALL_ZSOCK_ACCEPT 172
#define K_SYSCALL_ZSOCK_BIND 173
#define K_SYSCALL_ZSOCK_CLOSE 174
#define K_SYSCALL_ZSOCK_CONNECT 175
#define K_SYSCALL_ZSOCK_FCNTL 176
#define K_SYSCALL_ZSOCK_GETHOSTNAME 177
#define K_SYSCALL_ZSOCK_GETPEERNAME 178
#define K_SYSCALL_ZSOCK_GETSOCKNAME 179
#define K_SYSCALL_ZSOCK_GETSOCKOPT 180
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 181
#define K_SYSCALL_ZSOCK_INET_PTON 182
#define K_SYSCALL_ZSOCK_IOCTL 183
#define K_SYSCALL_ZSOCK_LISTEN 184
#define K_SYSCALL_ZSOCK_POLL 185
#define K_SYSCALL_ZSOCK_RECVFROM 186
#define K_SYSCALL_ZSOCK_SELECT 187
#define K_SYSCALL_ZSOCK_SENDMSG 188
#define K_SYSCALL_ZSOCK_SENDTO 189
#define K_SYSCALL_ZSOCK_SETSOCKOPT 190
#define K_SYSCALL_ZSOCK_SHUTDOWN 191
#define K_SYSCALL_ZSOCK_SOCKET 192
#define K_SYSCALL_ZSOCK_SOCKETPAIR 193
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 194
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 195
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 196
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 197
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 198
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 199
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 200
#define K_SYSCALL_BAD 201
#define K_SYSCALL_LIMIT 202


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 203
#define K_SYSCALL_ADC_READ 204
#define K_SYSCALL_ADC_READ_ASYNC 205
#define K_SYSCALL_ATOMIC_ADD 206
#define K_SYSCALL_ATOMIC_AND 207
#define K_SYSCALL_ATOMIC_CAS 208
#define K_SYSCALL_ATOMIC_NAND 209
#define K_SYSCALL_ATOMIC_OR 210
#define K_SYSCALL_ATOMIC_PTR_CAS 211
#define K_SYSCALL_ATOMIC_PTR_SET 212
#define K_SYSCALL_ATOMIC_SET 213
#define K_SYSCALL_ATOMIC_SUB 214
#define K_SYSCALL_ATOMIC_XOR 215
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 216
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 217
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 218
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 219
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 220
#define K_SYSCALL_AUXDISPLAY_CLEAR 221
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 222
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 223
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 224
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 225
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 226
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 227
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 228
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 229
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 230
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 231
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 232
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 233
#define K_SYSCALL_AUXDISPLAY_WRITE 234
#define K_SYSCALL_BBRAM_CHECK_INVALID 235
#define K_SYSCALL_BBRAM_CHECK_POWER 236
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 237
#define K_SYSCALL_BBRAM_GET_SIZE 238
#define K_SYSCALL_BBRAM_READ 239
#define K_SYSCALL_BBRAM_WRITE 240
#define K_SYSCALL_BC12_SET_RESULT_CB 241
#define K_SYSCALL_BC12_SET_ROLE 242
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 243
#define K_SYSCALL_CAN_CALC_TIMING 244
#define K_SYSCALL_CAN_CALC_TIMING_DATA 245
#define K_SYSCALL_CAN_GET_CAPABILITIES 246
#define K_SYSCALL_CAN_GET_CORE_CLOCK 247
#define K_SYSCALL_CAN_GET_MAX_BITRATE 248
#define K_SYSCALL_CAN_GET_MAX_FILTERS 249
#define K_SYSCALL_CAN_GET_STATE 250
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 251
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 252
#define K_SYSCALL_CAN_GET_TIMING_MAX 253
#define K_SYSCALL_CAN_GET_TIMING_MIN 254
#define K_SYSCALL_CAN_RECOVER 255
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 256
#define K_SYSCALL_CAN_SEND 257
#define K_SYSCALL_CAN_SET_BITRATE 258
#define K_SYSCALL_CAN_SET_BITRATE_DATA 259
#define K_SYSCALL_CAN_SET_MODE 260
#define K_SYSCALL_CAN_SET_TIMING 261
#define K_SYSCALL_CAN_SET_TIMING_DATA 262
#define K_SYSCALL_CAN_START 263
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 264
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 265
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 266
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 267
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 268
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 269
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 270
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 271
#define K_SYSCALL_CAN_STOP 272
#define K_SYSCALL_CHARGER_GET_PROP 273
#define K_SYSCALL_CHARGER_SET_PROP 274
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 275
#define K_SYSCALL_COUNTER_GET_FREQUENCY 276
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 277
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 278
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 279
#define K_SYSCALL_COUNTER_GET_PENDING_INT 280
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 281
#define K_SYSCALL_COUNTER_GET_VALUE 282
#define K_SYSCALL_COUNTER_GET_VALUE_64 283
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 284
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 285
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 286
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 287
#define K_SYSCALL_COUNTER_START 288
#define K_SYSCALL_COUNTER_STOP 289
#define K_SYSCALL_COUNTER_TICKS_TO_US 290
#define K_SYSCALL_COUNTER_US_TO_TICKS 291
#define K_SYSCALL_DAC_CHANNEL_SETUP 292
#define K_SYSCALL_DAC_WRITE_VALUE 293
#define K_SYSCALL_DEVMUX_SELECT_GET 294
#define K_SYSCALL_DEVMUX_SELECT_SET 295
#define K_SYSCALL_DMA_CHAN_FILTER 296
#define K_SYSCALL_DMA_RELEASE_CHANNEL 297
#define K_SYSCALL_DMA_REQUEST_CHANNEL 298
#define K_SYSCALL_DMA_RESUME 299
#define K_SYSCALL_DMA_START 300
#define K_SYSCALL_DMA_STOP 301
#define K_SYSCALL_DMA_SUSPEND 302
#define K_SYSCALL_EEPROM_GET_SIZE 303
#define K_SYSCALL_EEPROM_READ 304
#define K_SYSCALL_EEPROM_WRITE 305
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 306
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 307
#define K_SYSCALL_ESPI_CONFIG 308
#define K_SYSCALL_ESPI_FLASH_ERASE 309
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 310
#define K_SYSCALL_ESPI_READ_FLASH 311
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 312
#define K_SYSCALL_ESPI_READ_REQUEST 313
#define K_SYSCALL_ESPI_RECEIVE_OOB 314
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 315
#define K_SYSCALL_ESPI_SAF_ACTIVATE 316
#define K_SYSCALL_ESPI_SAF_CONFIG 317
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 318
#define K_SYSCALL_ESPI_SAF_FLASH_READ 319
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 320
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 321
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 322
#define K_SYSCALL_ESPI_SEND_OOB 323
#define K_SYSCALL_ESPI_SEND_VWIRE 324
#define K_SYSCALL_ESPI_WRITE_FLASH 325
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 326
#define K_SYSCALL_ESPI_WRITE_REQUEST 327
#define K_SYSCALL_FLASH_ERASE 328
#define K_SYSCALL_FLASH_EX_OP 329
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 330
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 331
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 332
#define K_SYSCALL_FLASH_GET_PARAMETERS 333
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 334
#define K_SYSCALL_FLASH_READ 335
#define K_SYSCALL_FLASH_READ_JEDEC_ID 336
#define K_SYSCALL_FLASH_SFDP_READ 337
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 338
#define K_SYSCALL_FLASH_WRITE 339
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 340
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 341
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 342
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 343
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 344
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 345
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 346
#define K_SYSCALL_GNSS_GET_FIX_RATE 347
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 348
#define K_SYSCALL_GNSS_GET_PERIODIC_CONFIG 349
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 350
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 351
#define K_SYSCALL_GNSS_SET_FIX_RATE 352
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 353
#define K_SYSCALL_GNSS_SET_PERIODIC_CONFIG 354
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 355
#define K_SYSCALL_HWSPINLOCK_LOCK 356
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 357
#define K_SYSCALL_HWSPINLOCK_UNLOCK 358
#define K_SYSCALL_I2S_BUF_READ 359
#define K_SYSCALL_I2S_BUF_WRITE 360
#define K_SYSCALL_I2S_CONFIGURE 361
#define K_SYSCALL_I2S_TRIGGER 362
#define K_SYSCALL_I3C_DO_CCC 363
#define K_SYSCALL_I3C_TRANSFER 364
#define K_SYSCALL_IPM_COMPLETE 365
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 366
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 367
#define K_SYSCALL_IPM_SEND 368
#define K_SYSCALL_IPM_SET_ENABLED 369
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 370
#define K_SYSCALL_IVSHMEM_GET_ID 371
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 372
#define K_SYSCALL_IVSHMEM_GET_MEM 373
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 374
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 375
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 376
#define K_SYSCALL_IVSHMEM_GET_STATE 377
#define K_SYSCALL_IVSHMEM_GET_VECTORS 378
#define K_SYSCALL_IVSHMEM_INT_PEER 379
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 380
#define K_SYSCALL_IVSHMEM_SET_STATE 381
#define K_SYSCALL_KSCAN_CONFIG 382
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 383
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 384
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 385
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 386
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 387
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 388
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 389
#define K_SYSCALL_LED_BLINK 390
#define K_SYSCALL_LED_GET_INFO 391
#define K_SYSCALL_LED_OFF 392
#define K_SYSCALL_LED_ON 393
#define K_SYSCALL_LED_SET_BRIGHTNESS 394
#define K_SYSCALL_LED_SET_CHANNEL 395
#define K_SYSCALL_LED_SET_COLOR 396
#define K_SYSCALL_LED_WRITE_CHANNELS 397
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 398
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 399
#define K_SYSCALL_MDIO_BUS_DISABLE 400
#define K_SYSCALL_MDIO_BUS_ENABLE 401
#define K_SYSCALL_MDIO_READ 402
#define K_SYSCALL_MDIO_READ_C45 403
#define K_SYSCALL_MDIO_WRITE 404
#define K_SYSCALL_MDIO_WRITE_C45 405
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 406
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 407
#define K_SYSCALL_PECI_CONFIG 408
#define K_SYSCALL_PECI_DISABLE 409
#define K_SYSCALL_PECI_ENABLE 410
#define K_SYSCALL_PECI_TRANSFER 411
#define K_SYSCALL_PHY_CONFIGURE_LINK 412
#define K_SYSCALL_PHY_GET_LINK_STATE 413
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 414
#define K_SYSCALL_PHY_READ 415
#define K_SYSCALL_PHY_WRITE 416
#define K_SYSCALL_PS2_CONFIG 417
#define K_SYSCALL_PS2_DISABLE_CALLBACK 418
#define K_SYSCALL_PS2_ENABLE_CALLBACK 419
#define K_SYSCALL_PS2_READ 420
#define K_SYSCALL_PS2_WRITE 421
#define K_SYSCALL_PTP_CLOCK_GET 422
#define K_SYSCALL_PWM_CAPTURE_CYCLES 423
#define K_SYSCALL_PWM_DISABLE_CAPTURE 424
#define K_SYSCALL_PWM_ENABLE_CAPTURE 425
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 426
#define K_SYSCALL_PWM_SET_CYCLES 427
#define K_SYSCALL_RESET_LINE_ASSERT 428
#define K_SYSCALL_RESET_LINE_DEASSERT 429
#define K_SYSCALL_RESET_LINE_TOGGLE 430
#define K_SYSCALL_RESET_STATUS 431
#define K_SYSCALL_RETAINED_MEM_CLEAR 432
#define K_SYSCALL_RETAINED_MEM_READ 433
#define K_SYSCALL_RETAINED_MEM_SIZE 434
#define K_SYSCALL_RETAINED_MEM_WRITE 435
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 436
#define K_SYSCALL_RTC_ALARM_GET_TIME 437
#define K_SYSCALL_RTC_ALARM_IS_PENDING 438
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 439
#define K_SYSCALL_RTC_ALARM_SET_TIME 440
#define K_SYSCALL_RTC_GET_CALIBRATION 441
#define K_SYSCALL_RTC_GET_TIME 442
#define K_SYSCALL_RTC_SET_CALIBRATION 443
#define K_SYSCALL_RTC_SET_TIME 444
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 445
#define K_SYSCALL_RTIO_CQE_COPY_OUT 446
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 447
#define K_SYSCALL_RTIO_RELEASE_BUFFER 448
#define K_SYSCALL_RTIO_SQE_CANCEL 449
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 450
#define K_SYSCALL_RTIO_SUBMIT 451
#define K_SYSCALL_SDHC_CARD_BUSY 452
#define K_SYSCALL_SDHC_CARD_PRESENT 453
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 454
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 455
#define K_SYSCALL_SDHC_EXECUTE_TUNING 456
#define K_SYSCALL_SDHC_GET_HOST_PROPS 457
#define K_SYSCALL_SDHC_HW_RESET 458
#define K_SYSCALL_SDHC_REQUEST 459
#define K_SYSCALL_SDHC_SET_IO 460
#define K_SYSCALL_SENSOR_ATTR_GET 461
#define K_SYSCALL_SENSOR_ATTR_SET 462
#define K_SYSCALL_SENSOR_CHANNEL_GET 463
#define K_SYSCALL_SENSOR_GET_DECODER 464
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 465
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 466
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 467
#define K_SYSCALL_SIP_SUPERVISORY_CALL 468
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 469
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 470
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 471
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 472
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 473
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 474
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 475
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 476
#define K_SYSCALL_SMBUS_BLOCK_PCALL 477
#define K_SYSCALL_SMBUS_BLOCK_READ 478
#define K_SYSCALL_SMBUS_BLOCK_WRITE 479
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 480
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 481
#define K_SYSCALL_SMBUS_BYTE_READ 482
#define K_SYSCALL_SMBUS_BYTE_WRITE 483
#define K_SYSCALL_SMBUS_CONFIGURE 484
#define K_SYSCALL_SMBUS_GET_CONFIG 485
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 486
#define K_SYSCALL_SMBUS_PCALL 487
#define K_SYSCALL_SMBUS_QUICK 488
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 489
#define K_SYSCALL_SMBUS_WORD_DATA_READ 490
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 491
#define K_SYSCALL_SYSCON_GET_BASE 492
#define K_SYSCALL_SYSCON_GET_SIZE 493
#define K_SYSCALL_SYSCON_READ_REG 494
#define K_SYSCALL_SYSCON_WRITE_REG 495
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 496
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 497
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 498
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 499
#define K_SYSCALL_TGPIO_PIN_DISABLE 500
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 501
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 502
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 503
#define K_SYSCALL_TGPIO_PORT_GET_TIME 504
#define K_SYSCALL_UART_MUX_FIND 505
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 506
#define K_SYSCALL_UPDATEHUB_CONFIRM 507
#define K_SYSCALL_UPDATEHUB_PROBE 508
#define K_SYSCALL_UPDATEHUB_REBOOT 509
#define K_SYSCALL_UPDATEHUB_UPDATE 510
#define K_SYSCALL_USER_FAULT 511
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 512
#define K_SYSCALL_W1_CONFIGURE 513
#define K_SYSCALL_W1_GET_SLAVE_COUNT 514
#define K_SYSCALL_W1_READ_BIT 515
#define K_SYSCALL_W1_READ_BLOCK 516
#define K_SYSCALL_W1_READ_BYTE 517
#define K_SYSCALL_W1_RESET_BUS 518
#define K_SYSCALL_W1_SEARCH_BUS 519
#define K_SYSCALL_W1_WRITE_BIT 520
#define K_SYSCALL_W1_WRITE_BLOCK 521
#define K_SYSCALL_W1_WRITE_BYTE 522
#define K_SYSCALL_WDT_DISABLE 523
#define K_SYSCALL_WDT_FEED 524
#define K_SYSCALL_WDT_SETUP 525
#define K_SYSCALL_Z_ERRNO 526


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
