
void FUN_0041bf50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined1 *)(iVar1 + 0xc2) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0xa0);
  uVar2 = Spx_ResolveDesName(param_2 + 0xa4);
  piVar3 = (int *)(iVar1 + 0x8c);
  Desc_CreateByType(uVar2,piVar3,0,0,0,0xffffffff);
  SrvSend_TeamShipDesc(uVar2,*(undefined4 *)(*piVar3 + 0x14));
  return;
}

