
undefined4 FUN_00495b00(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x78), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(iVar1,0x14,0);
    if (iVar3 != 0) {
      return *(undefined4 *)(iVar1 + 0xe8);
    }
  }
  return 0;
}

