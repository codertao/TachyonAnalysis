
/* per server tick: each active quadrant -> rules +0x44, every DCB +0x68 think then +0x6c; Dcb_GC
   around */

void TachSrv_WorldTick(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (g_CutsceneActive == 0) {
    Dcb_GC();
    uVar3 = 0;
    piVar4 = &DAT_005897f0;
    if (DAT_0058af70 != 0) {
      do {
        if (piVar4[0xd] != 0) {
          if (*(code **)(g_ActiveRules + 0x44) != (code *)0x0) {
            (**(code **)(g_ActiveRules + 0x44))(piVar4);
          }
          iVar1 = *piVar4;
          while (iVar2 = iVar1, iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 8);
            if (*(code **)(iVar2 + 0x68) != (code *)0x0) {
              (**(code **)(iVar2 + 0x68))(iVar2);
            }
          }
          iVar1 = *piVar4;
          while (iVar2 = iVar1, iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 8);
            if (*(code **)(iVar2 + 0x6c) != (code *)0x0) {
              (**(code **)(iVar2 + 0x6c))(iVar2);
            }
          }
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x2f;
      } while (uVar3 < DAT_0058af70);
    }
    Dcb_GC();
  }
  return;
}

