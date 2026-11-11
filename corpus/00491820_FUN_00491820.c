
void FUN_00491820(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined1 local_2a;
  undefined1 local_29;
  uint local_28 [10];
  
  local_2a = 0;
  local_29 = 0;
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (DAT_00565a5c == 0) {
      DAT_00565a5c = DAT_005b3304;
    }
    DAT_00565a60 = DAT_005b3304 - DAT_00565a5c;
    DAT_00565a5c = DAT_005b3304;
    if ((char)DAT_00565a34 != '\0') {
      puVar2 = &GLBL_some_str;
      puVar6 = &DAT_005657fc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00491070();
      if ((DAT_0056589c == -1) || ((&DAT_005659b4)[DAT_0056589c] == '\0')) {
        DAT_00563e58 = 0;
        FUN_00491530();
      }
      puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00559ee4,s_VON_VON_00559ee8);
      puVar7 = local_28;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_28[0] = 0x10000;
      local_28[1] = 0x10000;
      iVar3 = Text_GlyphHeight(*puVar2,DAT_005657c0,2,local_28);
      local_28[0] = 0x10000;
      local_28[1] = 0x10000;
      Text_GlyphHeight(*puVar2,DAT_005657c0,2,local_28);
      iVar5 = FUN_00458080(*(undefined4 *)(DAT_005b1f0c + 0x544));
      FUN_0041f6e0(DAT_005657c8,0x1dd,0xa0,0xa0,0x1c,
                   &DAT_006a1f0f + (-(uint)(iVar5 != 2) & 0xffcee371),DAT_005657c0,0,0xff0000,
                   0x10000,2);
      iVar5 = DAT_0056589c;
      local_28[0] = (DAT_005a67a8 * local_28[0]) / 0x280;
      local_28[1] = (DAT_005a67a8 * local_28[1]) / 0x1e0;
      puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00559ee4,s_VON_TO_00559edc);
      FUN_0048e970(*puVar2,DAT_005657c0,0x1e2,0xa3,0xc0c0c0,0xffff,0x10000,2);
      DAT_005657ec = DAT_005a67c0;
      DAT_005657f0 = DAT_005a67c4;
      DAT_005657f4 = DAT_005a67c8;
      DAT_005657f8 = DAT_005a67cc;
      if (iVar5 < 0) {
        puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00559ee4,s_VON_UNKNOWN_00559ed0);
        uVar4 = *puVar2;
        local_2a = 0x8f;
        FUN_0048e970(&local_2a,DAT_005657c0,0x278,0xa3,0xff0000,0xffff,0x10000,10);
        FUN_0048e970(uVar4,DAT_005657c0,0x1f6,0xa3,0xff0000,0xffff,0x10000,2);
      }
      else {
        if ((&DAT_005658b4)[iVar5] == '\0') {
          uVar4 = 0xff0000;
          local_2a = 0x8f;
        }
        else {
          uVar4 = 0xff00;
          local_2a = 0x8e;
        }
        FUN_0048e970(&local_2a,DAT_005657c0,0x278,0xa3,uVar4,0xffff,0x10000,10);
        cVar1 = *(char *)((int)&DAT_00565934 + iVar5);
        FUN_00451fc0(0x1f6,0xa3,0x26b,iVar3 + 0xa3,1);
        copy_str32_to_some_global(&DAT_005a67a0);
        FUN_0048e970(&DAT_005b3a38 + iVar5 * 0x44,DAT_005657c0,0x1f6,0xa3,
                     (-(uint)(cVar1 != '\0') & 0xff01ff00) + 0xff0000,0xffff,0x10000,2);
        FUN_00452070(DAT_005657ec,DAT_005657f0,DAT_005657f4,DAT_005657f8,1);
        copy_str32_to_some_global(&DAT_005657fc);
      }
      DAT_00565860 = iVar3 + 0xa6;
      FUN_00491fc0();
      FUN_00492130();
      if ((char)DAT_00565a34 == '\x02') {
        FUN_00491bd0(param_1);
        return;
      }
      DAT_00565a6c = DAT_0056589c;
      DAT_00565a70 = 0;
    }
  }
  return;
}

