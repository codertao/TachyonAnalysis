
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b23a0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  DAT_00668fc8 = param_1;
  if (param_1 != 0) {
    if ((param_3 != -1) || (param_2 != -1)) {
      DAT_00668fb4 = param_2;
      _DAT_00668fc0 = param_2 - param_3;
      DAT_00668fbc = (_DAT_00668fc0 >> 1) + param_3;
      DAT_00668fb8 = param_3;
      local_8 = (undefined4)
                (longlong)ROUND((_DAT_0052ef5c / (float)_DAT_00668fc0) * (float)_DAT_0052e538);
      DAT_00668fc4 = local_8;
    }
  }
  return;
}

