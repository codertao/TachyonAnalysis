
void FUN_00416b60(ushort *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)&DAT_005b339c;
  puVar3 = param_1 + 1;
  if (*param_1 != 0) {
    do {
      *puVar2 = *(undefined4 *)puVar3;
      *(ushort *)(puVar2 + 1) = puVar3[2];
      uVar1 = uVar1 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 6);
      puVar3 = puVar3 + 3;
    } while (uVar1 < *param_1);
  }
  DAT_005b399c = (uint)*param_1;
  return;
}

