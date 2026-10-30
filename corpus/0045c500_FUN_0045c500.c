
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c500(int param_1,undefined4 param_2,undefined4 param_3,code *param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  if ((param_1 != 0) && (DAT_0058f1c0 == 0)) {
    _DAT_0058f218 = 0;
    DAT_0058f210 = 0;
    DAT_0058f214 = 0;
    DAT_0058f1d0 = 0;
    DAT_0058f1c0 = param_1;
    _DAT_0058f1c4 = param_5;
    FUN_004251a0();
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_00430150(&PTR_DAT_0053e890);
      *(undefined4 *)(param_1 + 0x144) = param_2;
      FUN_0045c450(param_1);
      FUN_0045c480(param_1);
      FUN_0045c4b0(param_1);
      FUN_004107b0(0);
      *(undefined4 *)(param_1 + 0x138) = param_3;
      *(code **)(param_1 + 0x13c) = param_4;
      *(undefined4 *)(param_1 + 0x140) = param_6;
      return;
    }
    DAT_0058f1c0 = 0;
    (*param_4)();
  }
  return;
}

