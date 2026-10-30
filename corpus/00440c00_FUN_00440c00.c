
void FUN_00440c00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    FUN_0048e3a0(&param_1,0xd4,4,s_MNU_ScreenZoom_Block_0053fedc,0xa000);
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = param_1;
      for (iVar1 = 0x35; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_1[0x34] = DAT_005a4b48;
      DAT_005a4b48 = param_1;
      DAT_005a4b4c = DAT_005a4b4c + 1;
    }
  }
  return;
}

