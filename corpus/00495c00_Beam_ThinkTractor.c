
/* sweep: guess */

void Beam_ThinkTractor(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  vec3 local_30;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  iVar4 = *(int *)(param_1 + 0xdc);
  local_30.x = 0;
  local_30.y = 0;
  local_30.z = *(int *)(iVar4 + 0x3c);
  iVar2 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (((**(uint **)(iVar2 + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0) {
    Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
    some_rotate_by_global(&local_30,&local_30);
    local_30.x = local_30.x + *(int *)(param_1 + 0x34);
    local_30.y = local_30.y + *(int *)(param_1 + 0x38);
    local_30.z = local_30.z + *(int *)(param_1 + 0x3c);
    iVar2 = Coll_SegmentCast(&local_30,(vec3 *)(param_1 + 0x34),local_24,iVar2 + 0x14,param_1,
                             *(undefined4 *)(param_1 + 200),*(undefined4 *)(iVar4 + 0xd0),
                             &LAB_00494910);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar4 + 0x3c);
      if (*(int *)(param_1 + 200) == GLBL_SOME_CONTEXT) {
        Hud_SetTractorSound(DAT_005b1b3c,1);
        Hud_SetBeamLight(1,0,0x80,0x80);
      }
    }
    else {
      uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar2 + 0x34));
      *(undefined4 *)(param_1 + 0xd4) = uVar3;
      if ((*(int *)(param_1 + 0xd8) == 1) && (*(int *)(param_1 + 200) == GLBL_SOME_CONTEXT)) {
        *(undefined4 *)(param_1 + 0xec) = 1;
        if ((*(int *)(iVar2 + 0x8c) != 0) &&
           (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
          iVar4 = (*pcVar1)(iVar2,0xf,0);
          if (iVar4 != 0) {
            Music_SetCombatTarget(iVar2,1);
            Hud_SetTractorSound(DAT_005b1b40,1);
            Hud_SetBeamLight(1,0,0xff,0xff);
            return;
          }
        }
      }
    }
  }
  return;
}

