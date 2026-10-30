
void FUN_00416bb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_004152e0(param_1 + 1);
    *(undefined4 *)(iVar1 + 0x118) = uVar2;
  }
  return;
}

