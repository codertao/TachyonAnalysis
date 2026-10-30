
void FUN_00436b80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = Sped_FindById(param_1,param_2);
  if ((iVar2 != 0) && (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x50), pcVar1 != (code *)0x0)) {
    (*pcVar1)(iVar2,1,param_3);
    return;
  }
  *param_3 = DAT_00536778;
  *(undefined1 *)(param_3 + 1) = DAT_0053677c;
  return;
}

