
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: overwrites file LOD distances (all but last): d_i = (r +
   r*focal(0x604470)/((screenW/4)>>i)) * LOD scale 0x668f88, i.e. LOD i+1 once projected radius <
   (W/4)/2^i px; last entry clamped separately */

void Pak_ComputeLodDistances(int param_1)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int local_1c;
  
  puVar4 = *(uint **)(param_1 + 0x90);
  uVar6 = DAT_00604448 >> 2;
  if ((*(int *)(param_1 + 0x2c) != 0) && (uVar5 = 0, *(int *)(param_1 + 0x2c) != 1)) {
    do {
      local_1c = (int)(longlong)
                      ROUND(((float10)*(uint *)(param_1 + 0x30) * (float10)DAT_00604470) /
                            (float10)uVar6);
      uVar3 = *(uint *)(param_1 + 0x30) + local_1c;
      *puVar4 = uVar3;
      lVar1 = (longlong)(int)uVar3 * (longlong)DAT_00668f88;
      *puVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      uVar6 = uVar6 >> 1;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < *(int *)(param_1 + 0x2c) - 1U);
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  fVar2 = (float)uVar6 * (float)DAT_00604470 * _DAT_0052ef58;
  if ((float)(uVar6 >> 0x10) + fVar2 <= _DAT_0052ef54) {
    local_1c = (int)(longlong)ROUND(fVar2 * _DAT_0052ef50);
    *puVar4 = uVar6 - local_1c;
    return;
  }
  *puVar4 = 0x75300000;
  return;
}

