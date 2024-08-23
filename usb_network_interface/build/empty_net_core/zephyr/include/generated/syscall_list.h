/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_CLOCK_GETTIME 0
#define K_SYSCALL_DEVICE_GET_BINDING 1
#define K_SYSCALL_DEVICE_IS_READY 2
#define K_SYSCALL_GPIO_GET_PENDING_INT 3
#define K_SYSCALL_GPIO_PIN_CONFIGURE 4
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 5
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 6
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 7
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 8
#define K_SYSCALL_GPIO_PORT_GET_RAW 9
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 10
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 11
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 12
#define K_SYSCALL_K_BUSY_WAIT 13
#define K_SYSCALL_K_CONDVAR_BROADCAST 14
#define K_SYSCALL_K_CONDVAR_INIT 15
#define K_SYSCALL_K_CONDVAR_SIGNAL 16
#define K_SYSCALL_K_CONDVAR_WAIT 17
#define K_SYSCALL_K_EVENT_CLEAR 18
#define K_SYSCALL_K_EVENT_INIT 19
#define K_SYSCALL_K_EVENT_POST 20
#define K_SYSCALL_K_EVENT_SET 21
#define K_SYSCALL_K_EVENT_SET_MASKED 22
#define K_SYSCALL_K_EVENT_WAIT 23
#define K_SYSCALL_K_EVENT_WAIT_ALL 24
#define K_SYSCALL_K_FLOAT_DISABLE 25
#define K_SYSCALL_K_FLOAT_ENABLE 26
#define K_SYSCALL_K_FUTEX_WAIT 27
#define K_SYSCALL_K_FUTEX_WAKE 28
#define K_SYSCALL_K_IS_PREEMPT_THREAD 29
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 30
#define K_SYSCALL_K_MSGQ_GET 31
#define K_SYSCALL_K_MSGQ_GET_ATTRS 32
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 33
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 34
#define K_SYSCALL_K_MSGQ_PEEK 35
#define K_SYSCALL_K_MSGQ_PEEK_AT 36
#define K_SYSCALL_K_MSGQ_PURGE 37
#define K_SYSCALL_K_MSGQ_PUT 38
#define K_SYSCALL_K_MUTEX_INIT 39
#define K_SYSCALL_K_MUTEX_LOCK 40
#define K_SYSCALL_K_MUTEX_UNLOCK 41
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 42
#define K_SYSCALL_K_OBJECT_ALLOC 43
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 44
#define K_SYSCALL_K_OBJECT_RELEASE 45
#define K_SYSCALL_K_PIPE_ALLOC_INIT 46
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 47
#define K_SYSCALL_K_PIPE_FLUSH 48
#define K_SYSCALL_K_PIPE_GET 49
#define K_SYSCALL_K_PIPE_PUT 50
#define K_SYSCALL_K_PIPE_READ_AVAIL 51
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 52
#define K_SYSCALL_K_POLL 53
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 54
#define K_SYSCALL_K_POLL_SIGNAL_INIT 55
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 56
#define K_SYSCALL_K_POLL_SIGNAL_RESET 57
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 58
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 59
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 60
#define K_SYSCALL_K_QUEUE_GET 61
#define K_SYSCALL_K_QUEUE_INIT 62
#define K_SYSCALL_K_QUEUE_IS_EMPTY 63
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 64
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 65
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 66
#define K_SYSCALL_K_SEM_COUNT_GET 67
#define K_SYSCALL_K_SEM_GIVE 68
#define K_SYSCALL_K_SEM_INIT 69
#define K_SYSCALL_K_SEM_RESET 70
#define K_SYSCALL_K_SEM_TAKE 71
#define K_SYSCALL_K_SLEEP 72
#define K_SYSCALL_K_STACK_ALLOC_INIT 73
#define K_SYSCALL_K_STACK_POP 74
#define K_SYSCALL_K_STACK_PUSH 75
#define K_SYSCALL_K_STR_OUT 76
#define K_SYSCALL_K_THREAD_ABORT 77
#define K_SYSCALL_K_THREAD_CREATE 78
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 79
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 80
#define K_SYSCALL_K_THREAD_DEADLINE_SET 81
#define K_SYSCALL_K_THREAD_JOIN 82
#define K_SYSCALL_K_THREAD_NAME_COPY 83
#define K_SYSCALL_K_THREAD_NAME_SET 84
#define K_SYSCALL_K_THREAD_PRIORITY_GET 85
#define K_SYSCALL_K_THREAD_PRIORITY_SET 86
#define K_SYSCALL_K_THREAD_RESUME 87
#define K_SYSCALL_K_THREAD_STACK_ALLOC 88
#define K_SYSCALL_K_THREAD_STACK_FREE 89
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 90
#define K_SYSCALL_K_THREAD_START 91
#define K_SYSCALL_K_THREAD_SUSPEND 92
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 93
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 94
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 95
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 96
#define K_SYSCALL_K_TIMER_START 97
#define K_SYSCALL_K_TIMER_STATUS_GET 98
#define K_SYSCALL_K_TIMER_STATUS_SYNC 99
#define K_SYSCALL_K_TIMER_STOP 100
#define K_SYSCALL_K_TIMER_USER_DATA_GET 101
#define K_SYSCALL_K_TIMER_USER_DATA_SET 102
#define K_SYSCALL_K_UPTIME_TICKS 103
#define K_SYSCALL_K_USLEEP 104
#define K_SYSCALL_K_WAKEUP 105
#define K_SYSCALL_K_YIELD 106
#define K_SYSCALL_LOG_BUFFERED_CNT 107
#define K_SYSCALL_LOG_FILTER_SET 108
#define K_SYSCALL_LOG_PANIC 109
#define K_SYSCALL_LOG_PROCESS 110
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 111
#define K_SYSCALL_ZEPHYR_FPUTC 112
#define K_SYSCALL_ZEPHYR_FWRITE 113
#define K_SYSCALL_ZEPHYR_READ_STDIN 114
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 115
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 116
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 117
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 118
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 119
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 120
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 121
#define K_SYSCALL_BAD 122
#define K_SYSCALL_LIMIT 123


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 124
#define K_SYSCALL_ADC_READ 125
#define K_SYSCALL_ADC_READ_ASYNC 126
#define K_SYSCALL_ATOMIC_ADD 127
#define K_SYSCALL_ATOMIC_AND 128
#define K_SYSCALL_ATOMIC_CAS 129
#define K_SYSCALL_ATOMIC_NAND 130
#define K_SYSCALL_ATOMIC_OR 131
#define K_SYSCALL_ATOMIC_PTR_CAS 132
#define K_SYSCALL_ATOMIC_PTR_SET 133
#define K_SYSCALL_ATOMIC_SET 134
#define K_SYSCALL_ATOMIC_SUB 135
#define K_SYSCALL_ATOMIC_XOR 136
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 137
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 138
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 139
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 140
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 141
#define K_SYSCALL_AUXDISPLAY_CLEAR 142
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 143
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 144
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 145
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 146
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 147
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 148
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 149
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 150
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 151
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 152
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 153
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 154
#define K_SYSCALL_AUXDISPLAY_WRITE 155
#define K_SYSCALL_BBRAM_CHECK_INVALID 156
#define K_SYSCALL_BBRAM_CHECK_POWER 157
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 158
#define K_SYSCALL_BBRAM_GET_SIZE 159
#define K_SYSCALL_BBRAM_READ 160
#define K_SYSCALL_BBRAM_WRITE 161
#define K_SYSCALL_BC12_SET_RESULT_CB 162
#define K_SYSCALL_BC12_SET_ROLE 163
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 164
#define K_SYSCALL_CAN_CALC_TIMING 165
#define K_SYSCALL_CAN_CALC_TIMING_DATA 166
#define K_SYSCALL_CAN_GET_CAPABILITIES 167
#define K_SYSCALL_CAN_GET_CORE_CLOCK 168
#define K_SYSCALL_CAN_GET_MAX_BITRATE 169
#define K_SYSCALL_CAN_GET_MAX_FILTERS 170
#define K_SYSCALL_CAN_GET_STATE 171
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 172
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 173
#define K_SYSCALL_CAN_GET_TIMING_MAX 174
#define K_SYSCALL_CAN_GET_TIMING_MIN 175
#define K_SYSCALL_CAN_RECOVER 176
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 177
#define K_SYSCALL_CAN_SEND 178
#define K_SYSCALL_CAN_SET_BITRATE 179
#define K_SYSCALL_CAN_SET_BITRATE_DATA 180
#define K_SYSCALL_CAN_SET_MODE 181
#define K_SYSCALL_CAN_SET_TIMING 182
#define K_SYSCALL_CAN_SET_TIMING_DATA 183
#define K_SYSCALL_CAN_START 184
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 185
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 186
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 187
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 188
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 189
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 190
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 191
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 192
#define K_SYSCALL_CAN_STOP 193
#define K_SYSCALL_CHARGER_GET_PROP 194
#define K_SYSCALL_CHARGER_SET_PROP 195
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 196
#define K_SYSCALL_COUNTER_GET_FREQUENCY 197
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 198
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 199
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 200
#define K_SYSCALL_COUNTER_GET_PENDING_INT 201
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 202
#define K_SYSCALL_COUNTER_GET_VALUE 203
#define K_SYSCALL_COUNTER_GET_VALUE_64 204
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 205
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 206
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 207
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 208
#define K_SYSCALL_COUNTER_START 209
#define K_SYSCALL_COUNTER_STOP 210
#define K_SYSCALL_COUNTER_TICKS_TO_US 211
#define K_SYSCALL_COUNTER_US_TO_TICKS 212
#define K_SYSCALL_DAC_CHANNEL_SETUP 213
#define K_SYSCALL_DAC_WRITE_VALUE 214
#define K_SYSCALL_DEVMUX_SELECT_GET 215
#define K_SYSCALL_DEVMUX_SELECT_SET 216
#define K_SYSCALL_DMA_CHAN_FILTER 217
#define K_SYSCALL_DMA_RELEASE_CHANNEL 218
#define K_SYSCALL_DMA_REQUEST_CHANNEL 219
#define K_SYSCALL_DMA_RESUME 220
#define K_SYSCALL_DMA_START 221
#define K_SYSCALL_DMA_STOP 222
#define K_SYSCALL_DMA_SUSPEND 223
#define K_SYSCALL_EEPROM_GET_SIZE 224
#define K_SYSCALL_EEPROM_READ 225
#define K_SYSCALL_EEPROM_WRITE 226
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 227
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 228
#define K_SYSCALL_ENTROPY_GET_ENTROPY 229
#define K_SYSCALL_ESPI_CONFIG 230
#define K_SYSCALL_ESPI_FLASH_ERASE 231
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 232
#define K_SYSCALL_ESPI_READ_FLASH 233
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 234
#define K_SYSCALL_ESPI_READ_REQUEST 235
#define K_SYSCALL_ESPI_RECEIVE_OOB 236
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 237
#define K_SYSCALL_ESPI_SAF_ACTIVATE 238
#define K_SYSCALL_ESPI_SAF_CONFIG 239
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 240
#define K_SYSCALL_ESPI_SAF_FLASH_READ 241
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 242
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 243
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 244
#define K_SYSCALL_ESPI_SEND_OOB 245
#define K_SYSCALL_ESPI_SEND_VWIRE 246
#define K_SYSCALL_ESPI_WRITE_FLASH 247
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 248
#define K_SYSCALL_ESPI_WRITE_REQUEST 249
#define K_SYSCALL_FLASH_ERASE 250
#define K_SYSCALL_FLASH_EX_OP 251
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 252
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 253
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 254
#define K_SYSCALL_FLASH_GET_PARAMETERS 255
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 256
#define K_SYSCALL_FLASH_READ 257
#define K_SYSCALL_FLASH_READ_JEDEC_ID 258
#define K_SYSCALL_FLASH_SFDP_READ 259
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 260
#define K_SYSCALL_FLASH_WRITE 261
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 262
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 263
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 264
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 265
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 266
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 267
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 268
#define K_SYSCALL_GNSS_GET_FIX_RATE 269
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 270
#define K_SYSCALL_GNSS_GET_PERIODIC_CONFIG 271
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 272
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 273
#define K_SYSCALL_GNSS_SET_FIX_RATE 274
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 275
#define K_SYSCALL_GNSS_SET_PERIODIC_CONFIG 276
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 277
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 278
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 279
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 280
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 281
#define K_SYSCALL_HWSPINLOCK_LOCK 282
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 283
#define K_SYSCALL_HWSPINLOCK_UNLOCK 284
#define K_SYSCALL_I2C_CONFIGURE 285
#define K_SYSCALL_I2C_GET_CONFIG 286
#define K_SYSCALL_I2C_RECOVER_BUS 287
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 288
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 289
#define K_SYSCALL_I2C_TRANSFER 290
#define K_SYSCALL_I2S_BUF_READ 291
#define K_SYSCALL_I2S_BUF_WRITE 292
#define K_SYSCALL_I2S_CONFIGURE 293
#define K_SYSCALL_I2S_TRIGGER 294
#define K_SYSCALL_I3C_DO_CCC 295
#define K_SYSCALL_I3C_TRANSFER 296
#define K_SYSCALL_IPM_COMPLETE 297
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 298
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 299
#define K_SYSCALL_IPM_SEND 300
#define K_SYSCALL_IPM_SET_ENABLED 301
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 302
#define K_SYSCALL_IVSHMEM_GET_ID 303
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 304
#define K_SYSCALL_IVSHMEM_GET_MEM 305
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 306
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 307
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 308
#define K_SYSCALL_IVSHMEM_GET_STATE 309
#define K_SYSCALL_IVSHMEM_GET_VECTORS 310
#define K_SYSCALL_IVSHMEM_INT_PEER 311
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 312
#define K_SYSCALL_IVSHMEM_SET_STATE 313
#define K_SYSCALL_KSCAN_CONFIG 314
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 315
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 316
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 317
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 318
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 319
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 320
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 321
#define K_SYSCALL_LED_BLINK 322
#define K_SYSCALL_LED_GET_INFO 323
#define K_SYSCALL_LED_OFF 324
#define K_SYSCALL_LED_ON 325
#define K_SYSCALL_LED_SET_BRIGHTNESS 326
#define K_SYSCALL_LED_SET_CHANNEL 327
#define K_SYSCALL_LED_SET_COLOR 328
#define K_SYSCALL_LED_WRITE_CHANNELS 329
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 330
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 331
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 332
#define K_SYSCALL_MBOX_MTU_GET 333
#define K_SYSCALL_MBOX_SEND 334
#define K_SYSCALL_MBOX_SET_ENABLED 335
#define K_SYSCALL_MDIO_BUS_DISABLE 336
#define K_SYSCALL_MDIO_BUS_ENABLE 337
#define K_SYSCALL_MDIO_READ 338
#define K_SYSCALL_MDIO_READ_C45 339
#define K_SYSCALL_MDIO_WRITE 340
#define K_SYSCALL_MDIO_WRITE_C45 341
#define K_SYSCALL_NET_ADDR_NTOP 342
#define K_SYSCALL_NET_ADDR_PTON 343
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 344
#define K_SYSCALL_NET_IF_GET_BY_INDEX 345
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 346
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 347
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 348
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 349
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 350
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 351
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 352
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 353
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 354
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 355
#define K_SYSCALL_PECI_CONFIG 356
#define K_SYSCALL_PECI_DISABLE 357
#define K_SYSCALL_PECI_ENABLE 358
#define K_SYSCALL_PECI_TRANSFER 359
#define K_SYSCALL_PHY_CONFIGURE_LINK 360
#define K_SYSCALL_PHY_GET_LINK_STATE 361
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 362
#define K_SYSCALL_PHY_READ 363
#define K_SYSCALL_PHY_WRITE 364
#define K_SYSCALL_PS2_CONFIG 365
#define K_SYSCALL_PS2_DISABLE_CALLBACK 366
#define K_SYSCALL_PS2_ENABLE_CALLBACK 367
#define K_SYSCALL_PS2_READ 368
#define K_SYSCALL_PS2_WRITE 369
#define K_SYSCALL_PTP_CLOCK_GET 370
#define K_SYSCALL_PWM_CAPTURE_CYCLES 371
#define K_SYSCALL_PWM_DISABLE_CAPTURE 372
#define K_SYSCALL_PWM_ENABLE_CAPTURE 373
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 374
#define K_SYSCALL_PWM_SET_CYCLES 375
#define K_SYSCALL_RESET_LINE_ASSERT 376
#define K_SYSCALL_RESET_LINE_DEASSERT 377
#define K_SYSCALL_RESET_LINE_TOGGLE 378
#define K_SYSCALL_RESET_STATUS 379
#define K_SYSCALL_RETAINED_MEM_CLEAR 380
#define K_SYSCALL_RETAINED_MEM_READ 381
#define K_SYSCALL_RETAINED_MEM_SIZE 382
#define K_SYSCALL_RETAINED_MEM_WRITE 383
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 384
#define K_SYSCALL_RTC_ALARM_GET_TIME 385
#define K_SYSCALL_RTC_ALARM_IS_PENDING 386
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 387
#define K_SYSCALL_RTC_ALARM_SET_TIME 388
#define K_SYSCALL_RTC_GET_CALIBRATION 389
#define K_SYSCALL_RTC_GET_TIME 390
#define K_SYSCALL_RTC_SET_CALIBRATION 391
#define K_SYSCALL_RTC_SET_TIME 392
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 393
#define K_SYSCALL_RTIO_CQE_COPY_OUT 394
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 395
#define K_SYSCALL_RTIO_RELEASE_BUFFER 396
#define K_SYSCALL_RTIO_SQE_CANCEL 397
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 398
#define K_SYSCALL_RTIO_SUBMIT 399
#define K_SYSCALL_SDHC_CARD_BUSY 400
#define K_SYSCALL_SDHC_CARD_PRESENT 401
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 402
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 403
#define K_SYSCALL_SDHC_EXECUTE_TUNING 404
#define K_SYSCALL_SDHC_GET_HOST_PROPS 405
#define K_SYSCALL_SDHC_HW_RESET 406
#define K_SYSCALL_SDHC_REQUEST 407
#define K_SYSCALL_SDHC_SET_IO 408
#define K_SYSCALL_SENSOR_ATTR_GET 409
#define K_SYSCALL_SENSOR_ATTR_SET 410
#define K_SYSCALL_SENSOR_CHANNEL_GET 411
#define K_SYSCALL_SENSOR_GET_DECODER 412
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 413
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 414
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 415
#define K_SYSCALL_SIP_SUPERVISORY_CALL 416
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 417
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 418
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 419
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 420
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 421
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 422
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 423
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 424
#define K_SYSCALL_SMBUS_BLOCK_PCALL 425
#define K_SYSCALL_SMBUS_BLOCK_READ 426
#define K_SYSCALL_SMBUS_BLOCK_WRITE 427
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 428
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 429
#define K_SYSCALL_SMBUS_BYTE_READ 430
#define K_SYSCALL_SMBUS_BYTE_WRITE 431
#define K_SYSCALL_SMBUS_CONFIGURE 432
#define K_SYSCALL_SMBUS_GET_CONFIG 433
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 434
#define K_SYSCALL_SMBUS_PCALL 435
#define K_SYSCALL_SMBUS_QUICK 436
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 437
#define K_SYSCALL_SMBUS_WORD_DATA_READ 438
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 439
#define K_SYSCALL_SPI_RELEASE 440
#define K_SYSCALL_SPI_TRANSCEIVE 441
#define K_SYSCALL_SYSCON_GET_BASE 442
#define K_SYSCALL_SYSCON_GET_SIZE 443
#define K_SYSCALL_SYSCON_READ_REG 444
#define K_SYSCALL_SYSCON_WRITE_REG 445
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 446
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 447
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 448
#define K_SYSCALL_SYS_CSRAND_GET 449
#define K_SYSCALL_SYS_RAND32_GET 450
#define K_SYSCALL_SYS_RAND_GET 451
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 452
#define K_SYSCALL_TGPIO_PIN_DISABLE 453
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 454
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 455
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 456
#define K_SYSCALL_TGPIO_PORT_GET_TIME 457
#define K_SYSCALL_UART_CONFIGURE 458
#define K_SYSCALL_UART_CONFIG_GET 459
#define K_SYSCALL_UART_DRV_CMD 460
#define K_SYSCALL_UART_ERR_CHECK 461
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 462
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 463
#define K_SYSCALL_UART_IRQ_IS_PENDING 464
#define K_SYSCALL_UART_IRQ_RX_DISABLE 465
#define K_SYSCALL_UART_IRQ_RX_ENABLE 466
#define K_SYSCALL_UART_IRQ_TX_DISABLE 467
#define K_SYSCALL_UART_IRQ_TX_ENABLE 468
#define K_SYSCALL_UART_IRQ_UPDATE 469
#define K_SYSCALL_UART_LINE_CTRL_GET 470
#define K_SYSCALL_UART_LINE_CTRL_SET 471
#define K_SYSCALL_UART_MUX_FIND 472
#define K_SYSCALL_UART_POLL_IN 473
#define K_SYSCALL_UART_POLL_IN_U16 474
#define K_SYSCALL_UART_POLL_OUT 475
#define K_SYSCALL_UART_POLL_OUT_U16 476
#define K_SYSCALL_UART_RX_DISABLE 477
#define K_SYSCALL_UART_RX_ENABLE 478
#define K_SYSCALL_UART_RX_ENABLE_U16 479
#define K_SYSCALL_UART_TX 480
#define K_SYSCALL_UART_TX_ABORT 481
#define K_SYSCALL_UART_TX_U16 482
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 483
#define K_SYSCALL_UPDATEHUB_CONFIRM 484
#define K_SYSCALL_UPDATEHUB_PROBE 485
#define K_SYSCALL_UPDATEHUB_REBOOT 486
#define K_SYSCALL_UPDATEHUB_UPDATE 487
#define K_SYSCALL_USER_FAULT 488
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 489
#define K_SYSCALL_W1_CONFIGURE 490
#define K_SYSCALL_W1_GET_SLAVE_COUNT 491
#define K_SYSCALL_W1_READ_BIT 492
#define K_SYSCALL_W1_READ_BLOCK 493
#define K_SYSCALL_W1_READ_BYTE 494
#define K_SYSCALL_W1_RESET_BUS 495
#define K_SYSCALL_W1_SEARCH_BUS 496
#define K_SYSCALL_W1_WRITE_BIT 497
#define K_SYSCALL_W1_WRITE_BLOCK 498
#define K_SYSCALL_W1_WRITE_BYTE 499
#define K_SYSCALL_WDT_DISABLE 500
#define K_SYSCALL_WDT_FEED 501
#define K_SYSCALL_WDT_SETUP 502
#define K_SYSCALL_ZSOCK_ACCEPT 503
#define K_SYSCALL_ZSOCK_BIND 504
#define K_SYSCALL_ZSOCK_CLOSE 505
#define K_SYSCALL_ZSOCK_CONNECT 506
#define K_SYSCALL_ZSOCK_FCNTL 507
#define K_SYSCALL_ZSOCK_GETHOSTNAME 508
#define K_SYSCALL_ZSOCK_GETPEERNAME 509
#define K_SYSCALL_ZSOCK_GETSOCKNAME 510
#define K_SYSCALL_ZSOCK_GETSOCKOPT 511
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 512
#define K_SYSCALL_ZSOCK_INET_PTON 513
#define K_SYSCALL_ZSOCK_IOCTL 514
#define K_SYSCALL_ZSOCK_LISTEN 515
#define K_SYSCALL_ZSOCK_POLL 516
#define K_SYSCALL_ZSOCK_RECVFROM 517
#define K_SYSCALL_ZSOCK_SELECT 518
#define K_SYSCALL_ZSOCK_SENDMSG 519
#define K_SYSCALL_ZSOCK_SENDTO 520
#define K_SYSCALL_ZSOCK_SETSOCKOPT 521
#define K_SYSCALL_ZSOCK_SHUTDOWN 522
#define K_SYSCALL_ZSOCK_SOCKET 523
#define K_SYSCALL_ZSOCK_SOCKETPAIR 524
#define K_SYSCALL_Z_ERRNO 525
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 526


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */