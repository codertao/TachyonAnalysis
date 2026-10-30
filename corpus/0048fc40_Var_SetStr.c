
/* (store, section, key, strValue) */

undefined4 Var_SetStr(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_0056aa94 == 0) {
    return 0;
  }
  iVar1 = Var_FindSection(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = Var_FindKey(iVar1,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 8) != 0) {
    iVar3 = FUN_0048f620(*(int *)(iVar2 + 8),param_4,&param_2);
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = FUN_0048fb20(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar2 + 4),param_2);
    return uVar4;
  }
  uVar4 = FUN_004bd32f(param_4);
  uVar4 = FUN_0048fb20(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar2 + 4),uVar4);
  return uVar4;
}

