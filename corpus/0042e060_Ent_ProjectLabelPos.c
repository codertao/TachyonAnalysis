
/* sweep */

void Ent_ProjectLabelPos(int param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = GLBL_SOME_CONTEXT;
  if (((*(byte *)(DAT_005b95e0 + 0xc) & 4) != 0) && (0x13fff < *(int *)(param_1 + 0x48))) {
    uVar2 = call_approx_vec_length(param_1 + 0x40);
    if (uVar2 < 0x493e0001) {
      lVar1 = (longlong)DAT_005a67e4;
      uVar3 = Ent_GetTargetRadius(param_1);
      uVar2 = Hud_ScaleByFov(*(undefined4 *)(param_1 + 0x48),uVar3);
      if (((uint)(lVar1 * 4) >> 0x10 | (int)((ulonglong)(lVar1 * 4) >> 0x20) << 0x10) <= uVar2) {
        local_10 = DAT_005a67d4;
        local_c = DAT_005a67d8;
        View_ProjectPointFixed(param_1 + 0x40,local_18);
        uVar4 = Vec_LengthFast(local_18,&local_10);
        uVar2 = DAT_005b186c;
        if ((param_1 != *(int *)(local_8 + 0x90)) && (0x3200 < DAT_005b186c)) {
          uVar2 = 0x3200;
        }
        if (uVar4 < uVar2) {
          DAT_005b1864 = param_1;
          DAT_005b186c = uVar4;
        }
      }
    }
  }
  return;
}

