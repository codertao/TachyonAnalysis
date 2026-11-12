
/* sweep */

undefined4 Pff_Exists(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Pff_FindEntry(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0xb4) = 0;
    return 1;
  }
  *(undefined4 *)(param_2 + 0xb4) = 1;
  return 0;
}

