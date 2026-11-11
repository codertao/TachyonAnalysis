
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002510(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  DAT_1000769c = 0;
  DAT_10007698 = (void *)0x0;
  iVar1 = NwUsage_LoadCfg();
  if (iVar1 != -1) {
    DAT_1000769c = 0x80;
    DAT_10007698 = calloc(0x80,0x4a);
    uVar3 = 0;
    DAT_10019874 = 0;
    _DAT_1001986c = 0;
    _DAT_10019870 = 0;
    if (DAT_100198b8 != 0) {
      piVar2 = (int *)(DAT_10019afc + 0x98);
      while ((piVar2[1] == 0 || (*piVar2 != 0))) {
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 0x2f;
        if (DAT_100198b8 <= uVar3) {
          return;
        }
      }
      _DAT_10019870 = 1;
    }
  }
  return;
}

