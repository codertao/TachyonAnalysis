
void FUN_00457bc0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = Sector_GetQuadrantName(param_1);
  uVar1 = FUN_0048e800(DAT_005a6140,0x5d,uVar1);
  str_sprintf(local_80,s__s___s__00548d54,uVar1);
  FUN_004c82b6(local_80);
  FUN_0045d900(local_80,1,4,DAT_0058b068,0,0,0xffffffff);
  return;
}

