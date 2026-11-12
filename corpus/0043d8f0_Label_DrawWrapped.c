
/* WARNING: Removing unreachable block (ram,0x0043da4c) */
/* WARNING: Removing unreachable block (ram,0x0043daa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Label_DrawWrapped(int param_1,int param_2,undefined2 param_3,undefined2 param_4,short param_5,
                      uint param_6,uint param_7,uint *param_8,undefined4 param_9,undefined4 param_10
                      )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    _DAT_005a4304 = param_5;
    _DAT_005a4308 = CONCAT22(param_4,param_3);
    uVar5 = Text_GlyphHeight(param_1,param_2,0,param_9);
    DAT_005a430c = CONCAT22(DAT_005a430c._2_2_,uVar5);
    Text_WordWrap(param_1,param_2,&DAT_005a4300,0,param_9);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)DAT_005a4306;
    }
    uVar4 = DAT_0060446c;
    uVar3 = DAT_00604468;
    uVar2 = DAT_00604464;
    uVar1 = DAT_00604460;
    if (DAT_005a4306 <= param_7) {
      param_7 = (uint)DAT_005a4306;
    }
    if (DAT_005a4308 < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = _DAT_005a4308 & 0xffff;
    }
    if ((int)_DAT_005a4308 < 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)_DAT_005a430a;
    }
    if ((short)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x10) <
        (short)(DAT_005a4308 + param_5)) {
      uVar6 = (uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10;
    }
    else {
      uVar6 = (uint)(short)(DAT_005a4308 + param_5);
    }
    if ((short)((ulonglong)((longlong)DAT_005a67e4 * 0x1df) >> 0x10) <
        (short)((short)param_6 + _DAT_005a430a)) {
      uVar7 = (uint)((longlong)DAT_005a67e4 * 0x1df) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1df) >> 0x20) << 0x10;
    }
    else {
      uVar7 = (uint)(short)((short)param_6 + _DAT_005a430a);
    }
    if ((int)((uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10) < (int)uVar9) {
      uVar9 = (uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10;
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    if ((int)((uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10) < (int)uVar6) {
      uVar6 = (uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10;
    }
    if ((int)((uint)((longlong)DAT_005a67e4 * 0x1df) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1df) >> 0x20) << 0x10) < (int)uVar8) {
      uVar8 = (uint)((longlong)DAT_005a67e4 * 0x1df) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1df) >> 0x20) << 0x10;
    }
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    if ((int)((uint)((longlong)DAT_005a67e4 * 0x27f) >> 0x10 |
             (int)((ulonglong)((longlong)DAT_005a67e4 * 0x27f) >> 0x20) << 0x10) < (int)uVar7) {
      uVar7 = (uint)((longlong)DAT_005a67e4 * 0x1df) >> 0x10 |
              (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1df) >> 0x20) << 0x10;
    }
    Viewport_Set(uVar9,uVar8,uVar6,uVar7,0);
    copy_str32_to_some_global(&DAT_005a67a0);
    Text_DrawClipped(param_2,&DAT_005a4300,param_7,param_6 / uVar5,param_10,0,param_9);
    Viewport_Set(uVar1,uVar2,uVar3,uVar4,0);
    copy_str32_to_some_global(&DAT_005a67a0);
  }
  return;
}

