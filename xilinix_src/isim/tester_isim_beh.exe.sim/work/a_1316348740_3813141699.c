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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ben/Desktop/PicoBlaze/PicoBlaze/PicoBlaze.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1316348740_3813141699_p_0(char *t0)
{
    char t13[16];
    char t14[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t15;
    unsigned char t16;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 8080);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t9 = (0 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t9 = (1 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 13304);
    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t2 = *((unsigned char *)t5);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t14 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 5;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (5 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t4 = xsi_base_array_concat(t4, t13, t6, (char)97, t1, t14, (char)99, t2, (char)101);
    t8 = (t0 + 2152U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t17, t18, (char)97, t4, t13, (char)99, t16, (char)101);
    t10 = (6U + 1U);
    t11 = (t10 + 1U);
    t19 = (8U != t11);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 8272);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 8U);
    xsi_driver_first_trans_fast(t20);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t11, 0);
    goto LAB6;

}

static void work_a_1316348740_3813141699_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 2912U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 3112U);
    t4 = *((char **)t3);
    t3 = (t0 + 8336);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_1316348740_3813141699_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4512U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 4712U);
    t4 = *((char **)t3);
    t3 = (t0 + 8400);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 8U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB3;

}


extern void work_a_1316348740_3813141699_init()
{
	static char *pe[] = {(void *)work_a_1316348740_3813141699_p_0,(void *)work_a_1316348740_3813141699_p_1,(void *)work_a_1316348740_3813141699_p_2};
	xsi_register_didat("work_a_1316348740_3813141699", "isim/tester_isim_beh.exe.sim/work/a_1316348740_3813141699.didat");
	xsi_register_executes(pe);
}
