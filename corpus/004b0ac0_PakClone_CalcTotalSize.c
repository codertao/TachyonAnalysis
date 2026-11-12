
/* refine: allocation size for a runtime clone */

int PakClone_CalcTotalSize(int param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = param_1;
  iVar2 = Mem_GetSize(param_1);
  PakClone_CopyBody(iVar1,&local_4,&param_1);
  return (param_1 - local_4) + iVar2;
}

