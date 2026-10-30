
void FUN_0040bbf0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_80 [128];
  
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  uVar2 = FUN_004648a0(param_1,0,0,s_TURRET_DEBUG_00532e6c);
  iVar3 = FUN_00465080(s_WEAPON_00532e64,param_1 + 0x100,uVar2);
  str_sprintf(local_80,s_IT_ANGLE___d_00532e54,*(int *)(param_2 + 0xf8) >> 0x10);
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar3 + (uint)bVar1,0xff0000,0xffff,0x10000,2);
  return;
}

