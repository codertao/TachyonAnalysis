
/* sweep */

void Fx_FreeAllType1a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b31c0;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if ((*(short *)(iVar2 + 0x76) == 0x1a) && (*(int *)(iVar2 + 200) != 0)) {
      Snd3D_Release(*(int *)(iVar2 + 200));
    }
  }
  DcbList_FreeByType(DAT_005b31c0,0x1a);
  return;
}

