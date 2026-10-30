
void FUN_004360d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  puVar4 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      piVar1 = (int *)*puVar4;
      for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (*(short *)(iVar2 + 0x76) == 10) {
          FUN_00426200(iVar2);
        }
      }
      FUN_0048e0c0(param_1,param_2,param_3,piVar1);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x11;
    } while (uVar3 < DAT_005a5544);
  }
  return;
}

