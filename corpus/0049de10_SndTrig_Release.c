
/* sweep */

undefined4 SndTrig_Release(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = SndTrig_FindByName(param_1,param_2);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x23) != '\0')) {
      OurFreeMem(*(undefined4 *)(iVar1 + 0x24));
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined1 *)(iVar1 + 0x23) = 0;
      return 1;
    }
  }
  return 0;
}

