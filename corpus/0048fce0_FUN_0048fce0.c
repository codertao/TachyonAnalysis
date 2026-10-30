
undefined4 FUN_0048fce0(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    return 0;
  }
  puVar1 = (uint *)FUN_0048fb00(param_1,param_2);
  if (*puVar1 <= param_3) {
    return 0;
  }
  *param_4 = puVar1[param_3 + 2];
  return 1;
}

