
/* starbase-part message switch; 0x1f = faction level changed */

undefined4 Starbase_OnMessage(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 1:
    FUN_0040b550(param_1,param_3);
    return 0;
  case 3:
    FUN_0040a0a0(param_1);
    return 0;
  case 8:
    FUN_0040b4f0(param_1,param_3);
    return 0;
  case 9:
    return *(undefined4 *)(param_1 + 0xd8);
  case 0x10:
    Ent_TouchRefill(param_1,param_3);
    return 0;
  case 0x13:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 0x20;
    SrvSend_ThreatList(*(undefined4 *)(param_1 + 0x78),0x13,*(undefined4 *)(param_1 + 100));
    return 0;
  case 0x14:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xdf;
    SrvSend_ThreatList(*(undefined4 *)(param_1 + 0x78),0x14,*(undefined4 *)(param_1 + 100));
    return 0;
  case 0x1f:
    if ((*(int *)(param_1 + 0xe8) == 0) || (*(int *)(param_1 + 0xe8) == param_1)) {
      Starbase_OnFactionLevel(param_1,param_3);
    }
  }
  return 0;
}

