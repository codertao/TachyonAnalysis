
int * FUN_004a7c90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [36];
  
  piVar4 = param_1;
  local_2c = FUN_0049c780(param_1);
  if (*piVar4 != DAT_0055e4a4) {
    uVar1 = _AIL_file_type_8(piVar4,local_2c);
    switch(uVar1) {
    default:
      goto switchD_004a7cd2_caseD_1;
    case 2:
      _AIL_WAV_info_8(piVar4,local_24);
      iVar2 = _AIL_decompress_ADPCM_12(local_24,&param_1,&local_2c);
      if (iVar2 != 0) {
        piVar3 = (int *)mem_GetMemEx_probably_alloc(local_2c,4,0,s_AUDIO_BUFFER_0055e564);
        if (piVar3 == (int *)0x0) {
          return (int *)0x0;
        }
        piVar6 = param_1;
        piVar7 = piVar3;
        for (uVar5 = local_2c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        for (uVar5 = local_2c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)piVar7 = (char)*piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar7 = (int *)((int)piVar7 + 1);
        }
        _AIL_mem_free_lock_4(param_1);
        OurFreeMem(piVar4);
        _AIL_WAV_info_8(piVar3,local_24);
        return piVar3;
      }
      break;
    case 3:
      piVar4 = (int *)FUN_004a7440(piVar4);
      return piVar4;
    case 0xd:
      iVar2 = _AIL_decompress_ASI_24(piVar4,local_2c,&DAT_0055e55c,&param_1,&local_28,&LAB_004a7c80)
      ;
      if (iVar2 != 0) {
        piVar3 = (int *)mem_GetMemEx_probably_alloc(local_28,4,0,s_AUDIO_BUFFER_0055e564);
        if (piVar3 == (int *)0x0) {
          return (int *)0x0;
        }
        piVar6 = param_1;
        piVar7 = piVar3;
        for (uVar5 = local_28 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        for (local_28 = local_28 & 3; local_28 != 0; local_28 = local_28 - 1) {
          *(char *)piVar7 = (char)*piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar7 = (int *)((int)piVar7 + 1);
        }
        _AIL_mem_free_lock_4(param_1);
        OurFreeMem(piVar4);
        return piVar3;
      }
    }
    _AIL_last_error_0();
  }
switchD_004a7cd2_caseD_1:
  return piVar4;
}

