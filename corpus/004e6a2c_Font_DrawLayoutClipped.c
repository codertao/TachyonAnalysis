
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* same, lines via Font_DrawStringClipped */

void __cdecl
Font_DrawLayoutClipped(void *layout,void *font,byte color,byte style,int firstLine,int maxLines)

{
  uint uVar1;
  undefined2 in_register_00000006;
  
  if (GLBL_some_str == 0) {
    return;
  }
  if (DAT_004e5ec6 == '\0') {
    DAT_004e5ec3 = '\0';
  }
  else {
    DAT_004e5ec3 = DAT_004e5ec6;
  }
  if (maxLines == 0) {
    _DAT_004e54c4 = (uint)*(ushort *)((int)layout + 6);
  }
  else {
    uVar1 = (uint)*(ushort *)((int)layout + 6) - firstLine;
    _DAT_004e54c4 = maxLines;
    if ((int)uVar1 < maxLines) {
      _DAT_004e54c4 = uVar1;
    }
  }
  DAT_004e54bc = (uint)*(ushort *)((int)layout + 10);
  DAT_004e54d4 = *(char **)layout;
  DAT_004e5498 = CONCAT22(in_register_00000006,CONCAT11(style,color));
  DAT_004e5578 = firstLine;
  do {
    if ((*DAT_004e54d4 != '\0') && (DAT_004e5578 == 0)) {
      Font_DrawStringClipped
                (DAT_004e54d4,font,(uint)*(ushort *)((int)layout + 8),DAT_004e54bc,
                 (byte)DAT_004e5498,(byte)((uint)DAT_004e5498 >> 8),0);
    }
    uVar1 = _DAT_004e54c4;
    if (DAT_004e5578 == 0) {
      DAT_004e54bc = DAT_004e54bc + *(ushort *)((int)layout + 0xc);
      _DAT_004e54c4 = _DAT_004e54c4 - 1;
      if (_DAT_004e54c4 == 0 || (int)uVar1 < 1) {
        DAT_004e5ec6 = 0;
        return;
      }
    }
    else {
      DAT_004e5578 = DAT_004e5578 + -1;
    }
    for (; *DAT_004e54d4 != '\0'; DAT_004e54d4 = DAT_004e54d4 + 1) {
    }
    DAT_004e54d4 = DAT_004e54d4 + 1;
  } while( true );
}

