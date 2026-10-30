
void FUN_00414f10(int param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_004b8fb0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
    iVar3 = 6;
    *(short *)(puVar1 + 1) = (short)param_1;
    puVar2 = (undefined2 *)((int)puVar1 + 6);
    if (param_1 != 0) {
      iVar3 = param_1 * 4 + 6;
      do {
        *puVar2 = *param_2;
        puVar2[1] = param_2[1];
        param_2 = param_2 + 2;
        puVar2 = puVar2 + 2;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_004b8fd0(puVar1,0x2028,iVar3,0x800);
  }
  return;
}

