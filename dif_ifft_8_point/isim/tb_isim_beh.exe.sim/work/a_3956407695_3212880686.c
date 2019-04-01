/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Utkarsh/Documents/ISE/dif_ifft_8_point/butterfly.vhd";
extern char *WORK_P_0329781743;

char *work_p_0329781743_sub_1012631639_1189196580(char *, char *, char *);
char *work_p_0329781743_sub_1750307451_1189196580(char *, char *, char *);
char *work_p_0329781743_sub_1772262749_1189196580(char *, char *, char *);


static void work_a_3956407695_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(16, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = work_p_0329781743_sub_1750307451_1189196580(WORK_P_0329781743, t2, t3);
    t4 = (t0 + 2256);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB2:    t9 = (t0 + 2196);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3956407695_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(17, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = work_p_0329781743_sub_1772262749_1189196580(WORK_P_0329781743, t2, t3);
    t4 = (t0 + 2292);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);

LAB2:    t9 = (t0 + 2204);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3956407695_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(18, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t1 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t2, t3);
    t4 = (t0 + 2328);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB2:    t9 = (t0 + 2212);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3956407695_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3956407695_3212880686_p_0,(void *)work_a_3956407695_3212880686_p_1,(void *)work_a_3956407695_3212880686_p_2};
	xsi_register_didat("work_a_3956407695_3212880686", "isim/tb_isim_beh.exe.sim/work/a_3956407695_3212880686.didat");
	xsi_register_executes(pe);
}
