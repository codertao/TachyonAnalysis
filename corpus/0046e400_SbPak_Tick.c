
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SbPak_Tick(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_18;
  int local_8;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      if ((*(float *)(param_1 + 0x50) != _DAT_0052e598) && (*(int *)(param_1 + 0x58) != 0)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x44);
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    }
    local_8 = (int)(longlong)ROUND(*(float *)(param_1 + 0x44) * _DAT_0052e544);
    SbPak_SetVar7884(local_8);
    uVar1 = *(uint *)(param_1 + 200);
    if (uVar1 == 0xffffffff) {
      _DAT_00587898 = _DAT_00587898 + 1;
      SbPak_MoveBy(DAT_005635b0,DAT_005635b4,DAT_005635b8);
      if (*(int *)(param_1 + 0xc4) != 0) {
        fVar3 = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x90);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
        *(float *)(param_1 + 0x90) = fVar3;
        fVar4 = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x94);
        *(float *)(param_1 + 0x94) = fVar4;
        fVar5 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x98);
        *(float *)(param_1 + 0x98) = fVar5;
        fVar6 = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x9c);
        *(float *)(param_1 + 0x9c) = fVar6;
        fVar3 = fVar3 + *(float *)(param_1 + 0xb0);
        local_8 = (int)(longlong)ROUND(fVar3);
        iVar7 = local_8;
        *(int *)(param_1 + 0x14) = local_8;
        local_8 = (int)(longlong)ROUND(fVar4 + *(float *)(param_1 + 0xb4));
        iVar8 = local_8;
        *(int *)(param_1 + 0x18) = local_8;
        local_8 = (int)(longlong)ROUND(fVar5 + *(float *)(param_1 + 0xb8));
        *(int *)(param_1 + 0x1c) = local_8;
        local_18 = (int)(longlong)ROUND(fVar6 + *(float *)(param_1 + 0xbc));
        *(int *)(param_1 + 0x20) = local_18;
        *(float *)(param_1 + 0xb0) = fVar3 - (float)iVar7;
        *(float *)(param_1 + 0xb4) = fVar3 - (float)iVar8;
        *(float *)(param_1 + 0xb8) = fVar3 - (float)local_8;
        *(float *)(param_1 + 0xbc) = fVar3 - (float)local_18;
        SbPak_UpdateTransform((int *)(param_1 + 0x14));
        return;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xcc);
      if (uVar2 != 0) {
        if (uVar1 == uVar2) {
          *(undefined4 *)(param_1 + 200) = 0xffffffff;
          SbPak_SetPos(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                       *(undefined4 *)(param_1 + 0x70));
          DAT_005635b0 = *(undefined4 *)(param_1 + 0x74);
          DAT_005635b4 = *(undefined4 *)(param_1 + 0x78);
          DAT_005635b8 = *(undefined4 *)(param_1 + 0x7c);
          return;
        }
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0xd0) + uVar1 * 0x74);
        if (puVar9 != (undefined4 *)0x0) {
          if (puVar9[0x1a] == 0) {
            if (puVar9[0x1c] == 0) {
              *(uint *)(param_1 + 200) = uVar1 + 1;
              if (uVar1 + 1 < uVar2) {
                SndTrig_PlayOrPost(puVar9 + 9,&DAT_005833e0,DAT_005879a0 + 0x78);
                puVar9 = (undefined4 *)(*(int *)(param_1 + 0xd0) + *(int *)(param_1 + 200) * 0x74);
                puVar9[0x1a] = *(undefined4 *)
                                (*(int *)(param_1 + 0xd0) + 100 + *(int *)(param_1 + 200) * 0x74);
                puVar9[0x1c] = puVar9[0x1b];
                puVar9[3] = *puVar9;
                puVar9[4] = puVar9[1];
                puVar9[5] = puVar9[2];
              }
            }
            else {
              puVar9[0x1c] = puVar9[0x1c] + -1;
              puVar9[3] = puVar9[3] + puVar9[6];
              puVar9[4] = puVar9[4] + puVar9[7];
              puVar9[5] = puVar9[5] + puVar9[8];
            }
          }
          else {
            puVar9[0x1a] = puVar9[0x1a] + -1;
          }
          SbPak_SetPos(puVar9[3],puVar9[4],puVar9[5]);
        }
      }
    }
  }
  return;
}

