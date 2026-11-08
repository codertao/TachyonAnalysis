
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430840(void)

{
  int iVar1;
  code *pcVar2;
  
  if ((((DAT_005a6730 != 0) && (*(int *)(GLBL_SOME_CONTEXT + 0x90) != 0)) &&
      (iVar1 = *(int *)(*(int *)(GLBL_SOME_CONTEXT + 0x90) + 0xf4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x8c) != 0)) {
    DAT_005653e4 = 0x100;
    DAT_005653e8 = 0x100;
    DAT_005653f8 = DAT_0058b068;
    _DAT_00565404 = 0;
    DAT_005653dc = 0;
    DAT_005653e0 = 250000;
    DAT_005653ec = 0;
    DAT_005653f4 = DAT_0058b064;
    DAT_005653d8 = 0;
    DAT_00565400 = 0x10000;
    DAT_0056540c = *(undefined4 *)(DAT_0058b064 + 100);
    DAT_005653f0 = iVar1;
    if (*(code **)(iVar1 + 0x80) != (code *)0x0) {
      (**(code **)(iVar1 + 0x80))(iVar1);
      return;
    }
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x34);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar1,3,0);
    }
  }
  return;
}

