
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (v0@EAX, v1@EBX, v2@ECX, surface@EDI, color@ESI) flags in 0x4e4a28 */

void __cdecl Sw_DrawTriangle(void *v0,void *v1,void *v2,void *surface,uint color)

{
  uint uVar1;
  bool bVar2;
  
  if (surface == (void *)0x0) {
    return;
  }
  DAT_004e49a0 = 0x1460000;
  DAT_004e488c = v0;
  DAT_004e4890 = v1;
  DAT_004e4894 = v2;
  DAT_004e4888 = surface;
  _DAT_004e4a48 = color;
  DAT_004e4884 = DAT_004e4b08;
  if (((DAT_004e4a28 & 0x80) == 0) && ((DAT_004e4a28 & 0x20000) == 0)) {
    uVar1 = color;
    DAT_00502910 = color;
    if ((DAT_004e4a28 & 0x2200000) != 0) {
      DAT_00502910 = DAT_004e4a2c << 8;
      uVar1 = DAT_004e4a2c;
    }
  }
  else {
    DAT_00502910 = DAT_004e4a2c;
    uVar1 = DAT_004e4a2c;
  }
  DAT_004e4a2c = uVar1;
  if ((DAT_004e4a28 & 0x400000) == 0) {
    if ((DAT_004e4a28 & 0x2000) != 0) {
      DAT_004e4a28 = DAT_004e4a28 & 0xfffffffd;
      DAT_004e4a28 = DAT_004e4a28 | 1;
    }
    _DAT_004e4a48 = color & 0xff;
    DAT_004e4aa8 = color;
    if (DAT_00604488 == 0x10) {
      SwAsm_PatchRemapTables16();
    }
    _DAT_004e4af8 = 0;
    SwAsm_TriSortVerts();
    if ((DAT_004e4b11 & 1) != 0) {
      DAT_004e4b10 = DAT_004e4b10 ^ 1;
    }
    SwAsm_TriSetupColorGradients();
    SwAsm_TriSelectSpanFuncs();
    bVar2 = DAT_004e4b10 == 0;
    if (bVar2) {
      DAT_004e4a3c = (undefined4 *)&DAT_004e4898;
      DAT_004e4a44 = (undefined4 *)&DAT_004e4898;
      DAT_004e4a38 = &DAT_004e48ec;
      DAT_004e4a40 = &DAT_004e4940;
      DAT_004e4984 = DAT_004e4ac4;
      DAT_004e48dc = SwAsm_EdgeStepZ;
    }
    else {
      DAT_004e4a38 = (undefined4 *)&DAT_004e4898;
      DAT_004e4a40 = (undefined4 *)&DAT_004e4898;
      DAT_004e4a3c = &DAT_004e48ec;
      DAT_004e4a44 = &DAT_004e4940;
      DAT_004e48dc = DAT_004e4ac4;
      DAT_004e4984 = SwAsm_EdgeStepZ;
    }
    _DAT_004e4988 = (uint)bVar2;
    _DAT_004e4934 = (uint)bVar2;
    _DAT_004e48e0 = (uint)!bVar2;
    DAT_004e4930 = DAT_004e4984;
    SwAsm_SetupEdge();
    SwAsm_SetupEdge();
    SwAsm_SetupEdge();
    (*DAT_004e4ad8)();
    DAT_004e4888 = (void *)((int)DAT_004e4888 + DAT_004e48a4 * DAT_00604490);
    DAT_004e4884 = DAT_004e4884 + DAT_004e48a4 * DAT_00604448 * 4;
    if (0 < DAT_004e48ec) {
      do {
        (*DAT_004e4ac8)();
        (*DAT_004e48dc)();
        (*DAT_004e4930)();
        DAT_004e4888 = (void *)((int)DAT_004e4888 + DAT_00604490);
        DAT_004e4884 = DAT_004e4884 + DAT_00604448 * 4;
        DAT_004e48ec = DAT_004e48ec + -1;
      } while (DAT_004e48ec != 0);
    }
    if (0 < DAT_004e4940) {
      do {
        (*DAT_004e4ac8)();
        (*DAT_004e48dc)();
        (*DAT_004e4984)();
        DAT_004e4888 = (void *)((int)DAT_004e4888 + DAT_00604490);
        DAT_004e4884 = DAT_004e4884 + DAT_00604448 * 4;
        DAT_004e4940 = DAT_004e4940 + -1;
      } while (DAT_004e4940 != 0);
    }
    return;
  }
  return;
}

