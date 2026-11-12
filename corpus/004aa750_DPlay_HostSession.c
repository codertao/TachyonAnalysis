
/* refine: slot 0x40 */

undefined4
DPlay_HostSession(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0055e3e0 != 0) {
    puVar2 = local_50;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_38 = DAT_0052e8c0;
    local_2c = DAT_0052e8cc;
    local_50[0] = 0x50;
    local_34 = DAT_0052e8c4;
    local_30 = DAT_0052e8c8;
    local_50[1] = 0x40;
    if (DAT_0055e448 == 0) {
      local_50[1] = 0x1040;
    }
    local_10 = param_5;
    local_28 = param_3;
    local_4 = param_8;
    local_20 = param_1;
    local_c = param_6;
    local_8 = param_7;
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      local_1c = param_4;
    }
    iVar1 = (**(code **)(*DAT_005b9af4 + 0x60))(DAT_005b9af4,local_50,2);
    if (iVar1 != 0) {
      if (iVar1 == -0x7788fff6) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788fffb) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788f830) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788f7f4) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788f808) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788f826) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788fea2) {
        return 1;
      }
      if (iVar1 == -0x7788f81c) {
        return 0xffffffff;
      }
      if (iVar1 == -0x7788ff88) {
        return 0xffffffff;
      }
      if ((iVar1 != -0x7ff8ffa9) && (iVar1 == -0x7788feac)) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    DAT_0055e428 = 1;
    puVar2 = &DAT_005b9c20;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_005b9c20 = 0x28;
    local_c = (**(code **)(*DAT_005b9af4 + 0x38))(DAT_005b9af4,&DAT_005b9c20,0);
    (**(code **)(*DAT_005b9af4 + 0x38))(DAT_005b9af4,&DAT_005b9c20,1);
  }
  return 0;
}

