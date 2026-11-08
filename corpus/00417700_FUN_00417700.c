
void FUN_00417700(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_005b9038 != (uint *)0x0) {
    OurFreeMem(DAT_005b9038);
  }
  DAT_005b9034 = *(uint *)(param_1 + 4);
  FUN_0048e3a0(&DAT_005b9038,DAT_005b9034 << 4,4,s_CLIENT_TECH_DATA_00534304,0xcccc);
  uVar3 = 0;
  pbVar1 = (byte *)(param_1 + 8);
  puVar2 = DAT_005b9038;
  if (DAT_005b9034 != 0) {
    do {
      *puVar2 = (uint)*pbVar1;
      puVar2[1] = (uint)pbVar1[1];
      uVar3 = uVar3 + 1;
      puVar2[2] = (uint)pbVar1[2];
      pbVar1 = pbVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (uVar3 < DAT_005b9034);
  }
  return;
}

