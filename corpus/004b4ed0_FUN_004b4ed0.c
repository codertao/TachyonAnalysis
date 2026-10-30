
void FUN_004b4ed0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_004b49d0(param_1,param_2);
  (*DAT_0055ed18)(param_1,param_2);
  puVar3 = *(undefined4 **)(param_2 + 0x58);
  uVar2 = 0;
  if (*(int *)(param_2 + 0x54) != 0) {
    do {
      iVar1 = FUN_004b4e90(puVar3[2]);
      FUN_004b4cf0(param_1,param_2,puVar3,iVar1);
      FUN_004ba6a0(*(int *)(iVar1 + 0x10) + 0x28,*(undefined4 *)(param_2 + 0x40),0x30,puVar3[3],
                   *puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 6;
    } while (uVar2 < *(uint *)(param_2 + 0x54));
  }
  return;
}

