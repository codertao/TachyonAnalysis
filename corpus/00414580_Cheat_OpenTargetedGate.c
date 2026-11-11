
/* SP only: via replica server link +0xf4 */

void Cheat_OpenTargetedGate(void)

{
  int iVar1;
  
  if ((((DAT_005b9268 != 0) && (iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90), iVar1 != 0)) &&
      (*(short *)(iVar1 + 0x76) == 0x13)) && (*(int *)(iVar1 + 0xf4) != 0)) {
    TrigAct_GateSet(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xf4) + 0xf0) + 0x20),0,1,
                    g_SrvCurShip->quadrant);
    Chatter_PlayRandom(5);
  }
  return;
}

