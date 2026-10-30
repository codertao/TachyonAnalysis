
void FUN_00430210(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    for (iVar2 = DAT_00562bb0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      if (iVar2 == param_1) {
        if (iVar1 == 0) {
          DAT_00562bb0 = *(int *)(iVar2 + 0x14);
        }
        else {
          *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
        }
        *(undefined4 *)(iVar2 + 0x14) = 0;
        break;
      }
      iVar1 = iVar2;
    }
  }
  FUN_0042fff0();
  FUN_0048e380(&DAT_005affe0,0x40);
  FUN_0048e380(&DAT_005aeed4,0x80);
  FUN_0048e380(&DAT_005af7dc,0x800);
  FUN_0048e380(&DAT_005aefdc,0x800);
  FUN_0048e380(&DAT_005aef54,0x80);
  FUN_0048e380(&DAT_005b0020,0x40);
  return;
}

