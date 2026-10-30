
int FUN_004015e0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x56c);
  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x56c) =
       *(undefined4 *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8);
  iVar4 = FUN_0048b450(param_1,*(int *)(param_1 + 0x8c) + 0x56c,&param_1);
  if (iVar4 != 0) {
    if (((byte)param_1 & 5) == 5) {
      *(undefined1 *)(iVar3 + 0x324) = 2;
    }
    else {
      *(undefined1 *)(iVar3 + 0x324) = 1;
    }
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x8c) + 0x56c) = uVar1;
  if ((iVar4 != 0) && (pcVar2 = *(code **)(*(int *)(iVar4 + 0x8c) + 0x34), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar4,0x15,iVar3);
  }
  return iVar4;
}

