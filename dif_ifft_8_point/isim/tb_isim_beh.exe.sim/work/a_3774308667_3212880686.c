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
static const char *ng0 = "C:/Users/Utkarsh/Documents/ISE/dif_ifft_8_point/dif_ifft_8pt.vhd";
extern char *WORK_P_0329781743;

char *work_p_0329781743_sub_1012631639_1189196580(char *, char *, char *);


static void work_a_3774308667_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4096);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 0U, 2U, 0LL);

LAB2:    t16 = (t0 + 3996);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4132);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 2U, 2U, 0LL);

LAB2:    t16 = (t0 + 4004);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (6 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4168);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 4U, 2U, 0LL);

LAB2:    t16 = (t0 + 4012);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (5 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4204);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 6U, 2U, 0LL);

LAB2:    t16 = (t0 + 4020);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (4 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4240);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 8U, 2U, 0LL);

LAB2:    t16 = (t0 + 4028);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (3 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4276);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 10U, 2U, 0LL);

LAB2:    t16 = (t0 + 4036);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (2 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4312);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 12U, 2U, 0LL);

LAB2:    t16 = (t0 + 4044);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3774308667_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (16U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.12500000000000000;
    t9 = (t7 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t10 = work_p_0329781743_sub_1012631639_1189196580(WORK_P_0329781743, t1, t7);
    t11 = (t0 + 4348);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 16U);
    xsi_driver_first_trans_delta(t11, 14U, 2U, 0LL);

LAB2:    t16 = (t0 + 4052);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3774308667_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3774308667_3212880686_p_0,(void *)work_a_3774308667_3212880686_p_1,(void *)work_a_3774308667_3212880686_p_2,(void *)work_a_3774308667_3212880686_p_3,(void *)work_a_3774308667_3212880686_p_4,(void *)work_a_3774308667_3212880686_p_5,(void *)work_a_3774308667_3212880686_p_6,(void *)work_a_3774308667_3212880686_p_7};
	xsi_register_didat("work_a_3774308667_3212880686", "isim/tb_isim_beh.exe.sim/work/a_3774308667_3212880686.didat");
	xsi_register_executes(pe);
}
