
void FUN_004a05f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_3c;
  int local_38 [8];
  undefined4 local_18;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  if ((DAT_0055e05c != 0) && (DAT_00563eb0 != (int *)0x0)) {
    if (param_1 < -10000) {
      param_1 = -10000;
    }
    else if (10000 < param_1) {
      param_1 = 10000;
    }
    iVar1 = param_1;
    if (param_2 < -10000) {
      param_2 = -10000;
    }
    else if (10000 < param_2) {
      param_2 = 10000;
    }
    iVar2 = param_2;
    if ((param_1 != DAT_00563ec4) || (param_2 != DAT_00563ec8)) {
      local_3c = param_1;
      local_38[0] = param_2;
      if ((param_1 == 0) && (param_2 == 0)) {
        param_1 = 0;
      }
      else {
        param_1 = __ftol();
        if (param_1 < 0) {
          param_1 = 0;
        }
        else if (10000 < param_1) {
          param_1 = 10000;
        }
      }
      local_10 = &local_3c;
      local_4 = &param_1;
      local_38[1] = 0x34;
      local_38[2] = 0x12;
      local_38[3] = 0xffffffff;
      local_18 = 2;
      local_c = 0;
      local_8 = 4;
      (**(code **)(*DAT_00563eac + 0x1c))(DAT_00563eac);
      (**(code **)(*DAT_00563eb0 + 0x18))(DAT_00563eb0,local_38,0x141);
      (**(code **)(*DAT_00563eb0 + 0x28))(DAT_00563eb0);
      (**(code **)(*DAT_00563eac + 0x58))(DAT_00563eac,0x10);
      (**(code **)(*DAT_00563eb0 + 0x1c))(DAT_00563eb0,1,0);
      DAT_00563ec4 = iVar1;
      DAT_00563ec8 = iVar2;
    }
  }
  return;
}

