
/* run part animators: rot = base + rate*t; blink modes 1 random / 2 periodic / 4 copy other part's
   hidden bit */

void Model_UpdateState(int param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  if (((*(int *)(param_1 + 0x40) != 0) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x4c), iVar2 != 0)) &&
     (param_2 < *(uint *)(iVar2 + 0x10))) {
    puVar4 = *(uint **)(*(int *)(iVar2 + 0x14) + 4 + param_2 * 0x74);
    puVar1 = (uint *)(*(int *)(iVar2 + 0x14) + param_2 * 0x74);
    param_2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*puVar4 < param_4) {
          iVar2 = param_3 + *puVar4 * 0x2c;
          *(uint *)(iVar2 + 4) =
               puVar4[8] +
               ((uint)((longlong)(int)puVar4[2] * (longlong)DAT_00668fdc) >> 0x10 |
               (int)((ulonglong)((longlong)(int)puVar4[2] * (longlong)DAT_00668fdc) >> 0x20) << 0x10
               );
          *(uint *)(iVar2 + 8) =
               puVar4[9] +
               ((uint)((longlong)(int)puVar4[3] * (longlong)DAT_00668fdc) >> 0x10 |
               (int)((ulonglong)((longlong)(int)puVar4[3] * (longlong)DAT_00668fdc) >> 0x20) << 0x10
               );
          *(uint *)(iVar2 + 0xc) =
               puVar4[10] +
               ((uint)((longlong)(int)puVar4[4] * (longlong)DAT_00668fdc) >> 0x10 |
               (int)((ulonglong)((longlong)(int)puVar4[4] * (longlong)DAT_00668fdc) >> 0x20) << 0x10
               );
          uVar3 = puVar4[1];
          if ((uVar3 & 1) == 0) {
            if ((uVar3 & 2) == 0) {
              if (((uVar3 & 4) != 0) && (puVar4[6] <= param_4)) {
                uVar3 = *(uint *)(iVar2 + 0x10) & 0xffffff7f;
                *(uint *)(iVar2 + 0x10) = uVar3;
                *(uint *)(iVar2 + 0x10) =
                     *(uint *)(param_3 + 0x10 + puVar4[6] * 0x2c) & 0x80 | uVar3;
              }
              goto LAB_004b2913;
            }
            bVar5 = puVar4[5] < (puVar4[6] + (DAT_00668fdc * puVar4[7] >> 0x10) & 0xffff);
          }
          else {
            uVar3 = Rng_Pak();
            bVar5 = puVar4[5] < (uVar3 & 0xffff);
          }
          if (bVar5) {
            *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x80;
          }
          else {
            *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xffffff7f;
          }
        }
LAB_004b2913:
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 0xb;
      } while (param_2 < *puVar1);
    }
    State_UpdateCounters(puVar1);
    State_EvalCurves(param_1,puVar1);
  }
  return;
}

