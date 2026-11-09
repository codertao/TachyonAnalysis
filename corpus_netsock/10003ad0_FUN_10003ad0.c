
void __cdecl FUN_10003ad0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = 0x1000;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        free((void *)*puVar2);
      }
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  return;
}

