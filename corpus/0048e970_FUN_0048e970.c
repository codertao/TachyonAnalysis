
void FUN_0048e970(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,byte param_8)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_30 [4];
  int local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  puVar5 = local_30;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_30[3] = param_6;
  if ((param_8 & 0x80) == 0) {
    local_20 = local_20 + 0x2000;
  }
  else {
    local_20 = local_20 + 0x40000000;
  }
  if ((param_8 & 0x40) == 0) {
    param_3 = (DAT_005a67a8 * param_3) / 0x280;
    param_4 = (DAT_005a67ac * param_4) / 0x1e0;
  }
  lVar1 = (longlong)(int)((uint)(DAT_005a67a8 << 0x10) / 0x280) * (longlong)param_7;
  local_30[0] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)((uint)(DAT_005a67ac << 0x10) / 0x1e0) * (longlong)param_7;
  local_30[1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar4 = 1;
  if ((param_8 & 1) == 0) {
    uVar4 = local_8;
  }
  if ((param_8 & 2) != 0) {
    uVar4 = uVar4 | 2;
    local_14 = 0x10101;
    local_10 = 2;
    local_c = 2;
  }
  if ((param_8 & 4) == 0) {
    if ((param_8 & 8) != 0) {
      uVar2 = Text_MeasureWidth(param_1,param_2,uVar4,local_30);
      goto LAB_0048ea96;
    }
  }
  else {
    uVar2 = Text_MeasureWidth(param_1,param_2,uVar4,local_30);
    uVar2 = uVar2 >> 1;
LAB_0048ea96:
    param_3 = param_3 - uVar2;
  }
  if ((param_8 & 0x10) == 0) {
    if ((param_8 & 0x20) == 0) goto LAB_0048ead3;
    uVar2 = Text_GlyphHeight(param_1,param_2,uVar4,local_30);
  }
  else {
    uVar2 = Text_GlyphHeight(param_1,param_2,uVar4,local_30);
    uVar2 = uVar2 >> 1;
  }
  param_4 = param_4 - uVar2;
LAB_0048ead3:
  FUN_004ae1a0(param_1,param_2,param_3,param_4,param_5,uVar4,local_30);
  return;
}

