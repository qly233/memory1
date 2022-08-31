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
static const char *ng0 = "D:/zuchengyuanli/cunchuqi/cunchuqi.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {305419896U, 0U, 0U, 0U};
static unsigned int ng6[] = {2271560481U, 0U, 0U, 0U};
static unsigned int ng7[] = {4294967295U, 0U, 0U, 0U};
static unsigned int ng8[] = {69632U, 0U, 0U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t25[16];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);

LAB24:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB25:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t21 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t19 = (t0 + 1208U);
    t20 = *((char **)t19);

LAB14:    t19 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t19, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(33, ng0);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 2088);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t25, 64, t24, t28, t31, 2, 1, t33, 6, 2);
    memset(t34, 0, 8);
    t32 = (t34 + 4);
    t35 = (t25 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (t36 >> 0);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t40 & 255U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 255U);
    t42 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t42, t34, 0, 0, 8, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 2088);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t25, 64, t6, t19, t24, 2, 1, t27, 6, 2);
    memset(t4, 0, 8);
    t26 = (t4 + 4);
    t28 = (t25 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t28);
    t10 = (t9 >> 8);
    *((unsigned int *)t26) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 8, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2088);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t25, 64, t6, t19, t24, 2, 1, t27, 6, 2);
    memset(t4, 0, 8);
    t26 = (t4 + 4);
    t28 = (t25 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t28);
    t10 = (t9 >> 16);
    *((unsigned int *)t26) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 8, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 2088);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t25, 64, t6, t19, t24, 2, 1, t27, 6, 2);
    memset(t4, 0, 8);
    t26 = (t4 + 4);
    t28 = (t25 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (t7 >> 24);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t28);
    t10 = (t9 >> 24);
    *((unsigned int *)t26) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 8, 0LL);
    goto LAB23;

LAB26:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t34, t19, t24, 2, 1, t27, 6, 2);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    t28 = (t34 + 4);
    t8 = *((unsigned int *)t28);
    t44 = (!(t8));
    t45 = (t43 && t44);
    if (t45 == 1)
        goto LAB35;

LAB36:    goto LAB34;

LAB28:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t34, t19, t24, 2, 1, t27, 6, 2);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    t28 = (t34 + 4);
    t8 = *((unsigned int *)t28);
    t44 = (!(t8));
    t45 = (t43 && t44);
    if (t45 == 1)
        goto LAB37;

LAB38:    goto LAB34;

LAB30:    xsi_set_current_line(44, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t34, t19, t24, 2, 1, t27, 6, 2);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    t28 = (t34 + 4);
    t8 = *((unsigned int *)t28);
    t44 = (!(t8));
    t45 = (t43 && t44);
    if (t45 == 1)
        goto LAB39;

LAB40:    goto LAB34;

LAB32:    xsi_set_current_line(45, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t34, t19, t24, 2, 1, t27, 6, 2);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    t28 = (t34 + 4);
    t8 = *((unsigned int *)t28);
    t44 = (!(t8));
    t45 = (t43 && t44);
    if (t45 == 1)
        goto LAB41;

LAB42:    goto LAB34;

LAB35:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t34);
    t46 = (t9 - t10);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t34), t47, 0LL);
    goto LAB36;

LAB37:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t34);
    t46 = (t9 - t10);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t34), t47, 0LL);
    goto LAB38;

LAB39:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t34);
    t46 = (t9 - t10);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t34), t47, 0LL);
    goto LAB40;

LAB41:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t34);
    t46 = (t9 - t10);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t34), t47, 0LL);
    goto LAB42;

}


extern void work_m_00000000002320194686_1902101706_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002320194686_1902101706", "isim/test_isim_beh.exe.sim/work/m_00000000002320194686_1902101706.didat");
	xsi_register_executes(pe);
}
