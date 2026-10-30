
int FUN_0040a880(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  uVar4 = param_1[1];
  uVar1 = *param_1;
  uVar3 = 0;
  iVar5 = 0;
  local_4 = 0;
  if (uVar1 == 0) {
    return 0;
  }
  do {
    iVar2 = FUN_0040a620(param_2,uVar4,param_3,param_4,iVar5,1,uVar1);
    if (iVar2 != 0) {
      if (local_4 != 0) {
        *(int *)(local_4 + 0xe0) = iVar2;
      }
      local_4 = iVar2;
      if (iVar5 == 0) {
        *(int *)(iVar2 + 0xe8) = iVar2;
        iVar5 = iVar2;
      }
    }
    uVar1 = *param_1;
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + 0x80;
  } while (uVar3 < uVar1);
  return iVar5;
}

