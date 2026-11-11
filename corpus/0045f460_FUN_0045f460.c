
void FUN_0045f460(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_4;
  
  local_4 = 0;
  uVar2 = FUN_0045f3f0(*param_2,&DAT_006240e8,&local_4,*(int *)(param_1 + 200) + 0x34);
  FUN_0045f3f0(param_2[1],uVar2,&local_4,*(int *)(param_1 + 200) + 0x34);
  DAT_0062c0e8 = local_4;
  call_SortPairs_Asc();
  puVar1 = (undefined4 *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x120) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x120));
  }
  FUN_0048e3a0(puVar1,local_4 * 4,4,s_PLAYER_STATIC_OBJ_LIST_005493c4,
               *(undefined4 *)(param_1 + 0x10));
  puVar5 = (undefined4 *)*puVar1;
  uVar3 = 0;
  puVar4 = &DAT_006240e8;
  if (local_4 != 0) {
    do {
      *puVar5 = *puVar4;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 1;
    } while (uVar3 < local_4);
  }
  *(uint *)(param_1 + 0x124) = local_4;
  *(undefined4 *)(param_1 + 0x128) = *puVar1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(uint *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1U | 1;
  return;
}

