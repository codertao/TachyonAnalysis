
void FUN_004691e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_c;
  undefined4 *local_4;
  
  local_c = DAT_00589720;
  FUN_0048e3d0(&local_4,DAT_00589720 * 0xe0,4,s_WINGMAN_LIST_0054a944,0xa100);
  puVar4 = local_4;
  if (local_4 != (undefined4 *)0x0) {
    puVar3 = DAT_00589724;
    iVar5 = DAT_00589720;
    puVar6 = puVar4;
    iVar1 = DAT_00589720;
    puVar2 = DAT_00589724;
    if (DAT_00589720 != 0) {
LAB_00469232:
      puVar2 = (undefined4 *)FUN_00469330();
      if (puVar2 != puVar3) goto code_r0x0046923b;
      puVar6 = puVar4 + 0x38;
      local_c = local_c + -1;
      for (iVar5 = 0x38; iVar1 = DAT_00589720, puVar2 = DAT_00589724, iVar5 != 0; iVar5 = iVar5 + -1
          ) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
joined_r0x00469272:
    while ((iVar1 != 0 && (local_c != 0))) {
      puVar3 = (undefined4 *)FUN_00469330();
      puVar4 = puVar6;
      if (puVar3 != puVar2) {
        puVar4 = puVar6 + 0x38;
        local_c = local_c + -1;
        puVar3 = puVar2;
        for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar6 = puVar4;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 0x38;
    }
    OurFreeMem(DAT_00589724);
    DAT_00589724 = local_4;
  }
  return;
code_r0x0046923b:
  iVar5 = iVar5 + -1;
  puVar3 = puVar3 + 0x38;
  iVar1 = DAT_00589720;
  puVar2 = DAT_00589724;
  if (iVar5 == 0) goto joined_r0x00469272;
  goto LAB_00469232;
}

