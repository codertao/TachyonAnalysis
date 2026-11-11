
/* (dstPal, srcPal, pixels, count) Pal_BuildRemapTable then remap pixels in place */

void __cdecl Pal_RemapPixels(byte *dstPal,byte *srcPal,byte *pixels,int count)

{
  int iVar1;
  byte *pbVar2;
  
  DAT_004e3033 = count;
  DAT_004e3007 = dstPal;
  DAT_004e3037 = srcPal;
  DAT_004e303b = pixels;
  Pal_BuildRemapTable(dstPal,srcPal);
  iVar1 = DAT_004e3033;
  pbVar2 = DAT_004e303b;
  do {
    *pbVar2 = (&DAT_00603484)[*pbVar2];
    pbVar2 = pbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

