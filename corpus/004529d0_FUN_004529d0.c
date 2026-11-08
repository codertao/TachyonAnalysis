
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004529d0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (GLBL_SOME_CONTEXT != 0) {
    iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
    iVar2 = *(int *)(GLBL_SOME_CONTEXT + 0x110);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x8c) != 0)) {
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x78);
      if (pcVar3 != (code *)0x0) {
        uVar4 = (*pcVar3)(iVar1,0xe,iVar2);
        *(undefined4 *)(GLBL_SOME_CONTEXT + 0x110) = uVar4;
      }
      if (*(int *)(GLBL_SOME_CONTEXT + 0x110) != iVar2) {
        _DAT_005b2130 = 0;
        DAT_005b2138 = DAT_005b213c;
        _DAT_005b2140 = 0;
        FUN_00466590(1,9,0,0xff);
      }
    }
  }
  return;
}

