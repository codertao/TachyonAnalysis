
/* sweep: guess */

void Ent_CanBeamHit(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x58), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,0x17,param_4);
    if (iVar2 != 0) {
      *param_3 = 1;
      uVar3 = (*pcVar1)(param_1,8,0);
      *param_2 = uVar3;
      return;
    }
  }
  *param_3 = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  return;
}

