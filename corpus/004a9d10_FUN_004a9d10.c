
undefined4 * FUN_004a9d10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  puVar1 = DAT_0055e3e8;
  if (param_1 != (int *)0x0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = puVar1 + 4;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

