
void FUN_00494450(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  if ((((iVar1 != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0xf4), iVar2 != 0)) &&
      (*(int *)(iVar1 + 0x8c) != 0)) &&
     (pcVar3 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x34), pcVar3 != (code *)0x0)) {
    (*pcVar3)(iVar1,0x12,iVar2);
  }
  SrvSend_EntityDestroyed(param_1 + 0x34,0,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
  SrvSend_MineRemoved(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  FUN_0041b8c0(param_1);
  return;
}

