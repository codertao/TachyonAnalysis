
/* every 50 frames: post each COUNTERS var as a var change */

uint Counters_PostValues(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = DAT_005897e4 / 0x32;
  if ((DAT_005897e4 % 0x32 == 0) && (iVar2 = 0, uVar1 = g_Counters, 0 < (int)g_CounterCount)) {
    puVar3 = (undefined4 *)(g_Counters + 4);
    do {
      Mission_PostVarChange(g_CounterVarCat,iVar2,*(undefined4 *)*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      uVar1 = g_CounterCount;
    } while (iVar2 < (int)g_CounterCount);
  }
  return uVar1;
}

