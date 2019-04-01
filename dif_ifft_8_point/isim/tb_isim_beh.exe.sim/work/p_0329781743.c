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



char *work_p_0329781743_sub_1750307451_1189196580(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    unsigned int t19;
    char *t20;
    double t21;
    double t22;
    char *t23;
    char *t24;
    unsigned int t25;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 1672);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 0U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = (0 + 0U);
    t20 = (t3 + t19);
    t21 = *((double *)t20);
    t22 = (t18 + t21);
    t23 = (t6 + 36U);
    t24 = *((char **)t23);
    t25 = (0 + 0U);
    t23 = (t24 + t25);
    *((double *)t23) = t22;
    t16 = (0 + 8U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t19 = (0 + 8U);
    t8 = (t3 + t19);
    t21 = *((double *)t8);
    t22 = (t18 + t21);
    t10 = (t6 + 36U);
    t11 = *((char **)t10);
    t25 = (0 + 8U);
    t10 = (t11 + t25);
    *((double *)t10) = t22;
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}

char *work_p_0329781743_sub_1772262749_1189196580(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    unsigned int t19;
    char *t20;
    double t21;
    double t22;
    char *t23;
    char *t24;
    unsigned int t25;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 1672);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 0U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = (0 + 0U);
    t20 = (t3 + t19);
    t21 = *((double *)t20);
    t22 = (t18 - t21);
    t23 = (t6 + 36U);
    t24 = *((char **)t23);
    t25 = (0 + 0U);
    t23 = (t24 + t25);
    *((double *)t23) = t22;
    t16 = (0 + 8U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t19 = (0 + 8U);
    t8 = (t3 + t19);
    t21 = *((double *)t8);
    t22 = (t18 - t21);
    t10 = (t6 + 36U);
    t11 = *((char **)t10);
    t25 = (0 + 8U);
    t10 = (t11 + t25);
    *((double *)t10) = t22;
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}

char *work_p_0329781743_sub_1012631639_1189196580(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    unsigned int t19;
    char *t20;
    double t21;
    double t22;
    unsigned int t23;
    char *t24;
    double t25;
    unsigned int t26;
    char *t27;
    double t28;
    double t29;
    double t30;
    char *t31;
    char *t32;
    unsigned int t33;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 1672);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 0U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = (0 + 0U);
    t20 = (t3 + t19);
    t21 = *((double *)t20);
    t22 = (t18 * t21);
    t23 = (0 + 8U);
    t24 = (t2 + t23);
    t25 = *((double *)t24);
    t26 = (0 + 8U);
    t27 = (t3 + t26);
    t28 = *((double *)t27);
    t29 = (t25 * t28);
    t30 = (t22 - t29);
    t31 = (t6 + 36U);
    t32 = *((char **)t31);
    t33 = (0 + 0U);
    t31 = (t32 + t33);
    *((double *)t31) = t30;
    t16 = (0 + 0U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t19 = (0 + 8U);
    t8 = (t3 + t19);
    t21 = *((double *)t8);
    t22 = (t18 * t21);
    t23 = (0 + 8U);
    t10 = (t2 + t23);
    t25 = *((double *)t10);
    t26 = (0 + 0U);
    t11 = (t3 + t26);
    t28 = *((double *)t11);
    t29 = (t25 * t28);
    t30 = (t22 + t29);
    t17 = (t6 + 36U);
    t20 = *((char **)t17);
    t33 = (0 + 8U);
    t17 = (t20 + t33);
    *((double *)t17) = t30;
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}


extern void work_p_0329781743_init()
{
	static char *se[] = {(void *)work_p_0329781743_sub_1750307451_1189196580,(void *)work_p_0329781743_sub_1772262749_1189196580,(void *)work_p_0329781743_sub_1012631639_1189196580};
	xsi_register_didat("work_p_0329781743", "isim/tb_isim_beh.exe.sim/work/p_0329781743.didat");
	xsi_register_subprogram_executes(se);
}
