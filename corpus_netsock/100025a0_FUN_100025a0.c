
undefined4 * FUN_100025a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar1 = DAT_10007698;
  if (0 < DAT_1000769c) {
    do {
      if (*(short *)((int)puVar1 + 0x12) == 0) {
        return puVar1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = (undefined4 *)((int)puVar1 + 0x4a);
    } while (iVar3 < DAT_1000769c);
  }
  puVar2 = realloc(DAT_10007698,(DAT_1000769c * 0x25 + 0x4a0) * 2);
  puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((int)puVar2 + DAT_1000769c * 0x4a);
    puVar4 = puVar1;
    DAT_10007698 = puVar2;
    for (iVar3 = 0x250; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_1000769c = DAT_1000769c + 0x20;
  }
  return puVar1;
}

