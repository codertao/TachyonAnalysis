
void FUN_0040a0d0(SpED *param_1)

{
  SpED *pSVar1;
  SpED *pSVar2;
  
  pSVar2 = *(SpED **)&param_1[1].linked;
  if (pSVar2 != (SpED *)0x0) {
    *(uint *)&pSVar2[1].field_0x24 =
         *(uint *)&pSVar2[1].field_0x24 & ~(((param_1[1].next)->pos).x & 0x118U);
    do {
      pSVar1 = pSVar2[1].pendingNext;
      if (pSVar1 == param_1) break;
      pSVar2 = pSVar1;
    } while (pSVar1 != (SpED *)0x0);
  }
  if (*(code **)(g_ActiveRules + 0x6c) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x6c))(param_1[1].next,param_1->team,DAT_005653f4);
  }
  FUN_0040a0b0(*(undefined4 *)&param_1[1].linked,*(undefined4 *)&(param_1[1].next)->field_0x44);
  pSVar2[1].pendingNext = param_1[1].pendingNext;
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  if (*(int *)&param_1[1].linked == 0) {
    SrvSend_Despawn(param_1);
  }
  else {
    SrvSend_SubpartDestroy
              (*(undefined4 *)(*(int *)&param_1[1].linked + 0x78),
               *(undefined4 *)&(param_1[1].next)->field_0x44,param_1->quadrant);
  }
  FUN_0045d1c0(param_1,&param_1->quadrant->staticSectorMap);
  Quad_UnlinkStatic(param_1);
  FUN_00492ba0(param_1,param_1->quadrant);
  return;
}

