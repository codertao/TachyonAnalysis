
/* read file to buffer; magic 'CBIN' -> Cbin_ParseBinary else Cbin_ParseText; ctx[0x1a]=isBinary */

undefined4 Cbin_LoadFile(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = Fs_Exists(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = Cbin_ReadWhole(param_1,0);
  param_2[1] = iVar2;
  if (iVar2 == -1) {
    param_2[1] = 0;
    return 0;
  }
  puVar3 = (undefined4 *)FUN_0049c5c0(iVar2 + 2);
  iVar2 = param_2[1];
  *param_2 = (int)puVar3;
  for (uVar5 = iVar2 + 2U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = iVar2 + 2U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined1 *)(param_2[1] + *param_2) = 10;
  FUN_0049c840(*param_2,param_1);
  if (*param_2 == 0) {
    param_2[1] = 0;
    return 0;
  }
  iVar2 = Cbin_ReadWhole(param_1,*param_2);
  if (iVar2 == 0) {
    param_2[1] = 0;
    return 0;
  }
  piVar1 = (int *)*param_2;
  param_2[5] = 0;
  param_2[4] = 1;
  param_2[2] = (int)piVar1;
  param_2[3] = (int)piVar1;
  if (*piVar1 == 0x4e494243) {
    param_2[0x1a] = 1;
    uVar4 = Cbin_ParseBinary(param_2);
    return uVar4;
  }
  param_2[0x1a] = 0;
  uVar4 = Cbin_ParseText(param_2);
  return uVar4;
}

