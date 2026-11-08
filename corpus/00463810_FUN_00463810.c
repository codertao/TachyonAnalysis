
void FUN_00463810(uint param_1,undefined4 param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_004b1cb0(param_2);
  if (*(uint *)(iVar1 + 0x38) <= param_1) {
    clr_bytes(param_3,0xc);
    return;
  }
  puVar2 = (uint *)(*(int *)(iVar1 + 0x50) + param_1 * 0x10);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  *param_3 = (uint)((longlong)(int)*param_3 * (longlong)param_4) >> 0x10 |
             (int)((ulonglong)((longlong)(int)*param_3 * (longlong)param_4) >> 0x20) << 0x10;
  param_3[1] = (uint)((longlong)(int)param_3[1] * (longlong)param_4) >> 0x10 |
               (int)((ulonglong)((longlong)(int)param_3[1] * (longlong)param_4) >> 0x20) << 0x10;
  param_3[2] = (uint)((longlong)(int)param_3[2] * (longlong)param_4) >> 0x10 |
               (int)((ulonglong)((longlong)(int)param_3[2] * (longlong)param_4) >> 0x20) << 0x10;
  return;
}

