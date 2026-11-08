
void FUN_0045f690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_14;
  undefined2 uStack_12;
  ushort local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00435390(*(int *)(param_1 + 0xf0) + 0x38);
  if (iVar1 != 0) {
    FUN_00457bc0(iVar1);
    iVar2 = FUN_004263a0(param_1);
    if (iVar2 != 0) {
      FUN_004271a0(param_1);
    }
    Ent_LeaveQuadrant(DAT_0058b064,param_2);
    if (DAT_005653a0 != 0) {
      FUN_00457ac0(DAT_005653a0,param_2);
    }
    Ent_SetQuadrant(DAT_0058b064,DAT_0058b068,iVar1);
    uVar3 = FUN_00427010(*(int *)(param_2 + 0x3c) + 0xc,iVar1,&local_c,&local_14,
                         *(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(DAT_0058b068 + 0x1cc) = uVar3;
    iVar2 = DAT_0058b064;
    *(undefined4 *)(DAT_0058b064 + 0x34) = local_c;
    *(undefined4 *)(iVar2 + 0x38) = local_8;
    *(undefined4 *)(iVar2 + 0x3c) = local_4;
    FUN_0045f460(DAT_0058b068,iVar1);
    SrvSend_EnterQuadrant(&local_c,&local_14,iVar1,0,1,0,DAT_0058b068);
    *(int *)(DAT_0058b064 + 0x4c) = CONCAT22(uStack_12,local_14) << 0x10;
    *(int *)(DAT_0058b064 + 0x50) = CONCAT22(local_10,uStack_12) << 0x10;
    *(uint *)(DAT_0058b064 + 0x54) = (uint)local_10 << 0x10;
    clr_bytes(DAT_0058b064 + 0xa0,0xc);
    if (DAT_005653a0 != 0) {
      *(int *)(DAT_005653a0 + 0x4c) = CONCAT22(uStack_12,local_14) << 0x10;
      *(int *)(DAT_005653a0 + 0x50) = CONCAT22(local_10,uStack_12) << 0x10;
      *(uint *)(DAT_005653a0 + 0x54) = (uint)local_10 << 0x10;
      clr_bytes(DAT_005653a0 + 0xa0,0xc);
      FUN_00499170(DAT_005653a0,&local_c,*(undefined4 *)(DAT_005653a0 + 0xf8));
      iVar1 = DAT_005653a0;
      *(undefined4 *)(DAT_005653a0 + 0x34) = local_c;
      *(undefined4 *)(iVar1 + 0x38) = local_8;
      *(undefined4 *)(iVar1 + 0x3c) = local_4;
    }
    *(undefined4 *)(DAT_0058b068 + 0x13c) = 1;
  }
  return;
}

