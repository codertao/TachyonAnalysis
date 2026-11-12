
/* sweep */

int Pak_Unload(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)Pak_FindLoaded(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar2 = puVar1[5] + -1;
  puVar1[5] = iVar2;
  if (iVar2 == 0) {
    Pak_FreeModel(*puVar1);
    return 0;
  }
  return iVar2;
}

