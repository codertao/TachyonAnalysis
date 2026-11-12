
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Course_SpawnFromPlacement(SpED *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  clr_bytes(&GLBL_some_sped_ll_head,0xd4);
  DAT_005b29c8 = param_2;
  Spx_RemapPlacementNames(param_1,param_3);
  iVar1 = Spx_TestVar(&(param_1->pos).z);
  if ((iVar1 != 0) && ((param_1->field_0x24 & 8) == 0)) {
    Course_SpawnGate(param_3);
    DAT_005b29cc = param_3;
    _DAT_005b2a48 = param_1->next;
    _DAT_005b2a4c = param_1->pendingNext;
    _DAT_005b2a50 = param_1->poolSerial;
    GLBL_iter_cnt = Course_GetSavedCourseNum();
    Course_Build(GLBL_iter_cnt,&param_1->next);
    Ent_SetTarget(param_3,&LAB_0041b1d0);
  }
  return;
}

