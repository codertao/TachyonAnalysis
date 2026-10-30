
void FUN_0040d990(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004580c0(param_2);
  iVar2 = FUN_0040cf70(uVar1);
  if (iVar2 == 0) {
    FUN_0048e380(param_1,0x10);
    return;
  }
  *param_1 = *(undefined4 *)(iVar2 + 0x1c);
  param_1[1] = *(undefined4 *)(iVar2 + 0x20);
  param_1[2] = *(undefined4 *)(iVar2 + 0x24);
  param_1[3] = *(undefined4 *)(iVar2 + 0x28);
  return;
}

