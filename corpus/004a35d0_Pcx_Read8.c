
/* sweep */

void Pcx_Read8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Fs_Seek(0,2);
  uVar2 = Mem_Alloc(iVar1 + -0x380,4,0);
  Fs_Seek(0x80,0);
  Fs_Read(uVar2,iVar1 + -0x380);
  Rle_DecodePcx(uVar2,param_1,DAT_00603108);
  OurFreeMem(uVar2);
  return;
}

