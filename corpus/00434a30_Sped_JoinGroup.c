
/* add entity to quadrant group slot (+0x54 id); stores slot at entity +0x100 */

void Sped_JoinGroup(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != -1) {
    Sped_InitGroupSlot(param_1,param_2,param_3);
    iVar2 = Quad_FindGroupSlot(*(undefined4 *)(param_1 + 100),param_3);
    if (iVar2 != 0) {
      *(int *)(param_2 + 0x24) = iVar2;
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        Quad_GetGroupLeader(*(undefined4 *)(param_1 + 100),param_3,param_1);
        return;
      }
      pcVar1 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x40);
      if (pcVar1 != (code *)0x0) {
        iVar3 = (*pcVar1)(iVar3);
        if (iVar3 != 0) {
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar2 + 8);
          *(int *)(iVar3 + 0x20) = param_1;
        }
      }
      if (param_4 == 0) {
        Formation_SnapToSlot(param_1);
      }
    }
  }
  return;
}

