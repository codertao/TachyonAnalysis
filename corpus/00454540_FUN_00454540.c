
void FUN_00454540(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  piVar2 = (int *)(*(int *)(param_1 + 0xdc) + 0x164);
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x638) != 0) {
    do {
      if (*piVar2 != 0) {
        piVar2[2] = piVar2[1];
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar3 < *(uint *)(iVar1 + 0x638));
  }
  return;
}

