
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (dstPal@EDI, srcPal@ESI) nearest-colour remap into 0x603484 (cached when palettes match) */

void __cdecl Pal_BuildRemapTable(byte *dstPal,byte *srcPal)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  DAT_004e3007 = dstPal;
  DAT_004e3037 = srcPal;
  if (DAT_0060389c != 0) {
    if (DAT_00603898 == PTR_FUN_004e3053) {
      pbVar5 = &DAT_00603598;
      iVar2 = 0x300;
      pbVar4 = srcPal;
      while( true ) {
        if (iVar2 == 0) {
          return;
        }
        if (*pbVar4 != *pbVar5) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        iVar2 = iVar2 + -1;
      }
    }
    pbVar4 = &DAT_00603598;
    for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar4 = *srcPal;
      srcPal = srcPal + 1;
      pbVar4 = pbVar4 + 1;
    }
  }
  DAT_00603898 = PTR_FUN_004e3053;
  _DAT_004e3023 = 0xff;
  DAT_00603484 = 0;
  puVar3 = &DAT_00603485;
  pbVar4 = DAT_004e3007;
  do {
    uVar1 = (*(code *)PTR_FUN_004e3053)(pbVar4);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    _DAT_004e3023 = _DAT_004e3023 + -1;
  } while (_DAT_004e3023 != 0);
  return;
}

