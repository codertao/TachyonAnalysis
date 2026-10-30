
void FUN_004b6460(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_8c;
  undefined1 local_88;
  int local_84;
  undefined1 local_80 [128];
  
  if (0 < param_3) {
    local_84 = param_3;
    puVar3 = (undefined4 *)(param_1 + 0x108 + param_4 * 4);
    do {
      if (param_4 < *(int *)(param_1 + 0x104)) {
        str_sprintf(local_80,&DAT_00536768,*puVar3);
      }
      else {
        local_80[0] = DAT_00562b14;
      }
      local_8c = 0xb0b0b0b0;
      local_88 = 0;
      if (param_4 == param_6) {
        local_8c = 0xb0b0b010;
      }
      if (0 < DAT_00669220) {
        piVar1 = &DAT_00669260;
        iVar2 = DAT_00669220;
        do {
          uVar4 = local_8c;
          if (param_4 == *piVar1) {
            local_8c._3_1_ = SUB41(uVar4,3);
            local_8c._0_3_ = CONCAT12(0x3e,CONCAT11(0x42,(undefined1)local_8c));
          }
          piVar1 = piVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      str_sprintf(&DAT_006692e0,&DAT_0055efac,0x4c,local_80);
      FUN_004b68a0(&local_8c,0,param_2,7);
      if (param_4 == param_5) {
        uVar4 = 0x70;
      }
      else {
        uVar4 = 7;
      }
      FUN_004b68a0(&DAT_006692e0,4,param_2,uVar4);
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
      local_84 = local_84 + -1;
      param_2 = param_2 + 1;
    } while (local_84 != 0);
  }
  return;
}

