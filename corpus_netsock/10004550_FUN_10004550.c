
void __cdecl FUN_10004550(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = FUN_10003fe0(param_2,param_3);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)FUN_100041d0(param_2,param_3);
    if ((puVar2 != (undefined4 *)0x0) && (puVar2[0x28] == *(int *)(param_1 + 4))) {
      FUN_10002b80((int)puVar2,3);
      FUN_10004490(puVar2);
      FUN_10004510(0,param_2,(short)param_3);
      return;
    }
    FUN_10004510(1,param_2,(short)param_3);
  }
  return;
}

