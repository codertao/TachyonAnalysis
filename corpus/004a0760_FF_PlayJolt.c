
/* sweep: guess */

void FF_PlayJolt(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piStack_80;
  int *piStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  uint local_60;
  int local_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int **local_34;
  undefined4 local_30;
  int **local_2c;
  int local_18;
  uint *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  if (((DAT_0055e05c != 0) && (DAT_00563eb4 != (int *)0x0)) && (DAT_00563eb8 != (int *)0x0)) {
    if ((int)param_1 < -10000) {
      param_1 = 0xffffd8f0;
    }
    else if (10000 < (int)param_1) {
      param_1 = 10000;
    }
    if (param_2 < -10000) {
      param_2 = -10000;
    }
    else if (10000 < param_2) {
      param_2 = 10000;
    }
    local_60 = param_1;
    local_5c = param_2;
    if ((param_1 == 0) && (param_2 == 0)) {
      iVar2 = 0;
      piVar4 = (int *)0x0;
    }
    else {
      piStack_70 = (int *)0x4a0802;
      iVar2 = __ftol();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (10000 < iVar2) {
        iVar2 = 10000;
      }
      piVar4 = (int *)(iVar2 >> 1);
    }
    uVar1 = param_3;
    if (param_3 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = param_3 >> 1;
    }
    local_34 = (int **)0x34;
    local_30 = 0x12;
    local_2c = (int **)0xffffffff;
    if (param_3 != 0xffffffff) {
      local_2c = (int **)uVar3;
    }
    local_10 = &local_60;
    local_4 = &param_1;
    local_18 = 2;
    local_c = 0;
    local_8 = 4;
    piStack_70 = DAT_00563eac;
    uStack_74 = 0x4a0883;
    param_1 = iVar2;
    (**(code **)(*DAT_00563eac + 0x1c))();
    puStack_78 = &uStack_38;
    uStack_74 = 0x141;
    piStack_7c = DAT_00563eb4;
    piStack_80 = (int *)0x4a0898;
    (**(code **)(*DAT_00563eb4 + 0x18))();
    piStack_80 = DAT_00563eb4;
    (**(code **)(*DAT_00563eb4 + 0x28))();
    (**(code **)(*DAT_00563eac + 0x58))(DAT_00563eac,0x10);
    (**(code **)(*DAT_00563eb4 + 0x1c))(DAT_00563eb4,1,0);
    if (local_18 != 0) {
      piStack_7c = (int *)0x0;
      puStack_78 = (undefined4 *)0x0;
      local_60 = -(uint)(uVar1 != 0xffffffff) & uVar1;
      uStack_74 = 50000;
      piStack_70 = (int *)0x14;
      local_5c = 0x34;
      uStack_58 = 3;
      uStack_54 = 0xffffffff;
      if (uVar1 != 0xffffffff) {
        uStack_54 = uVar1;
      }
      local_34 = &piStack_70;
      local_2c = &piStack_80;
      uStack_40 = 0;
      uStack_38 = 0;
      local_30 = 0x10;
      piStack_80 = piVar4;
      (**(code **)(*DAT_00563eac + 0x1c))(DAT_00563eac);
      (**(code **)(*DAT_00563eb8 + 0x18))(DAT_00563eb8,&local_60,0x181);
      (**(code **)(*DAT_00563eb8 + 0x28))(DAT_00563eb8);
      (**(code **)(*DAT_00563eac + 0x58))(DAT_00563eac,0x10);
      (**(code **)(*DAT_00563eb8 + 0x1c))(DAT_00563eb8,1,0);
    }
  }
  return;
}

