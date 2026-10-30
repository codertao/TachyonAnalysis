
void FUN_004355a0(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  puVar4 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      for (iVar1 = *(int *)*puVar4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if ((*(int *)(iVar1 + 0x8c) != 0) &&
           (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c), pcVar2 != (code *)0x0)) {
          (*pcVar2)(iVar1,4,0);
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x11;
    } while (uVar3 < DAT_005a5544);
  }
  return;
}

