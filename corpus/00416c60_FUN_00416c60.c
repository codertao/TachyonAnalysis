
void FUN_00416c60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(short *)(param_1 + 2) == 0) {
    iVar2 = Dcb_FindById(*param_1);
  }
  else {
    iVar1 = Dcb_FindById(*param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_0040b260(iVar1,*(undefined2 *)((int)param_1 + 10));
    }
  }
  iVar1 = Dcb_FindById(param_1[1]);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    local_c = FUN_0048e8c0(*(undefined2 *)(param_1 + 3));
    local_8 = FUN_0048e8c0(*(undefined2 *)((int)param_1 + 0xe));
    local_4 = FUN_0048e8c0(*(undefined2 *)(param_1 + 4));
    FUN_00496cc0(iVar2,iVar1,&local_c,*(undefined2 *)((int)param_1 + 0x12));
  }
  return;
}

