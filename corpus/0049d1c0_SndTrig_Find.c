
/* sweep */

undefined4 SndTrig_Find(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = SndTrig_FindByName(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 0x22) = 1;
  return 1;
}

