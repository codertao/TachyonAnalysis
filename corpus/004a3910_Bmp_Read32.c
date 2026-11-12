
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Bmp_Read32(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(DAT_00603110 * DAT_00603104 * _DAT_00603100) >> 3;
  uVar1 = Mem_Alloc(uVar3,4,0);
  iVar2 = DAT_0060310c << 2;
  if (DAT_00603110 == 0x18) {
    iVar2 = 0;
  }
  Fs_Seek(iVar2 + 0x36,0);
  Fs_Read(uVar1,uVar3);
  if (DAT_00603110 == 8) {
    Bmp_Convert32(param_1,uVar1,DAT_00603104 * _DAT_00603100);
  }
  if (DAT_00603110 == 0x18) {
    Bmp_Convert24to32(param_1,uVar1,DAT_00603104 * _DAT_00603100);
  }
  Bmp_FlipRows(param_1);
  OurFreeMem(uVar1);
  return;
}

