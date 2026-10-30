
/* resolve SPED id -> entity for action dispatch */

undefined4 Sped_FindById(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Sped_FindDef(param_2,param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x28);
}

