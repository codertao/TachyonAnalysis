
void FUN_00415b20(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004b8fb0();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    *(undefined1 *)(puVar1 + 4) = param_2;
    *(undefined1 *)((int)puVar1 + 0x11) = param_3;
    *puVar1 = DAT_005653cc;
    puVar1[1] = DAT_005653d0;
    puVar1[2] = DAT_005653d4;
    *(short *)((int)puVar1 + 0x12) = (short)(DAT_00565400 >> 2);
    FUN_004b8fd0(puVar1,0x2003,0x14,4);
  }
  return;
}

