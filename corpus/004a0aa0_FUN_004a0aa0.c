
void FUN_004a0aa0(int param_1,uint param_2)

{
  int local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [8];
  undefined4 local_18;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)local_58;
  if (DAT_0055e05c != 0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (10000 < param_1) {
      param_1 = 10000;
    }
    if (DAT_00563ec0 != (int *)0x0) {
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 50000;
      local_58[4] = 0x14;
      local_38[0] = -(uint)(param_2 != 0xffffffff) & param_2;
      local_40 = 0;
      local_3c = 0;
      local_38[1] = 0x34;
      local_38[2] = 3;
      local_38[3] = 0xffffffff;
      if (param_2 != 0xffffffff) {
        local_38[3] = param_2;
      }
      local_c = local_58 + 4;
      local_18 = 0;
      local_10 = 0;
      local_8 = 0x10;
      local_58[0] = param_1;
      local_58[5] = param_1;
      (**(code **)(*DAT_00563eac + 0x1c))(DAT_00563eac);
      (**(code **)(*DAT_00563ec0 + 0x18))(DAT_00563ec0,local_38,0x181);
      (**(code **)(*DAT_00563ec0 + 0x28))(DAT_00563ec0);
      (**(code **)(*DAT_00563eac + 0x58))(DAT_00563eac,0x10);
      (**(code **)(*DAT_00563ec0 + 0x1c))(DAT_00563ec0,1,0);
    }
  }
  return;
}

