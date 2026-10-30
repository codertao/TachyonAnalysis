
int FUN_0040e0a0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_80 [128];
  
  iVar3 = *(byte *)(*DAT_005b97a0 + 4) + 2;
  bVar4 = param_1 != DAT_005b3a24;
  uVar1 = FUN_00457f50(param_1);
  str_sprintf(local_80,s____s_STATS___0053392c,uVar1);
  FUN_0048e970(local_80,DAT_005b97a4,0x140,param_3,(bVar4 - 1 & 0xff41bf00) + 0xff4040,0xffff,
               0x10000,6);
  str_sprintf(local_80,s_KILLS___d_00533920,param_2[1]);
  FUN_0048e970(local_80,DAT_005b97a4,0x140,param_3 + iVar3,0xffffff,0xffff,0x10000,6);
  iVar2 = param_3 + iVar3 + iVar3;
  str_sprintf(local_80,s_DEATHS___d_00533914,param_2[3]);
  FUN_0048e970(local_80,DAT_005b97a4,0x140,iVar2,0xffffff,0xffff,0x10000,6);
  iVar2 = iVar2 + iVar3;
  str_sprintf(local_80,s_CREDITS_ACCUMULATED___d_005338fc,param_2[2]);
  FUN_0048e970(local_80,DAT_005b97a4,0x140,iVar2,0xffffff,0xffff,0x10000,6);
  iVar2 = iVar2 + iVar3;
  str_sprintf(local_80,s_ENEMY_CREDIT_PLANTS_DESTROYED____005338d8,*param_2);
  FUN_0048e970(local_80,DAT_005b97a4,0x140,iVar2,0xffffff,0xffff,0x10000,6);
  return iVar2 + iVar3 * 2;
}

