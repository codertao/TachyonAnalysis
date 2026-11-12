
/* build/sort visible DCB list into scratch 0x6240e8 (from 0x5b31c0 + g_DcbActiveList 0x5b3280) for
   a depth bucket */

void Dcb_BuildVisibleList(int param_1)

{
  undefined4 uVar1;
  
  DAT_0062c0e8 = 0;
  if (param_1 == 2) {
    uVar1 = Vis_CullListA(DAT_005b31c0,&DAT_006240e8,2);
    Vis_CullListA(DAT_005b3280,uVar1,2);
    call_SortPairs_Desc();
    return;
  }
  uVar1 = Vis_CullListB(DAT_005b31c0,&DAT_006240e8,param_1);
  Vis_CullListB(DAT_005b3280,uVar1,param_1);
  call_SortPairs_Desc();
  return;
}

