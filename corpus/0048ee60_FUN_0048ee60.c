
void FUN_0048ee60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    str_sprintf(param_1,s_snap_4_4ld__s_00559d3c,iVar2,param_2);
    iVar1 = FUN_0048ede0(param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10000);
  str_sprintf(param_1,&s_snapshot_fmtstr,param_2);
  return;
}

