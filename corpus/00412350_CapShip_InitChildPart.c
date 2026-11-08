
/* parts with flags & 0x91e get hp (+0xbc, default 100000) and set root +0x13c bits; TYPE 9 counted
   in root +0x140 */

void CapShip_InitChildPart(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  iVar1 = *(int *)(param_1 + 0xe4);
  *(undefined1 *)(param_1 + 0xc0) = 4;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(code **)(param_1 + 0x80) = FUN_00411c80;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  *(code **)(param_1 + 0x68) = FUN_00410d90;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(int *)(param_1 + 0xdc) = param_3;
  if ((*(uint *)(iVar1 + 0x34) & 0x91e) != 0) {
    *(code **)(param_1 + 0x80) = CapPart_OnDamage;
    if (*(int *)(iVar1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 100000;
    }
    else {
      *(int *)(param_1 + 0xbc) = *(int *)(iVar1 + 0x5c);
    }
    if ((param_3 != 0) &&
       (*(uint *)(param_3 + 0x13c) = *(uint *)(param_3 + 0x13c) | *(uint *)(iVar1 + 0x34) & 0x118,
       (*(uint *)(*(int *)(param_1 + 0xe4) + 0x34) & 0x100) != 0)) {
      *(int *)(param_3 + 0x140) = *(int *)(param_3 + 0x140) + 1;
    }
  }
  return;
}

