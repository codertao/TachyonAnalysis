
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

int PakTex_DecodeImage(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = PakTex_Next(param_2);
  uVar2 = Mem_AllocFromMain(*(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14));
  Rle_DecodePcx(iVar1 + 0x1c,uVar2,*(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14));
  _DAT_00603100 = *(int *)(iVar1 + 0x10);
  DAT_00603104 = *(int *)(iVar1 + 0x14);
  if ((DAT_0062c128 != 0) && ((*(byte *)(param_2 + 0xf) & 4) == 0)) {
    Image_FlipRows(uVar2);
  }
  uVar3 = Image_MakeAlpha(*(undefined4 *)(param_1 + 0x28),uVar2,DAT_00603104 * _DAT_00603100);
  mark_alloc_memory_with_flags(uVar3,DAT_00668f5c);
  Mem_FreeToMain(uVar2);
  Mem_FreeToMain(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  return iVar1;
}

