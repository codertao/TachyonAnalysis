
/* turn toward target; within 20000 -> AiThink_Attack */

void AiThink_Approach(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  *(undefined1 *)(param_1 + 0x327) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      Ai_ReacquireTarget(param_1);
      return;
    }
    Vec_DirAngles(param_1 + 0x34,(vec3 *)(iVar1 + 0x34),param_1 + 0xdc);
    Ent_AnglesToLocal(iVar1,param_1 + 0xdc);
    if ((*(int *)(iVar1 + 0x8c) == 0) ||
       (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x60), pcVar2 == (code *)0x0)) {
      uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34));
    }
    else {
      uVar3 = (*pcVar2)(iVar1,param_1);
    }
    if (uVar3 < 0x4e20000) {
      Ai_EnterAttack(param_1);
    }
  }
  return;
}

