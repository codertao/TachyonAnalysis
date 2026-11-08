
/* action 6/2,6/6: Sped action 1 (ACTIVATE) on each spawned member */

void TrigAct_GroupActivate(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  iVar1 = *(int *)(param_4 + 0x54);
  if (iVar1 != 0) {
    psVar3 = *(short **)(iVar1 + 0x18);
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      do {
        if (((*psVar3 == 3) && (*(int *)(psVar3 + 0x2a) == param_1)) &&
           (*(int *)(psVar3 + 0x14) != 0)) {
          Ent_SendMessage(*(int *)(psVar3 + 0x14),1,param_3);
        }
        psVar3 = (short *)((int)psVar3 + (uint)(ushort)psVar3[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
    }
  }
  return;
}

