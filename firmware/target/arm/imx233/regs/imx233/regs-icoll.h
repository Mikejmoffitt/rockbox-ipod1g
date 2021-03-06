/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: imx233:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN__IMX233__ICOLL__H__
#define __HEADERGEN__IMX233__ICOLL__H__

#define REGS_ICOLL_BASE (0x80000000)

#define REGS_ICOLL_VERSION "3.2.0"

/**
 * Register: HW_ICOLL_VECTOR
 * Address: 0
 * SCT: yes
*/
#define HW_ICOLL_VECTOR                 (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x0))
#define HW_ICOLL_VECTOR_SET             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x4))
#define HW_ICOLL_VECTOR_CLR             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0x8))
#define HW_ICOLL_VECTOR_TOG             (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x0 + 0xc))
#define BP_ICOLL_VECTOR_IRQVECTOR       2
#define BM_ICOLL_VECTOR_IRQVECTOR       0xfffffffc
#define BF_ICOLL_VECTOR_IRQVECTOR(v)    (((v) << 2) & 0xfffffffc)
#define BP_ICOLL_VECTOR_RSRVD1          0
#define BM_ICOLL_VECTOR_RSRVD1          0x3
#define BF_ICOLL_VECTOR_RSRVD1(v)       (((v) << 0) & 0x3)

/**
 * Register: HW_ICOLL_LEVELACK
 * Address: 0x10
 * SCT: no
*/
#define HW_ICOLL_LEVELACK                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x10))
#define BP_ICOLL_LEVELACK_RSRVD1                4
#define BM_ICOLL_LEVELACK_RSRVD1                0xfffffff0
#define BF_ICOLL_LEVELACK_RSRVD1(v)             (((v) << 4) & 0xfffffff0)
#define BP_ICOLL_LEVELACK_IRQLEVELACK           0
#define BM_ICOLL_LEVELACK_IRQLEVELACK           0xf
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL0   0x1
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL1   0x2
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL2   0x4
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL3   0x8
#define BF_ICOLL_LEVELACK_IRQLEVELACK(v)        (((v) << 0) & 0xf)
#define BF_ICOLL_LEVELACK_IRQLEVELACK_V(v)      ((BV_ICOLL_LEVELACK_IRQLEVELACK__##v << 0) & 0xf)

/**
 * Register: HW_ICOLL_CTRL
 * Address: 0x20
 * SCT: yes
*/
#define HW_ICOLL_CTRL                           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x0))
#define HW_ICOLL_CTRL_SET                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x4))
#define HW_ICOLL_CTRL_CLR                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0x8))
#define HW_ICOLL_CTRL_TOG                       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x20 + 0xc))
#define BP_ICOLL_CTRL_SFTRST                    31
#define BM_ICOLL_CTRL_SFTRST                    0x80000000
#define BV_ICOLL_CTRL_SFTRST__RUN               0x0
#define BV_ICOLL_CTRL_SFTRST__IN_RESET          0x1
#define BF_ICOLL_CTRL_SFTRST(v)                 (((v) << 31) & 0x80000000)
#define BF_ICOLL_CTRL_SFTRST_V(v)               ((BV_ICOLL_CTRL_SFTRST__##v << 31) & 0x80000000)
#define BP_ICOLL_CTRL_CLKGATE                   30
#define BM_ICOLL_CTRL_CLKGATE                   0x40000000
#define BV_ICOLL_CTRL_CLKGATE__RUN              0x0
#define BV_ICOLL_CTRL_CLKGATE__NO_CLOCKS        0x1
#define BF_ICOLL_CTRL_CLKGATE(v)                (((v) << 30) & 0x40000000)
#define BF_ICOLL_CTRL_CLKGATE_V(v)              ((BV_ICOLL_CTRL_CLKGATE__##v << 30) & 0x40000000)
#define BP_ICOLL_CTRL_RSRVD3                    24
#define BM_ICOLL_CTRL_RSRVD3                    0x3f000000
#define BF_ICOLL_CTRL_RSRVD3(v)                 (((v) << 24) & 0x3f000000)
#define BP_ICOLL_CTRL_VECTOR_PITCH              21
#define BM_ICOLL_CTRL_VECTOR_PITCH              0xe00000
#define BV_ICOLL_CTRL_VECTOR_PITCH__DEFAULT_BY4 0x0
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY4         0x1
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY8         0x2
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY12        0x3
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY16        0x4
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY20        0x5
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY24        0x6
#define BV_ICOLL_CTRL_VECTOR_PITCH__BY28        0x7
#define BF_ICOLL_CTRL_VECTOR_PITCH(v)           (((v) << 21) & 0xe00000)
#define BF_ICOLL_CTRL_VECTOR_PITCH_V(v)         ((BV_ICOLL_CTRL_VECTOR_PITCH__##v << 21) & 0xe00000)
#define BP_ICOLL_CTRL_BYPASS_FSM                20
#define BM_ICOLL_CTRL_BYPASS_FSM                0x100000
#define BV_ICOLL_CTRL_BYPASS_FSM__NORMAL        0x0
#define BV_ICOLL_CTRL_BYPASS_FSM__BYPASS        0x1
#define BF_ICOLL_CTRL_BYPASS_FSM(v)             (((v) << 20) & 0x100000)
#define BF_ICOLL_CTRL_BYPASS_FSM_V(v)           ((BV_ICOLL_CTRL_BYPASS_FSM__##v << 20) & 0x100000)
#define BP_ICOLL_CTRL_NO_NESTING                19
#define BM_ICOLL_CTRL_NO_NESTING                0x80000
#define BV_ICOLL_CTRL_NO_NESTING__NORMAL        0x0
#define BV_ICOLL_CTRL_NO_NESTING__NO_NEST       0x1
#define BF_ICOLL_CTRL_NO_NESTING(v)             (((v) << 19) & 0x80000)
#define BF_ICOLL_CTRL_NO_NESTING_V(v)           ((BV_ICOLL_CTRL_NO_NESTING__##v << 19) & 0x80000)
#define BP_ICOLL_CTRL_ARM_RSE_MODE              18
#define BM_ICOLL_CTRL_ARM_RSE_MODE              0x40000
#define BF_ICOLL_CTRL_ARM_RSE_MODE(v)           (((v) << 18) & 0x40000)
#define BP_ICOLL_CTRL_FIQ_FINAL_ENABLE          17
#define BM_ICOLL_CTRL_FIQ_FINAL_ENABLE          0x20000
#define BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__DISABLE 0x0
#define BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__ENABLE  0x1
#define BF_ICOLL_CTRL_FIQ_FINAL_ENABLE(v)       (((v) << 17) & 0x20000)
#define BF_ICOLL_CTRL_FIQ_FINAL_ENABLE_V(v)     ((BV_ICOLL_CTRL_FIQ_FINAL_ENABLE__##v << 17) & 0x20000)
#define BP_ICOLL_CTRL_IRQ_FINAL_ENABLE          16
#define BM_ICOLL_CTRL_IRQ_FINAL_ENABLE          0x10000
#define BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__DISABLE 0x0
#define BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__ENABLE  0x1
#define BF_ICOLL_CTRL_IRQ_FINAL_ENABLE(v)       (((v) << 16) & 0x10000)
#define BF_ICOLL_CTRL_IRQ_FINAL_ENABLE_V(v)     ((BV_ICOLL_CTRL_IRQ_FINAL_ENABLE__##v << 16) & 0x10000)
#define BP_ICOLL_CTRL_RSRVD1                    0
#define BM_ICOLL_CTRL_RSRVD1                    0xffff
#define BF_ICOLL_CTRL_RSRVD1(v)                 (((v) << 0) & 0xffff)

/**
 * Register: HW_ICOLL_VBASE
 * Address: 0x40
 * SCT: yes
*/
#define HW_ICOLL_VBASE                  (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x40 + 0x0))
#define HW_ICOLL_VBASE_SET              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x40 + 0x4))
#define HW_ICOLL_VBASE_CLR              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x40 + 0x8))
#define HW_ICOLL_VBASE_TOG              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x40 + 0xc))
#define BP_ICOLL_VBASE_TABLE_ADDRESS    2
#define BM_ICOLL_VBASE_TABLE_ADDRESS    0xfffffffc
#define BF_ICOLL_VBASE_TABLE_ADDRESS(v) (((v) << 2) & 0xfffffffc)
#define BP_ICOLL_VBASE_RSRVD1           0
#define BM_ICOLL_VBASE_RSRVD1           0x3
#define BF_ICOLL_VBASE_RSRVD1(v)        (((v) << 0) & 0x3)

/**
 * Register: HW_ICOLL_STAT
 * Address: 0x70
 * SCT: no
*/
#define HW_ICOLL_STAT                   (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x70))
#define BP_ICOLL_STAT_RSRVD1            7
#define BM_ICOLL_STAT_RSRVD1            0xffffff80
#define BF_ICOLL_STAT_RSRVD1(v)         (((v) << 7) & 0xffffff80)
#define BP_ICOLL_STAT_VECTOR_NUMBER     0
#define BM_ICOLL_STAT_VECTOR_NUMBER     0x7f
#define BF_ICOLL_STAT_VECTOR_NUMBER(v)  (((v) << 0) & 0x7f)

/**
 * Register: HW_ICOLL_RAWn
 * Address: 0xa0+n*0x10
 * SCT: yes
*/
#define HW_ICOLL_RAWn(n)            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0xa0+(n)*0x10 + 0x0))
#define HW_ICOLL_RAWn_SET(n)        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0xa0+(n)*0x10 + 0x4))
#define HW_ICOLL_RAWn_CLR(n)        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0xa0+(n)*0x10 + 0x8))
#define HW_ICOLL_RAWn_TOG(n)        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0xa0+(n)*0x10 + 0xc))
#define BP_ICOLL_RAWn_RAW_IRQS      0
#define BM_ICOLL_RAWn_RAW_IRQS      0xffffffff
#define BF_ICOLL_RAWn_RAW_IRQS(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_INTERRUPTn
 * Address: 0x120+n*0x10
 * SCT: yes
*/
#define HW_ICOLL_INTERRUPTn(n)                          (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x120+(n)*0x10 + 0x0))
#define HW_ICOLL_INTERRUPTn_SET(n)                      (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x120+(n)*0x10 + 0x4))
#define HW_ICOLL_INTERRUPTn_CLR(n)                      (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x120+(n)*0x10 + 0x8))
#define HW_ICOLL_INTERRUPTn_TOG(n)                      (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x120+(n)*0x10 + 0xc))
#define BP_ICOLL_INTERRUPTn_RSRVD1                      5
#define BM_ICOLL_INTERRUPTn_RSRVD1                      0xffffffe0
#define BF_ICOLL_INTERRUPTn_RSRVD1(v)                   (((v) << 5) & 0xffffffe0)
#define BP_ICOLL_INTERRUPTn_ENFIQ                       4
#define BM_ICOLL_INTERRUPTn_ENFIQ                       0x10
#define BV_ICOLL_INTERRUPTn_ENFIQ__DISABLE              0x0
#define BV_ICOLL_INTERRUPTn_ENFIQ__ENABLE               0x1
#define BF_ICOLL_INTERRUPTn_ENFIQ(v)                    (((v) << 4) & 0x10)
#define BF_ICOLL_INTERRUPTn_ENFIQ_V(v)                  ((BV_ICOLL_INTERRUPTn_ENFIQ__##v << 4) & 0x10)
#define BP_ICOLL_INTERRUPTn_SOFTIRQ                     3
#define BM_ICOLL_INTERRUPTn_SOFTIRQ                     0x8
#define BV_ICOLL_INTERRUPTn_SOFTIRQ__NO_INTERRUPT       0x0
#define BV_ICOLL_INTERRUPTn_SOFTIRQ__FORCE_INTERRUPT    0x1
#define BF_ICOLL_INTERRUPTn_SOFTIRQ(v)                  (((v) << 3) & 0x8)
#define BF_ICOLL_INTERRUPTn_SOFTIRQ_V(v)                ((BV_ICOLL_INTERRUPTn_SOFTIRQ__##v << 3) & 0x8)
#define BP_ICOLL_INTERRUPTn_ENABLE                      2
#define BM_ICOLL_INTERRUPTn_ENABLE                      0x4
#define BV_ICOLL_INTERRUPTn_ENABLE__DISABLE             0x0
#define BV_ICOLL_INTERRUPTn_ENABLE__ENABLE              0x1
#define BF_ICOLL_INTERRUPTn_ENABLE(v)                   (((v) << 2) & 0x4)
#define BF_ICOLL_INTERRUPTn_ENABLE_V(v)                 ((BV_ICOLL_INTERRUPTn_ENABLE__##v << 2) & 0x4)
#define BP_ICOLL_INTERRUPTn_PRIORITY                    0
#define BM_ICOLL_INTERRUPTn_PRIORITY                    0x3
#define BV_ICOLL_INTERRUPTn_PRIORITY__LEVEL0            0x0
#define BV_ICOLL_INTERRUPTn_PRIORITY__LEVEL1            0x1
#define BV_ICOLL_INTERRUPTn_PRIORITY__LEVEL2            0x2
#define BV_ICOLL_INTERRUPTn_PRIORITY__LEVEL3            0x3
#define BF_ICOLL_INTERRUPTn_PRIORITY(v)                 (((v) << 0) & 0x3)
#define BF_ICOLL_INTERRUPTn_PRIORITY_V(v)               ((BV_ICOLL_INTERRUPTn_PRIORITY__##v << 0) & 0x3)

/**
 * Register: HW_ICOLL_DEBUG
 * Address: 0x1120
 * SCT: yes
*/
#define HW_ICOLL_DEBUG                              (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1120 + 0x0))
#define HW_ICOLL_DEBUG_SET                          (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1120 + 0x4))
#define HW_ICOLL_DEBUG_CLR                          (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1120 + 0x8))
#define HW_ICOLL_DEBUG_TOG                          (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1120 + 0xc))
#define BP_ICOLL_DEBUG_INSERVICE                    28
#define BM_ICOLL_DEBUG_INSERVICE                    0xf0000000
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL0            0x1
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL1            0x2
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL2            0x4
#define BV_ICOLL_DEBUG_INSERVICE__LEVEL3            0x8
#define BF_ICOLL_DEBUG_INSERVICE(v)                 (((v) << 28) & 0xf0000000)
#define BF_ICOLL_DEBUG_INSERVICE_V(v)               ((BV_ICOLL_DEBUG_INSERVICE__##v << 28) & 0xf0000000)
#define BP_ICOLL_DEBUG_LEVEL_REQUESTS               24
#define BM_ICOLL_DEBUG_LEVEL_REQUESTS               0xf000000
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL0       0x1
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL1       0x2
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL2       0x4
#define BV_ICOLL_DEBUG_LEVEL_REQUESTS__LEVEL3       0x8
#define BF_ICOLL_DEBUG_LEVEL_REQUESTS(v)            (((v) << 24) & 0xf000000)
#define BF_ICOLL_DEBUG_LEVEL_REQUESTS_V(v)          ((BV_ICOLL_DEBUG_LEVEL_REQUESTS__##v << 24) & 0xf000000)
#define BP_ICOLL_DEBUG_REQUESTS_BY_LEVEL            20
#define BM_ICOLL_DEBUG_REQUESTS_BY_LEVEL            0xf00000
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL0    0x1
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL1    0x2
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL2    0x4
#define BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__LEVEL3    0x8
#define BF_ICOLL_DEBUG_REQUESTS_BY_LEVEL(v)         (((v) << 20) & 0xf00000)
#define BF_ICOLL_DEBUG_REQUESTS_BY_LEVEL_V(v)       ((BV_ICOLL_DEBUG_REQUESTS_BY_LEVEL__##v << 20) & 0xf00000)
#define BP_ICOLL_DEBUG_RSRVD2                       18
#define BM_ICOLL_DEBUG_RSRVD2                       0xc0000
#define BF_ICOLL_DEBUG_RSRVD2(v)                    (((v) << 18) & 0xc0000)
#define BP_ICOLL_DEBUG_FIQ                          17
#define BM_ICOLL_DEBUG_FIQ                          0x20000
#define BV_ICOLL_DEBUG_FIQ__NO_FIQ_REQUESTED        0x0
#define BV_ICOLL_DEBUG_FIQ__FIQ_REQUESTED           0x1
#define BF_ICOLL_DEBUG_FIQ(v)                       (((v) << 17) & 0x20000)
#define BF_ICOLL_DEBUG_FIQ_V(v)                     ((BV_ICOLL_DEBUG_FIQ__##v << 17) & 0x20000)
#define BP_ICOLL_DEBUG_IRQ                          16
#define BM_ICOLL_DEBUG_IRQ                          0x10000
#define BV_ICOLL_DEBUG_IRQ__NO_IRQ_REQUESTED        0x0
#define BV_ICOLL_DEBUG_IRQ__IRQ_REQUESTED           0x1
#define BF_ICOLL_DEBUG_IRQ(v)                       (((v) << 16) & 0x10000)
#define BF_ICOLL_DEBUG_IRQ_V(v)                     ((BV_ICOLL_DEBUG_IRQ__##v << 16) & 0x10000)
#define BP_ICOLL_DEBUG_RSRVD1                       10
#define BM_ICOLL_DEBUG_RSRVD1                       0xfc00
#define BF_ICOLL_DEBUG_RSRVD1(v)                    (((v) << 10) & 0xfc00)
#define BP_ICOLL_DEBUG_VECTOR_FSM                   0
#define BM_ICOLL_DEBUG_VECTOR_FSM                   0x3ff
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_IDLE         0x0
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE1  0x1
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE2  0x2
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_PENDING      0x4
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE3  0x8
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE4  0x10
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING1 0x20
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING2 0x40
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_ISR_RUNNING3 0x80
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE5  0x100
#define BV_ICOLL_DEBUG_VECTOR_FSM__FSM_MULTICYCLE6  0x200
#define BF_ICOLL_DEBUG_VECTOR_FSM(v)                (((v) << 0) & 0x3ff)
#define BF_ICOLL_DEBUG_VECTOR_FSM_V(v)              ((BV_ICOLL_DEBUG_VECTOR_FSM__##v << 0) & 0x3ff)

/**
 * Register: HW_ICOLL_DBGREAD0
 * Address: 0x1130
 * SCT: yes
*/
#define HW_ICOLL_DBGREAD0           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1130 + 0x0))
#define HW_ICOLL_DBGREAD0_SET       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1130 + 0x4))
#define HW_ICOLL_DBGREAD0_CLR       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1130 + 0x8))
#define HW_ICOLL_DBGREAD0_TOG       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1130 + 0xc))
#define BP_ICOLL_DBGREAD0_VALUE     0
#define BM_ICOLL_DBGREAD0_VALUE     0xffffffff
#define BF_ICOLL_DBGREAD0_VALUE(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_DBGREAD1
 * Address: 0x1140
 * SCT: yes
*/
#define HW_ICOLL_DBGREAD1           (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1140 + 0x0))
#define HW_ICOLL_DBGREAD1_SET       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1140 + 0x4))
#define HW_ICOLL_DBGREAD1_CLR       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1140 + 0x8))
#define HW_ICOLL_DBGREAD1_TOG       (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1140 + 0xc))
#define BP_ICOLL_DBGREAD1_VALUE     0
#define BM_ICOLL_DBGREAD1_VALUE     0xffffffff
#define BF_ICOLL_DBGREAD1_VALUE(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_DBGFLAG
 * Address: 0x1150
 * SCT: yes
*/
#define HW_ICOLL_DBGFLAG            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1150 + 0x0))
#define HW_ICOLL_DBGFLAG_SET        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1150 + 0x4))
#define HW_ICOLL_DBGFLAG_CLR        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1150 + 0x8))
#define HW_ICOLL_DBGFLAG_TOG        (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1150 + 0xc))
#define BP_ICOLL_DBGFLAG_RSRVD1     16
#define BM_ICOLL_DBGFLAG_RSRVD1     0xffff0000
#define BF_ICOLL_DBGFLAG_RSRVD1(v)  (((v) << 16) & 0xffff0000)
#define BP_ICOLL_DBGFLAG_FLAG       0
#define BM_ICOLL_DBGFLAG_FLAG       0xffff
#define BF_ICOLL_DBGFLAG_FLAG(v)    (((v) << 0) & 0xffff)

/**
 * Register: HW_ICOLL_DBGREQUESTn
 * Address: 0x1160+n*0x10
 * SCT: yes
*/
#define HW_ICOLL_DBGREQUESTn(n)         (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1160+(n)*0x10 + 0x0))
#define HW_ICOLL_DBGREQUESTn_SET(n)     (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1160+(n)*0x10 + 0x4))
#define HW_ICOLL_DBGREQUESTn_CLR(n)     (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1160+(n)*0x10 + 0x8))
#define HW_ICOLL_DBGREQUESTn_TOG(n)     (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x1160+(n)*0x10 + 0xc))
#define BP_ICOLL_DBGREQUESTn_BITS       0
#define BM_ICOLL_DBGREQUESTn_BITS       0xffffffff
#define BF_ICOLL_DBGREQUESTn_BITS(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ICOLL_VERSION
 * Address: 0x11e0
 * SCT: no
*/
#define HW_ICOLL_VERSION            (*(volatile unsigned long *)(REGS_ICOLL_BASE + 0x11e0))
#define BP_ICOLL_VERSION_MAJOR      24
#define BM_ICOLL_VERSION_MAJOR      0xff000000
#define BF_ICOLL_VERSION_MAJOR(v)   (((v) << 24) & 0xff000000)
#define BP_ICOLL_VERSION_MINOR      16
#define BM_ICOLL_VERSION_MINOR      0xff0000
#define BF_ICOLL_VERSION_MINOR(v)   (((v) << 16) & 0xff0000)
#define BP_ICOLL_VERSION_STEP       0
#define BM_ICOLL_VERSION_STEP       0xffff
#define BF_ICOLL_VERSION_STEP(v)    (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__IMX233__ICOLL__H__ */
