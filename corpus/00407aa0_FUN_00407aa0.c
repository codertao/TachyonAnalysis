
void FUN_00407aa0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[6];
  Anim_Start(param_2,param_1,iVar1);
  FUN_00407a40(iVar1);
  if ((*param_1 != 0) && (param_1[0x14] == 0)) {
    FUN_004079c0(param_1[6],param_2);
    FUN_004107c0(0x3c,0);
    FUN_0041c3e0(0);
  }
  return;
}

