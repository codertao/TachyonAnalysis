
void FUN_00480ea0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_004803a0(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = puVar2[0x12]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
      iVar3 = str_cmp(iVar1,param_2);
      if (iVar3 == 0) {
        *(undefined4 *)*puVar2 = *(undefined4 *)(iVar1 + 0x24);
        FUN_0043e770(DAT_00571280,puVar2 + 2,iVar1 + 0x28);
        Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
        FUN_00480af0(*(undefined4 *)(iVar1 + 0x24),puVar2);
      }
    }
  }
  return;
}

