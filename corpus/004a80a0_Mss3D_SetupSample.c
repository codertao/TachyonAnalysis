
/* sweep */

void Mss3D_SetupSample(uint param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  int *local_28 [2];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_3 + 0xc) != 0) && (param_1 < *(uint *)(param_3 + 4))) {
    puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + param_1 * 0x38);
    uVar2 = *puVar1;
    if (puVar1[1] != *param_2) {
      _AIL_end_3D_sample_4(uVar2);
      piVar6 = (int *)*param_2;
      if (*piVar6 == DAT_0055e4a4) {
        ppiVar5 = local_28;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppiVar5 = (int *)0x0;
          ppiVar5 = ppiVar5 + 1;
        }
        local_28[1] = piVar6 + 4;
        local_28[0] = (int *)0x1;
        local_20 = piVar6[1];
        local_14 = 1;
        local_1c = 0x5622;
        local_18 = 8;
        _AIL_set_3D_sample_info_8(uVar2,local_28);
      }
      else {
        _AIL_set_3D_sample_file_8(uVar2,piVar6);
      }
      _AIL_set_3D_sample_offset_8(uVar2,0);
      _AIL_set_3D_sample_loop_count_8(uVar2,0);
      if (DAT_00603968 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)param_2[1] >> 1;
      }
      _AIL_set_3D_sample_volume_8(uVar2,uVar7);
      if (param_2[3] != puVar1[4]) {
        lVar3 = (longlong)param_2[3] * 0x5622;
        _AIL_set_3D_sample_playback_rate_8
                  (uVar2,(uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      }
      _AIL_set_3D_position_16(uVar2,param_2[6],param_2[7],param_2[8]);
      _AIL_set_3D_velocity_vector_16(uVar2,param_2[9],param_2[10],param_2[0xb]);
      _AIL_set_3D_orientation_28(uVar2,0,0,0xbf800000,0,0x3f800000,0);
      _AIL_set_3D_sample_distances_12(uVar2,param_2[5],param_2[4]);
      _AIL_start_3D_sample_4(uVar2);
      piVar6 = puVar1 + 1;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *param_2;
        param_2 = param_2 + 1;
        piVar6 = piVar6 + 1;
      }
      return;
    }
    if (DAT_00603968 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)param_2[1] >> 1;
    }
    _AIL_set_3D_sample_volume_8(uVar2,uVar7);
    if (param_2[3] != puVar1[4]) {
      lVar3 = (longlong)param_2[3] * 0x5622;
      _AIL_set_3D_sample_playback_rate_8
                (uVar2,(uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    }
    _AIL_set_3D_position_16(uVar2,param_2[6],param_2[7],param_2[8]);
    _AIL_set_3D_velocity_vector_16(uVar2,param_2[9],param_2[10],param_2[0xb]);
    _AIL_set_3D_orientation_28(uVar2,0,0,0xbf800000,0,0x3f800000,0);
    _AIL_set_3D_sample_distances_12(uVar2,param_2[5],param_2[4]);
    piVar6 = puVar1 + 1;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *param_2;
      param_2 = param_2 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  return;
}

