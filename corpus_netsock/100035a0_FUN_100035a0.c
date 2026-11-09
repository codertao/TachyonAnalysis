
void __cdecl FUN_100035a0(undefined4 *param_1,int param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = FUN_10003540(param_2,param_3);
  if ((piVar1 == (int *)0x0) && (piVar1 = (int *)FUN_10003570(), piVar1 == (int *)0x0)) {
    return;
  }
  puVar3 = (undefined4 *)((int)piVar1 + 6);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *piVar1 = param_2;
  *(short *)(piVar1 + 1) = param_3;
  *(undefined4 *)((int)piVar1 + 0x10a) = 0;
  *(undefined4 *)((int)piVar1 + 0x106) = 1;
  return;
}

