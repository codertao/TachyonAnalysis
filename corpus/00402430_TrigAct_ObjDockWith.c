
/* action 5/2: obj arg docks with obj arg2 */

void TrigAct_ObjDockWith(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  int iVar2;
  
  iVar1 = Sped_FindDef(param_4,param_1,0);
  if (iVar1 != 0) {
    iVar2 = Sped_FindDef(param_4,param_2,0);
    if ((((iVar2 != 0) && (iVar1 = *(int *)(iVar1 + 0x28), iVar1 != 0)) &&
        (*(int *)(iVar2 + 0x28) != 0)) && (*(short *)(iVar1 + 0x76) == 2)) {
      FUN_00402400(iVar1,*(int *)(iVar2 + 0x28));
    }
  }
  return;
}

