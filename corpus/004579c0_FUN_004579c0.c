
void FUN_004579c0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = &DAT_005897f0;
  if (DAT_0058af70 != 0) {
    do {
      iVar1 = FUN_0045d080(param_1,puVar2 + 5);
      if (iVar1 != 0) {
        Ent_LeaveQuadrant(param_1,puVar2);
        FUN_00445720(param_1,puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x2f;
    } while (uVar3 < DAT_0058af70);
  }
  return;
}

