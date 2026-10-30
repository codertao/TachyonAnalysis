
/* load a vars store: defaults from vars.cfg + overlay player .sav path -> handle */

void VarStore_Load(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  
  DAT_0056aa90 = param_4;
  iVar1 = VarStore_ParseDefaults(param_1,param_4,param_5);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = VarStore_Create();
  *param_3 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  VarStore_OverlayFile(param_2,iVar1);
  return;
}

