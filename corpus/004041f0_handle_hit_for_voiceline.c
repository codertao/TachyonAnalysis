
void handle_hit_for_voiceline(SpED *self,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00434890(*(undefined4 *)&self->field_0xd8,*(undefined4 *)&self->field_0x64);
  if (iVar2 != 0) {
    if (((*(short *)(param_2 + 0x76) == 1) && (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) &&
       (iVar3 = some_kind_of_play_sound
                          (iVar2,s_HITBY_PLAYER_00532654,0x5dc,*(undefined4 *)&self->field_0x64),
       iVar3 != 0)) {
      return;
    }
    if (((0xf < *(int *)&self[2].field_0x54) && (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) &&
       (iVar3 = some_kind_of_play_sound
                          (iVar2,s_NEED_HELP_00532648,0x5dc,*(undefined4 *)&self->field_0x64),
       iVar3 != 0)) {
      return;
    }
    if ((*(int *)&self->field_0x114 < *(int *)(*(int *)&self->field_0x8c + 0xe0)) &&
       (uVar1 = global_bad_shift_rng(), uVar1 < 15000)) {
      some_kind_of_play_sound(iVar2,s_SHIELDS_DOWN_00532638,30000,*(undefined4 *)&self->field_0x64);
    }
  }
  return;
}

