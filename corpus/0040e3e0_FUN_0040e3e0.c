
void FUN_0040e3e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  iVar1 = FUN_0040e340(*(undefined4 *)(param_2 + 0x40));
  *(char *)(*(int *)(param_1 + 200) + 0xc2) = (char)iVar1;
  *(int *)(param_1 + 0x140) = iVar1;
  iVar2 = FUN_004580c0(s_GALSPAN_00533548);
  if (iVar1 != iVar2) {
    param_2 = param_2 + 0x20;
  }
  uVar3 = Spx_ResolveDesName(param_2);
  Desc_CreateByType(uVar3,*(int *)(param_1 + 200) + 0x8c,0,0,0,0xffffffff);
  SrvSend_TeamShipDesc(uVar3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 200) + 0x8c) + 0x14));
  return;
}

