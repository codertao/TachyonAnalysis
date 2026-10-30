
void FUN_00494db0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  FUN_0040f380(param_1 + 0x34,param_2,&local_24);
  FUN_0040f3f0(param_3,&local_24);
  piVar1 = (int *)(param_1 + 0x4c);
  DAT_005656bc = local_24 * 0x80 + *(int *)(param_1 + 0x4c) * -0x80 >> 7;
  iVar3 = param_5;
  if ((DAT_005656bc <= param_5) && (iVar3 = DAT_005656bc, DAT_005656bc < -param_5)) {
    iVar3 = -param_5;
  }
  *piVar1 = *piVar1 + iVar3;
  DAT_005656c0 = local_20 * 0x80 + *(int *)(param_1 + 0x50) * -0x80 >> 7;
  iVar3 = param_5;
  if ((param_5 < DAT_005656c0) || (iVar4 = DAT_005656c0, iVar3 = -param_5, DAT_005656c0 < -param_5))
  {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  puVar2 = (undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x54) = local_1c;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_4;
  FUN_004b1bb0(local_18,piVar1);
  FUN_004b24d0(puVar2,puVar2);
  return;
}

