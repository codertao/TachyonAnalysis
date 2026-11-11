
void FUN_004552a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DcbPool_Alloc(&g_PoolPlayer,1,param_1);
  *(int *)(param_2 + 200) = iVar1;
  *(code **)(iVar1 + 0x68) = TachSrv_PlayerThink;
  *(code **)(iVar1 + 0x80) = TachSrv_DamagePlayer;
  *(undefined4 *)(iVar1 + 0xb8) = 0x20000;
  *(undefined4 *)(iVar1 + 0xd0) = 1;
  *(undefined1 *)(iVar1 + 0xc3) = 0;
  *(undefined1 *)(iVar1 + 0xc0) = 5;
  *(undefined4 *)(iVar1 + 0x10c) = *(undefined4 *)(param_2 + 8);
  *(int *)(*(int *)(param_2 + 200) + 0xdc) = param_2;
  if (*(code **)(g_ActiveRules + 0x20) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x20))(param_2,param_3);
  }
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x290);
  *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(*(int *)(iVar1 + 0x8c) + 0x294);
  uVar2 = Systems_ToPowerUpgradeFlags(*(undefined4 *)(param_2 + 0x158));
  Power_Init(iVar1 + 0x11c,*(int *)(iVar1 + 0x8c) + 0xd0,1,uVar2,*(undefined4 *)(iVar1 + 0xfc));
  FUN_004986a0(iVar1 + 0x150);
  return;
}

