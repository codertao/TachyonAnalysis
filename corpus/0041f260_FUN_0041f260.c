
void FUN_0041f260(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(int *)(iVar1 + 0x28) == 0) {
    iVar4 = *(int *)(iVar1 + 0x24);
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x18);
      iVar3 = *(int *)(iVar4 + 0x1c);
      if (((*(byte *)(iVar2 + 0x58) & 1) != 0) && (*(int *)(iVar2 + 0x6c) == 0)) {
        FUN_0041f1c0(iVar1,param_1);
        return;
      }
      uVar5 = FUN_004a0d50(0);
      FUN_0044eaa0();
      iVar6 = FUN_0049ead0(iVar3 + 0x10,0x10000);
      *(uint *)(iVar1 + 0x28) =
           ((iVar6 * 0x19 & 0x7fffffffU) >> 0xf) + 0x19 + *(int *)(iVar4 + 0x20);
      FUN_0044eab0();
      FUN_004a0d50(uVar5);
      if (*(int *)(iVar2 + 0x6c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x6c) + 0x78);
      }
      SrvSend_PlayNamedSound(iVar2 + 0x10,iVar3,0,uVar5,param_1);
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar4 + 0x2c);
      FUN_004b7930(iVar4,iVar1 + 0x24);
      FUN_004b78a0(iVar1,iVar4);
    }
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x28) + -1;
    *(int *)(iVar1 + 0x28) = iVar4;
    if ((iVar4 == 0) && (*(int *)(iVar1 + 0x2c) != 0)) {
      local_14 = *(undefined4 *)(iVar1 + 0x30);
      local_c = *(undefined4 *)(iVar1 + 0x34);
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      local_18 = 7;
      local_10 = 0;
      Mission_PostEvent(&local_18,param_1);
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      return;
    }
  }
  return;
}

