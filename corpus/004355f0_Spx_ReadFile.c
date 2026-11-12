
/* SPX file reader: alloc 0x1a4, read first_offset(@0,4B), read header block, get size (Fs_GetSize),
   grow buf, read body after +0x1a4; store reloc base at buf+0x1a0. Uses Fs_ReadRegion/Fs_GetSize
   (random-access path, NOT whole-file Cbin reader) */

int * Spx_ReadFile(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  Mem_AllocZeroTagged(&param_1,0x1a4,4,param_1,0xd100);
  Fs_ReadRegion(piVar1,param_1,0,4);
  Fs_ReadRegion(piVar1,param_1,0,*param_1);
  iVar2 = Fs_GetSize(piVar1);
  param_1 = (int *)Mem_Realloc(param_1,iVar2 + (0x1a4 - *param_1),4);
  iVar2 = *param_1;
  iVar3 = Fs_GetSize(piVar1);
  Fs_ReadRegion(piVar1,param_1 + 0x69,iVar2,iVar3 - iVar2);
  param_1[0x68] = (int)param_1 + (0x1a4 - *param_1);
  return param_1;
}

