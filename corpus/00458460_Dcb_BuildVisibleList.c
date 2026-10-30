
/* build/sort visible DCB list into scratch 0x6240e8 (from 0x5b31c0 + g_DcbActiveList 0x5b3280) for
   a depth bucket */

void Dcb_BuildVisibleList(int param_1)

{
  undefined4 uVar1;
  
  DAT_0062c0e8 = 0;
  if (param_1 == 2) {
    uVar1 = FUN_00458320(DAT_005b31c0,&DAT_006240e8,2);
    FUN_00458320(DAT_005b3280,uVar1,2);
    FUN_0052de6f();
    return;
  }
  uVar1 = FUN_004583c0(DAT_005b31c0,&DAT_006240e8,param_1);
  FUN_004583c0(DAT_005b3280,uVar1,param_1);
  FUN_0052de6f();
  return;
}

