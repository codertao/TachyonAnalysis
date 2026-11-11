
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a8d0(SpED *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [64];
  
  iVar1 = GLBL_some_sped_ll_head;
  if ((DAT_005653dc != -1) && (DAT_005b2a54 != 4)) {
    iVar2 = FUN_0048e800(DAT_005a6140,0xbe);
    if (iVar2 != 0) {
      str_sprintf(auStack_40,iVar2,_DAT_005b29c4 * 0xf);
      maybe_log_something(auStack_40,0x32);
    }
    DAT_005b2a5c = DAT_005b2a5c + 1;
    DAT_005b2a64 = _DAT_005b29c4 * 0xf + DAT_005b2a64;
    if (DAT_005a6730 != 0) {
      str_sprintf(auStack_40,s_Targets_Left___d_00534b38,DAT_005b2a70 - DAT_005b2a5c);
      FUN_0045d9d0(auStack_40,0);
    }
  }
  SrvSend_EntityDestroyed(&param_1->pos,1,0,0,0,DAT_00565408,0,param_1->quadrant);
  do {
    if (iVar1 == 0) {
LAB_0041a9d5:
      SrvSend_Despawn(param_1);
      FUN_0045d1c0(param_1,&param_1->quadrant->staticSectorMap);
      Quad_UnlinkStatic(param_1);
      FUN_0041b9b0(param_1);
      return;
    }
    if (*(SpED **)(iVar1 + 0xf4) == param_1) {
      *(undefined4 *)(iVar1 + 0xf4) = 0;
      goto LAB_0041a9d5;
    }
    iVar1 = *(int *)(iVar1 + 200);
  } while( true );
}

