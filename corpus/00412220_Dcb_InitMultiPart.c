
/* init multi-part entity DCB: install think 0x4111b0, action +0x80=0x411b70 */

void Dcb_InitMultiPart(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0xc0) = 5;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(code **)(param_1 + 0x80) = FUN_00411b70;
  *(int *)(param_1 + 0xd8) = param_2;
  *(int *)(param_2 + 0x28) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(code **)(param_1 + 0x68) = Dcb_Think_MultiPart;
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar3 = FUN_00434850(param_1);
  Nav_InitRoute(param_1,param_2,param_1 + 0xec,param_3,param_2 + 0x48,uVar3);
  FUN_00434960(param_1,param_2);
  FUN_00434a30(param_1,param_1 + 0xec,*(undefined4 *)(param_2 + 0x54),1);
  if (((*(byte *)(param_2 + 0x24) & 0x10) == 0) && (*(int *)(param_1 + 0xfc) != 0)) {
    *(code **)(param_1 + 0x134) = CapShip_SteerHook;
  }
  else {
    *(code **)(param_1 + 0x134) = CapShip_DriftHook;
  }
  uVar1 = FUN_00434530(param_2);
  *(undefined1 *)(param_1 + 0x106) = uVar1;
  Power_Init(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,1,0,1);
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) << 2;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) << 2;
  uVar3 = FUN_00434850(param_1,*(undefined4 *)(param_2 + 0x5c),param_1 + 0x144);
  FUN_00434630(uVar3);
  *(undefined4 *)(param_1 + 0x138) = 0x118;
  bVar2 = FUN_004344f0(param_2);
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar2;
  return;
}

