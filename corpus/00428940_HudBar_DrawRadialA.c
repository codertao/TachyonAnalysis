
/* sweep */

void HudBar_DrawRadialA(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  
  iVar1 = *param_1;
  DAT_005a64c8 = iVar1;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20000000;
  DAT_004e4a28 = *(uint *)(iVar1 + 0xc) & 0xefffffff;
  *(uint *)(iVar1 + 0xc) = DAT_004e4a28;
  DAT_005a64c0 = DAT_004e4a28;
  Billboard_Init(&local_44);
  lVar3 = (longlong)(param_1[1] + DAT_005b0140) * (longlong)DAT_005a67e4;
  local_44 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)(param_1[2] + DAT_005b0144) * (longlong)DAT_005a67e4;
  local_40 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  local_14 = 0xffff00;
  local_3c = (param_2 << 8) / param_3 + -0x80;
  *(uint *)(DAT_005a64c8 + 4) = (param_4 << 8 | param_5) << 8 | param_6;
  DAT_004e4a2c = *(undefined4 *)(DAT_005a64c8 + 4);
  *(undefined4 *)(iVar1 + 4) = DAT_004e4a2c;
  local_18 = *(undefined4 *)(iVar1 + 0x20);
  local_38 = param_1[3];
  local_34 = param_1[4];
  local_30 = param_1[5] + local_38;
  local_2c = param_1[6] + local_34;
  local_8 = 2;
  local_1c = iVar1;
  Billboard_ClampUV(&local_44);
  if ((DAT_005a64c0 & 0x20000) != 0) {
    uVar2 = *(uint *)(DAT_005a64c8 + 4);
    DAT_004e4a34 = ((uVar2 & 0xfe0000) >> 8 | (uVar2 & 0xfe00) << 8 | (uVar2 & 0xfe) << 0x18) >> 8;
  }
  Gfx_Lock(1);
  Billboard_Draw(&local_44,DAT_005a680c);
  return;
}

