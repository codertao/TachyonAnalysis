
void __cdecl FUN_10004660(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_10003fe0(param_2,param_3);
  if (piVar1 == (int *)0x0) {
    FUN_100045c0(1,param_2,(short)param_3);
    return;
  }
  iVar2 = FUN_100041d0(param_2,param_3);
  if (iVar2 != 0) {
    FUN_10002b80(iVar2,3);
  }
  FUN_10004600(piVar1);
  FUN_100045c0(0,param_2,(short)param_3);
  return;
}

