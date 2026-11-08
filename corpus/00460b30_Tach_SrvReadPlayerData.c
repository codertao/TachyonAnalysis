
void Tach_SrvReadPlayerData(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  DAT_0058b068 = param_1;
  DAT_0058b064 = iVar1;
  if ((*(byte *)((int)param_2 + 0x4b) & 1) != 0) {
    *(undefined4 *)(iVar1 + 0xa0) = param_2[0xf];
    *(undefined4 *)(iVar1 + 0xa4) = param_2[0x10];
    *(undefined4 *)(iVar1 + 0xa8) = param_2[0x11];
    *(undefined4 *)(iVar1 + 0x158) = *param_2;
    *(undefined4 *)(iVar1 + 0x15c) = param_2[1];
    *(undefined4 *)(iVar1 + 0x160) = param_2[2];
    *(uint *)(iVar1 + 0x164) = (uint)*(byte *)(param_2 + 0x12) << 0x11;
    *(uint *)(iVar1 + 0x168) = (uint)*(byte *)((int)param_2 + 0x49) << 0x11;
    *(uint *)(iVar1 + 0x16c) = (uint)*(byte *)((int)param_2 + 0x4a) << 0x11;
  }
  *(undefined4 *)(param_1 + 0x110) = param_2[3];
  *(undefined4 *)(param_1 + 0x114) = param_2[4];
  *(undefined4 *)(param_1 + 0x118) = param_2[5];
  *(undefined4 *)(param_1 + 0x11c) = param_2[6];
  FUN_00455a50(iVar1,param_2);
  *(undefined4 *)(iVar1 + 0xd4) = param_2[9];
  *(undefined4 *)(iVar1 + 0x128) = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x130) = param_2[0xb];
  *(char *)(iVar1 + 0xc1) = (char)((int)param_2[10] >> 3);
  if (param_2[0xd] != 0) {
    FUN_00460af0(param_2[0xd],param_2[0xe],*(undefined4 *)(iVar1 + 100));
  }
  return;
}

