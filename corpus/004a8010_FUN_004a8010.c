
int FUN_004a8010(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  local_4 = 0;
  if (param_2[3] == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)mem_GetMemEx_probably_alloc(param_1 * 0x38,4,0,s_A3D_OBJECT_ARRAY_0055e6d4)
  ;
  param_2[2] = puVar1;
  for (uVar2 = param_1 * 0x38 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  piVar4 = (int *)param_2[2];
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      iVar3 = _AIL_allocate_3D_sample_handle_4(*param_2);
      *piVar4 = iVar3;
      if (iVar3 == 0) break;
      piVar4 = piVar4 + 0xe;
      local_4 = local_4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  param_2[1] = local_4;
  return local_4;
}

