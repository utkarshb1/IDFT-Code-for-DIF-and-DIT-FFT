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
static const char *ng0 = "C:/Users/Utkarsh/Documents/ISE/dif_ifft_8_point/tb_dif_ifft.vhd";



static void work_a_3671711236_2372691052_p_0(char *t0)
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

LAB0:    t1 = (t0 + 1344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 1.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 2.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 2U, 2U, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 3.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 4U, 2U, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 4.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 6U, 2U, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 5.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 8U, 2U, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 6.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 10U, 2U, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 7.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 12U, 2U, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    *((double *)t3) = 8.0000000000000000;
    t4 = (t2 + 8U);
    *((double *)t4) = 0.00000000000000000;
    t5 = (t0 + 1576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 14U, 2U, 0LL);
    xsi_set_current_line(26, ng0);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_3671711236_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3671711236_2372691052_p_0};
	xsi_register_didat("work_a_3671711236_2372691052", "isim/tb_isim_beh.exe.sim/work/a_3671711236_2372691052.didat");
	xsi_register_executes(pe);
}
