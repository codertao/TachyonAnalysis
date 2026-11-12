
/* sweep: guess */

void MpRules_OnPlayerJoin(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00590238 + 0x5c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x5c))(param_1,param_2);
  }
  (**(code **)(DAT_00590238 + 0x10))(param_1);
  if (*(char *)(param_2 + 0x44) == '\0') {
    *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  }
  else {
    uVar1 = Portrait_Load(param_2 + 0x44,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c8) = uVar1;
    SrvSend_PlayerPortrait(param_2 + 0x44,uVar1);
  }
  MpRules_CopyLoadout(param_1,param_2);
  MpRules_ClearLoadout(param_1);
  if (*(code **)(DAT_00590238 + 0x34) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x34))(param_1);
  }
  return;
}

