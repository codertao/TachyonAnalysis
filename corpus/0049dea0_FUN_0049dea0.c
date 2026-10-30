
void FUN_0049dea0(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  param_1[1] = param_1[1] + (int)param_1;
  iVar1 = param_1[3];
  piVar3 = param_1;
  if (iVar1 != 0) {
    do {
      piVar3 = piVar3 + 4;
      uVar5 = uVar5 + 1;
      *piVar3 = (int)param_1 + *piVar3 + (iVar1 + 1) * 0x10;
    } while (uVar5 < (uint)param_1[3]);
  }
  puVar2 = (uint *)param_1[1];
  uVar5 = 0;
  puVar4 = puVar2 + 1;
  if (*puVar2 != 0) {
    do {
      uVar5 = uVar5 + 1;
      *puVar4 = (int)puVar2 + *puVar4 + 4;
      puVar4 = puVar4 + 2;
    } while (uVar5 < *puVar2);
  }
  return;
}

