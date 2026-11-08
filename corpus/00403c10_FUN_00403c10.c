
void FUN_00403c10(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_00434890(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    uVar1 = global_bad_shift_rng();
    if (uVar1 < 15000) {
      some_kind_of_play_sound(iVar2,s_MADE_KILL_00532618,3000,*(undefined4 *)(param_1 + 100));
    }
  }
  return;
}

