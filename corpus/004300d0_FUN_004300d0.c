
void FUN_004300d0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00562bb0;
  while (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = 0;
  }
  FUN_0042fff0();
  FUN_00430150(0);
  clr_bytes(&DAT_005affe0,0x40);
  clr_bytes(&DAT_005aeed4,0x80);
  clr_bytes(&DAT_005af7dc,0x800);
  clr_bytes(&DAT_005aefdc,0x800);
  clr_bytes(&DAT_005aef54,0x80);
  clr_bytes(&DAT_005b0020,0x40);
  return;
}

