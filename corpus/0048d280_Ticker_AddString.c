
/* sweep */

undefined4 * Ticker_AddString(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  Mem_AllocTagged(&param_1,700,4,s_TICKER_Ticker_String_005598e4,0xa000);
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = param_1;
  for (iVar3 = 0xaf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0xae] = GLBL_llist_large_thing;
  GLBL_llist_large_thing = param_1;
  if (DAT_00564ae4 != 0) {
    iVar3 = param_1[0x80];
    if (*(int *)(iVar3 + 0x238) != 0) {
      uVar1 = Text_MeasureWidth(param_1,*(int *)(iVar3 + 0x238),*(undefined4 *)(iVar3 + 0x24c),
                                iVar3 + 0x23c);
      param_1[0x87] = uVar1;
      iVar3 = param_1[0x80];
      uVar1 = Text_GlyphHeight(param_1,*(undefined4 *)(iVar3 + 0x238),*(undefined4 *)(iVar3 + 0x24c)
                               ,iVar3 + 0x23c);
      goto LAB_0048d36b;
    }
  }
  uVar1 = Font_MeasureString(param_1,param_1[0x80] + 0x50);
  param_1[0x87] = uVar1;
  uVar1 = Font_GetLineHeight(param_1[0x80] + 0x50);
LAB_0048d36b:
  param_1[0x88] = uVar1;
  param_1[0x89] = DAT_0056aad0 - param_1[0x88];
  if (-1 < DAT_0056aad4) {
    iVar3 = Ticker_Stub();
    Ticker_SetOffset((iVar3 - param_1[0x87]) + 0x2c);
    uVar1 = Ticker_Stub();
    param_1[0x8a] = uVar1;
    return param_1;
  }
  iVar2 = Ticker_Stub();
  iVar3 = param_1[0x87];
  uVar1 = Ticker_Stub();
  param_1[0x8a] = uVar1;
  Ticker_SetOffset(iVar2 + iVar3 + 0x34);
  return param_1;
}

