
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)param_1 = 10;
  *(undefined1 *)((int)param_1 + 1) = 5;
  *(undefined1 *)((int)param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 3) = 8;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0xc;
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x12) = 10;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(short *)(param_1 + 2) = (short)_DAT_00603100 + -1;
  *(short *)((int)param_1 + 10) = (short)DAT_00603104 + -1;
  *(undefined2 *)((int)param_1 + 0x42) = DAT_00603100;
  return;
}

