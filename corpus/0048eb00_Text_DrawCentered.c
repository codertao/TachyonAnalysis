
/* sweep: guess */

undefined4 Text_DrawCentered(int param_1,int param_2,int param_3,byte param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint local_2c [4];
  int local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    puVar4 = local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if ((param_4 & 0x80) == 0) {
      local_1c = local_1c + 0x2000;
    }
    else {
      local_1c = local_1c + 0x40000000;
    }
    lVar1 = (longlong)(int)((uint)(DAT_005a67a8 << 0x10) / 0x280) * (longlong)param_3;
    local_2c[0] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)((uint)(DAT_005a67ac << 0x10) / 0x1e0) * (longlong)param_3;
    local_2c[1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    bVar5 = (param_4 & 1) != 0;
    if ((param_4 & 2) != 0) {
      bVar5 = bVar5 | 2;
      local_10 = 0x10101;
      local_c = 2;
      local_8 = 2;
    }
    if ((param_4 & 4) == 0) {
      if ((param_4 & 8) != 0) {
        Text_MeasureWidth(param_1,param_2,bVar5,local_2c);
      }
    }
    else {
      Text_MeasureWidth(param_1,param_2,bVar5,local_2c);
    }
    if (((param_4 & 0x10) != 0) || ((param_4 & 0x20) != 0)) {
      Text_GlyphHeight(param_1,param_2,bVar5,local_2c);
    }
    uVar2 = Text_MeasureWidth(param_1,param_2,bVar5,local_2c);
    return uVar2;
  }
  return 0;
}

