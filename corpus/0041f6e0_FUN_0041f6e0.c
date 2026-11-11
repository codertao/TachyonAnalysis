
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f6e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7,char *param_8,undefined4 param_9,int param_10,byte param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_5c [7];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 1;
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x120) != 0)) {
    puVar4 = &DAT_005b21a0;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = (undefined4 *)(param_1 + 0x120);
    puVar7 = &DAT_005b22c0;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    local_18 = (int)(((longlong)(param_3 + param_5) * (longlong)DAT_005a67ac & 0xffffffffU) / 0x1e0)
    ;
    uVar3 = (uint)(DAT_005a67a8 * param_2) / 0x280;
    local_20 = (uint)(DAT_005a67ac * param_3) / 0x1e0;
    local_1c = (uint)((param_2 + param_4) * DAT_005a67a8) / 0x280;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      local_c = 0;
    }
    DAT_005a64c8 = param_1 + 0x120;
    DAT_005a64c4 = 0xffffffff;
    DAT_005a64c0 = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 0x124) = param_6;
    local_24 = uVar3;
    if (local_c != 0) {
      puVar5 = local_5c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_5c[3] = 0xffff;
      if ((param_11 & 0x80) != 0) {
        local_5c[4] = local_5c[4] + 0x40000000;
      }
      if ((param_11 & 0x40) == 0) {
        local_5c[0] = (uint)(DAT_005a67a8 << 0x10) / 0x280;
        local_5c[1] = (uint)(DAT_005a67ac << 0x10) / 0x1e0;
      }
      else {
        local_5c[0] = 0x10000;
        local_5c[1] = 0x10000;
      }
      local_5c[0] = (uint)((longlong)(int)local_5c[0] * (longlong)param_10) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)local_5c[0] * (longlong)param_10) >> 0x20) <<
                    0x10;
      local_5c[1] = (uint)((longlong)(int)local_5c[1] * (longlong)param_10) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)local_5c[1] * (longlong)param_10) >> 0x20) <<
                    0x10;
      if ((param_11 & 1) != 0) {
        local_8 = 1;
      }
      if ((param_11 & 2) != 0) {
        local_8 = local_8 | 2;
        local_40 = 0x10101;
        local_3c = 2;
        local_38 = 2;
      }
      uVar1 = Text_GlyphHeight(param_8,param_7,0,local_5c);
      local_34 = (DAT_005b2278 >> 1) + uVar3 + (uVar1 >> 1);
      local_10 = local_20;
      iVar6 = local_34 + (DAT_005b2288 >> 1);
      iVar2 = Text_MeasureWidth(param_8,param_7,0,local_5c);
      iVar6 = iVar6 + iVar2 + (uVar1 >> 1);
      local_30 = local_20 + (DAT_005b229c >> 1) + (uVar1 >> 2);
      local_28 = local_30 + (DAT_005b229c >> 1);
      iVar2 = Text_GlyphHeight(param_8,param_7,0,local_5c);
      local_28 = (uVar1 >> 3) + local_28 + iVar2;
      DAT_005b22b0 = *(int *)(param_1 + 0x98) + uVar3;
      DAT_005b22b4 = *(int *)(param_1 + 0x9c) + local_10;
      _DAT_005b22bc = local_28 - DAT_005b22b4;
      _DAT_005b22b8 = (iVar6 - *(int *)(param_1 + 0x98)) - DAT_005b22b0;
      local_20 = local_28;
      FUN_0041f680(param_1 + 0x110,DAT_005b22b0,DAT_005b22b4,_DAT_005b22b8,_DAT_005b22bc);
      _DAT_005b2234 = local_10;
      DAT_005b2238 = *(int *)(param_1 + 0x98);
      DAT_005b223c = *(int *)(param_1 + 0x9c);
      _DAT_005b2230 = uVar3;
      FUN_0041f680(param_1 + 0x90,uVar3,local_10,DAT_005b2238,DAT_005b223c);
      DAT_005b2240 = iVar6 - *(int *)(param_1 + 0xa8);
      _DAT_005b2244 = local_10;
      DAT_005b2248 = *(undefined4 *)(param_1 + 0xa8);
      DAT_005b224c = *(int *)(param_1 + 0xac);
      FUN_0041f680(param_1 + 0xa0,DAT_005b2240,local_10,DAT_005b2248,DAT_005b224c);
      DAT_005b2290 = DAT_005b2238 + uVar3;
      _DAT_005b2294 = local_10;
      _DAT_005b2298 = DAT_005b2240 - DAT_005b2290;
      DAT_005b229c = *(int *)(param_1 + 0xfc);
      FUN_0041f680(param_1 + 0xf0,DAT_005b2290,local_10,_DAT_005b2298,DAT_005b229c);
      DAT_005b2274 = DAT_005b223c + local_10;
      _DAT_005b227c = local_28 - DAT_005b2274;
      DAT_005b2278 = *(int *)(param_1 + 0xd8);
      _DAT_005b2270 = uVar3;
      FUN_0041f680(param_1 + 0xd0,uVar3,DAT_005b2274,DAT_005b2278,_DAT_005b227c);
      _DAT_005b2280 = iVar6 - *(int *)(param_1 + 0xe8);
      _DAT_005b2284 = DAT_005b224c + local_10;
      DAT_005b2288 = *(int *)(param_1 + 0xe8);
      _DAT_005b228c = local_28 - _DAT_005b2284;
      FUN_0041f680(param_1 + 0xe0,_DAT_005b2280,_DAT_005b2284,DAT_005b2288,_DAT_005b228c);
      FUN_004ae1a0(param_8,param_7,local_34,local_30,param_9,local_8,local_5c);
      puVar4 = &DAT_005b21a0;
      for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puVar4 = (undefined4 *)(param_1 + 0x120);
      puVar7 = &DAT_005b22c0;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      DAT_005a64c8 = param_1 + 0x120;
      DAT_005a64c4 = 0xffffffff;
      DAT_005a64c0 = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_1 + 0x124) = param_6;
    }
    uVar1 = local_20;
    uVar3 = local_24;
    local_30 = *(int *)(param_1 + 0xc);
    DAT_005b2220 = *(int *)(param_1 + 8) + local_24;
    DAT_005b2224 = local_30 + local_20;
    _DAT_005b2228 = (local_1c - DAT_005b2220) - *(int *)(param_1 + 8);
    _DAT_005b222c = (local_18 - DAT_005b2224) - local_30;
    FUN_0041f680(param_1 + 0x80,DAT_005b2220,DAT_005b2224,_DAT_005b2228,_DAT_005b222c);
    DAT_005b21a8 = *(int *)(param_1 + 8);
    DAT_005b21ac = *(int *)(param_1 + 0xc);
    DAT_005b21a0 = uVar3;
    DAT_005b21a4 = uVar1;
    FUN_0041f680(param_1,uVar3,uVar1,DAT_005b21a8,DAT_005b21ac);
    DAT_005b21b0 = local_1c - *(int *)(param_1 + 0x18);
    DAT_005b21b8 = *(undefined4 *)(param_1 + 0x18);
    DAT_005b21bc = *(int *)(param_1 + 0x1c);
    _DAT_005b21b4 = uVar1;
    FUN_0041f680(param_1 + 0x10,DAT_005b21b0,uVar1,DAT_005b21b8,DAT_005b21bc);
    DAT_005b21c4 = local_18 - *(int *)(param_1 + 0x2c);
    DAT_005b21c8 = *(int *)(param_1 + 0x28);
    _DAT_005b21cc = *(undefined4 *)(param_1 + 0x2c);
    _DAT_005b21c0 = uVar3;
    FUN_0041f680(param_1 + 0x20,uVar3,DAT_005b21c4,DAT_005b21c8,_DAT_005b21cc);
    DAT_005b21d0 = local_1c - *(int *)(param_1 + 0x38);
    DAT_005b21d4 = local_18 - *(int *)(param_1 + 0x3c);
    DAT_005b21d8 = *(undefined4 *)(param_1 + 0x38);
    _DAT_005b21dc = *(undefined4 *)(param_1 + 0x3c);
    FUN_0041f680(param_1 + 0x30,DAT_005b21d0,DAT_005b21d4,DAT_005b21d8,_DAT_005b21dc);
    DAT_005b2200 = DAT_005b21a8 + uVar3;
    _DAT_005b2208 = DAT_005b21b0 - DAT_005b2200;
    _DAT_005b220c = *(undefined4 *)(param_1 + 0x6c);
    _DAT_005b2204 = uVar1;
    FUN_0041f680(param_1 + 0x60,DAT_005b2200,uVar1,_DAT_005b2208,_DAT_005b220c);
    DAT_005b2210 = DAT_005b21c8 + uVar3;
    DAT_005b2214 = local_18 - *(int *)(param_1 + 0x7c);
    _DAT_005b2218 = DAT_005b21d0 - DAT_005b2210;
    _DAT_005b221c = *(undefined4 *)(param_1 + 0x7c);
    FUN_0041f680(param_1 + 0x70,DAT_005b2210,DAT_005b2214,_DAT_005b2218,_DAT_005b221c);
    DAT_005b21e4 = DAT_005b21ac + uVar1;
    _DAT_005b21ec = DAT_005b21c4 - DAT_005b21e4;
    _DAT_005b21e8 = *(undefined4 *)(param_1 + 0x48);
    _DAT_005b21e0 = uVar3;
    FUN_0041f680(param_1 + 0x40,uVar3,DAT_005b21e4,_DAT_005b21e8,_DAT_005b21ec);
    _DAT_005b21f0 = local_1c - *(int *)(param_1 + 0x58);
    _DAT_005b21f4 = uVar1 + DAT_005b21bc;
    _DAT_005b21fc = DAT_005b21d4 - _DAT_005b21f4;
    _DAT_005b21f8 = *(undefined4 *)(param_1 + 0x58);
    FUN_0041f680(param_1 + 0x50,_DAT_005b21f0,_DAT_005b21f4,_DAT_005b21f8,_DAT_005b21fc);
  }
  return;
}

