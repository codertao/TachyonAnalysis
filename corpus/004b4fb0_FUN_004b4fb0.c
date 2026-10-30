
void FUN_004b4fb0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((DAT_00668f34 == 0) || (iVar1 = FUN_004b3bf0(param_1), iVar1 != 0)) {
    puVar3 = (undefined4 *)(*(int *)(param_2 + 8) + param_2);
    if ((code *)param_1[0x11] == (code *)0x0) {
      if ((*param_1 & 0x400) != 0) {
        FUN_004b27d0(param_1,0,puVar3,*(undefined4 *)(param_2 + 4));
      }
    }
    else {
      (*(code *)param_1[0x11])(param_1,puVar3,0,*(undefined4 *)(param_2 + 4));
    }
    FUN_004b3d30(param_1,puVar3);
    if ((*(byte *)(puVar3 + 4) & 0x84) == 0) {
      FUN_004b43b0(param_1,puVar3,*puVar3);
      FUN_004b4ed0(param_1,*puVar3);
    }
    FUN_004b3eb0(puVar3,param_1 + 10);
    uVar2 = 0;
    if (*(int *)(param_2 + 4) != 1) {
      do {
        puVar4 = puVar3 + 0xb;
        FUN_004b3f90(param_1,puVar4);
        if ((*(byte *)(puVar3 + 0xf) & 0x84) == 0) {
          FUN_004b47b0(param_1,puVar4);
          FUN_004b4ed0(param_1,*puVar4);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar4;
      } while (uVar2 < *(int *)(param_2 + 4) - 1U);
    }
  }
  return;
}

