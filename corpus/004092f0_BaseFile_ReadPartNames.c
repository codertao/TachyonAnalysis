
/* sweep: PART_%02d */

void BaseFile_ReadPartNames(void)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20 [32];
  
  Mem_AllocZeroTagged(&DAT_005b980c,DAT_005b9808 << 6,4,s_TMP_BASE_PART_NAME_BUFFER_00532c84,0xffff)
  ;
  uVar1 = 0;
  iVar2 = DAT_005b980c;
  if (DAT_005b9808 != 0) {
    do {
      str_sprintf(local_20,s_PART__02d_00532c78,uVar1);
      Cbin_GetScalar(local_20,&DAT_00532c70,iVar2,0x40,0);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < DAT_005b9808);
  }
  return;
}

