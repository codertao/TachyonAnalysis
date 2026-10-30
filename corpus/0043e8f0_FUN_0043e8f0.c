
undefined4 FUN_0043e8f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043e890(param_1,param_2);
  if (iVar1 != 0) {
    DAT_00562bec = FUN_0043a7a0(param_1,iVar1 + 0x40);
    if (DAT_00562bec != 0) {
      FUN_0043ed90(param_1,iVar1 + 0x40,*(undefined4 *)(DAT_00562bec + 0x1680),
                   *(undefined4 *)(iVar1 + 0x80));
      FUN_0043efd0(*(undefined4 *)(iVar1 + 0x84),*(undefined4 *)(iVar1 + 0x88));
    }
    if ((DAT_00564ae4 == 0) && (DAT_006022f4 == 1)) {
      FUN_0043eff0();
      FUN_0043ed80();
      FUN_0049e410();
    }
    return 1;
  }
  return 0;
}

