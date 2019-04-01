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
static const char *ng0 = "C:/Users/Utkarsh/Documents/ISE/dit_ifft_8_point/butterfly.vhd";
extern char *WORK_P_0821248058;

char *work_p_0821248058_sub_1012631639_2960903726(char *, char *, char *);
char *work_p_0821248058_sub_1750307451_2960903726(char *, char *, char *);
char *work_p_0821248058_sub_1772262749_2960903726(char *, char *, char *);


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
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(15, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t1 = work_p_0821248058_sub_1012631639_2960903726(WORK_P_0821248058, t3, t4);
    t5 = work_p_0821248058_sub_1750307451_2960903726(WORK_P_0821248058, t2, t1);
    t6 = (t0 + 2012);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 1960);
    *((int *)t11) = 1;

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
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(16, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t1 = work_p_0821248058_sub_1012631639_2960903726(WORK_P_0821248058, t3, t4);
    t5 = work_p_0821248058_sub_1772262749_2960903726(WORK_P_0821248058, t2, t1);
    t6 = (t0 + 2048);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 1968);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3956407695_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3956407695_3212880686_p_0,(void *)work_a_3956407695_3212880686_p_1};
	xsi_register_didat("work_a_3956407695_3212880686", "isim/tb_isim_beh.exe.sim/work/a_3956407695_3212880686.didat");
	xsi_register_executes(pe);
}
