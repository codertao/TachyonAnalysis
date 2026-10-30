
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00465150(int *param_1,int param_2)

{
  undefined1 local_80 [128];
  
  if (*param_1 != 0) {
    param_2 = param_2 + (uint)*(byte *)(*DAT_005b2770 + 4);
    str_sprintf(local_80,s_HAS_JAMMER__RANGE__2_2f__0054a478,
                (double)((float)(uint)param_1[1] * _DAT_0052e824));
    FUN_0048e970(local_80,DAT_005b2770,0x1c,param_2,0xff20ff,0xffff,0x10000,2);
    return param_2;
  }
  return param_2;
}

