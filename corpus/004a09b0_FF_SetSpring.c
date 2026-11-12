
/* sweep: guess */

void FF_SetSpring(int param_1)

{
  int local_44 [11];
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  if ((DAT_0055e05c != 0) && (DAT_00563ebc != (int *)0x0)) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (10000 < param_1) {
      param_1 = 10000;
    }
    if (param_1 != DAT_00563ecc) {
      local_4 = local_44;
      local_44[1] = 0;
      local_44[2] = 0;
      local_44[3] = 50000;
      local_44[4] = 0x34;
      local_44[5] = 3;
      local_44[6] = 0xffffffff;
      local_18 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0x10;
      local_44[0] = param_1;
      (**(code **)(*DAT_00563eac + 0x1c))(DAT_00563eac);
      (**(code **)(*DAT_00563ebc + 0x18))(DAT_00563ebc,local_44 + 3,0x101);
      (**(code **)(*DAT_00563ebc + 0x28))(DAT_00563ebc);
      (**(code **)(*DAT_00563eac + 0x58))(DAT_00563eac,0x10);
      (**(code **)(*DAT_00563ebc + 0x1c))(DAT_00563ebc,1,0);
      DAT_00563ecc = param_1;
    }
  }
  return;
}

