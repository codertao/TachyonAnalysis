
/* weapon 0x1d server bolt: filter 0x494a70, no exclusion */

void Proj_PostThinkServerLightTurret(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_c [12];
  
  if (((**(uint **)(*(int *)(param_1 + 100) + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0) {
    iVar2 = Coll_ProjectileCast((undefined4 *)(param_1 + 0x34),(undefined4 *)(param_1 + 0xe0),
                                auStack_c,*(int *)(param_1 + 100) + 0x14,param_1,
                                *(undefined4 *)(param_1 + 200),0,&LAB_00494a70);
    if ((iVar2 != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0xdc) + 0x98), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1,iVar2,auStack_c);
    }
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}

